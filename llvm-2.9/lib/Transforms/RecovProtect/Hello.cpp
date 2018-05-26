#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/Support/CommandLine.h"
//#include <string>

#include <iostream>
#include <fstream>
#include <set>
#include <list>
#include <sstream>
#include <algorithm>
#include <sstream>

using namespace llvm;

static cl::opt<std::string> cl_select_set_file_name("select_set_file", cl::desc("Specify the file of selected sets"), cl::value_desc("file name"));

namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		std::vector<long> selectedIndexInsts;
		std::vector<long> duplicatedIndexInsts;

		std::vector<Instruction*> selectedInsts, duplicatedInsts;
		Module *appModule;
		Function *hook;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc;
			hookFunc = M.getOrInsertFunction("dumpIndex", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);

			hook= cast<Function>(hookFunc);
			appModule = &M;
			readSelectSet();

			// STEP 1: DUPLICATION
			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				//std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			// STEP 2: Go through duplication list and connect them
			for(int i=0;i<selectedInsts.size();i++){
				Instruction* currentInst = selectedInsts.at(i);
				for(unsigned int j = 0; j < currentInst->getNumOperands(); j++){
					//duplicatedInst->setOperand(j, BI->getOperand(j));
					if(getIndexOfDependentInst(currentInst->getOperand(j)) >= 0){
						long dependentIndex = getIndexOfDependentInst(currentInst->getOperand(j));
						Instruction* currentDuplicatedInst = getInstFromDuplicationByIndex(getLLFIIndexofInst(currentInst));
						Instruction* dependentDuplicationInst = getInstFromDuplicationByIndex(dependentIndex);
						currentDuplicatedInst->setOperand(j, dependentDuplicationInst);
					}
				}

			}

			// STEP 3: Insert cmp
			for(int i=0 ;i<selectedInsts.size();i++){
				Instruction* currentInst = selectedInsts.at(i);
				// 1. check if this inst is used in any other selected inst
				// if no, insert a check
				if(!isUsedInOtherOperand(currentInst)){
					//errs() << "Insert a cmp: " << getLLFIIndexofInst(currentInst) << "\n";
					Instruction* duplicatedInst = getInstFromDuplicationByIndex(getLLFIIndexofInst(currentInst));
					BasicBlock::iterator cmpPosInst = duplicatedInst;
					cmpPosInst++;
					if(cmpPosInst->getOpcode() == 44){
						//errs() << "PHI\n";
						continue;
					}
					Instruction* cmpInst = insertCmp(cmpPosInst, currentInst, duplicatedInst);

					BasicBlock::iterator checkPosInst = cmpPosInst;
					//checkPosInst++;
					insertCheckFunction(checkPosInst, cmpInst, M.getContext());
				}
			}

			errs() << "Added Duplication " << duplicatedInsts.size() << '\n';
			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			//Instruction* lastInst = NULL;
			//Instruction* lastDupInst = NULL;			

			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				// Check if the current index is selected
				long llfiIndex = getLLFIIndexofInst(BI);
				if(std::find(selectedIndexInsts.begin(), selectedIndexInsts.end(), llfiIndex) != selectedIndexInsts.end()) {
					if(std::find(duplicatedIndexInsts.begin(), duplicatedIndexInsts.end(), llfiIndex) != duplicatedIndexInsts.end()) {
						continue;
					}

					// We do not clone store, br and call etc
					int opcode = BI->getOpcode();
					if(opcode == 28 || opcode < 8 || opcode >= 45 || opcode == 26) continue;

					selectedInsts.push_back(BI);

					//errs() << "Duplicating " << llfiIndex << "\n";
					Instruction* duplicatedInst = BI->clone();


					// For debugging, dump duplicated index
					/*
					if(opcode != 44){
						Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
						CallInst* call_print = CallInst::Create(hook, indexValue, "");
						BB->getInstList().insert(BI, call_print);
					}
					*/
					///////////////////////////////////////

					for(unsigned int i = 0; i < duplicatedInst->getNumOperands(); i++){
						duplicatedInst->setOperand(i, BI->getOperand(i));
					}


					// Switch index
					//MDNode *mdnode = BI->getMetadata("llfi_index");
					//BI->setMetadata("llfi_index", NULL);
					//duplicatedInst->setMetadata("llfi_index", mdnode);

					//errs() << "Inserting the duplicated instruction \n";
					BasicBlock::iterator nextInst = BI;
					nextInst++;
					duplicatedInst->insertBefore(nextInst);
					duplicatedIndexInsts.push_back(llfiIndex);
					duplicatedInsts.push_back(duplicatedInst);

					//lastInst = BI;
					//lastDupInst = duplicatedInst;

					// If the next instruction is sync inst, then add sync_check()
					//errs() << "- at " << getLLFIIndexofInst(duplicatedInst) << "\n";
					/*
					   if ( isInstSync(nextInst) ){
					//errs() << " --> inserting at " << getLLFIIndexofInst(nextInst) << "\n";
					//insertCheckFlag(nextInst);

					// Instead of inserting function call directly, we create cmp inst.
					//insertCheckSync(nextInst);
					Instruction* cmpInst = insertCmp(nextInst, BI, duplicatedInst);
					BasicBlock::iterator nextInst = cmpInst;
					nextInst++;
					insertCheckFunction(nextInst, cmpInst, context);
					}
					 */

				}else{
					continue;
				}

			}
			return true;
		}

		void insertCheckFunction(Instruction* instPos, Instruction* cmpInst, LLVMContext &context){
			new BitCastInst(cmpInst, Type::getInt1Ty(context), "extended_check_cmp", instPos);

			std::vector<Value*> checker_args(1);
			checker_args[0] = cmpInst;
			//checker_args[1] = instPos->getOperand(0);
			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = cmpInst->getType();
			//checker_arg_types[1] = instPos->getOperand(0)->getType();

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("checker_cmp", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", instPos);


		}

		Instruction* insertCmp(Instruction* insertionLocationInst, Instruction* cmpInstOne, Instruction* cmpInstTwo){
			CmpInst* check_cmp = NULL;
			if(cmpInstOne->getType()->isFloatingPointTy()){
				check_cmp = CmpInst::Create(Instruction::FCmp, CmpInst::CmpInst::FCMP_UEQ, cmpInstOne, cmpInstTwo, "check_cmp", insertionLocationInst);
			}else{
				check_cmp = CmpInst::Create(Instruction::ICmp, CmpInst::ICMP_EQ, cmpInstOne, cmpInstTwo, "check_cmp", insertionLocationInst);	
			}
			return check_cmp;

		}

		long getLLFIIndexofInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("llfi_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			}
			return 0;
		}

		bool isInstSync(Instruction *inst){
			int opcode = inst->getOpcode();
			if(opcode == 28 || opcode < 8 || opcode >= 43) return true;
			else return false;
		}

		void insertCheckFlag(Instruction* instPos){
			LLVMContext& context = appModule->getContext();
			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("check_flag", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, "", instPos);
		}

		void insertCheckSync(Instruction* instPos){
			LLVMContext& context = appModule->getContext();

			std::vector<Value*> checker_args(2);
			checker_args[0] = instPos->getOperand(0);
			checker_args[1] = instPos->getOperand(0);
			std::vector<const Type*> checker_arg_types(2);
			checker_arg_types[0] = instPos->getOperand(0)->getType();
			checker_arg_types[1] = instPos->getOperand(0)->getType();

			if(instPos->getOperand(0)->getType()->isIntegerTy(32) && instPos->getOpcode() == 28){
				FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
				Constant* checker_handler_c = appModule->getOrInsertFunction("check_sync", checker_type);
				Function* checker_handler = dyn_cast<Function>(checker_handler_c);
				CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", instPos);
			}else{
				FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), false);
				Constant* checker_handler_c = appModule->getOrInsertFunction("check_flag", checker_type);
				Function* checker_handler = dyn_cast<Function>(checker_handler_c);
				CallInst::Create(checker_handler, "", instPos);
			}

		}

		void readSelectSet()
		{
			std::ifstream select_set_file;
			select_set_file.open(cl_select_set_file_name.c_str());
			if(!select_set_file.is_open())
			{
				errs()<<"\nERROR: can not open select_set_file!\n";
				exit(1);
			}

			while(select_set_file.good())
			{
				std::string line;
				getline(select_set_file, line);
				if(line.empty())	continue;
				else
				{
					long currentIndex = atol(line.c_str());
					//errs() << "Select Index: " << currentIndex << "\n";
					selectedIndexInsts.push_back(currentIndex);
				}
			}
			//std::sort(selected_insts.begin(), selected_insts.end());
		}
	
		long getIndexOfDependentInst(Value* operand){
			if( !isa<Instruction>(operand) ) return -1;
			
			Instruction* operandInst = cast<Instruction>(operand);
			
			for(int i=0;i<selectedInsts.size();i++){
				if(operandInst==selectedInsts.at(i)) return getLLFIIndexofInst(selectedInsts.at(i));
			}
			return -1;
		}

		Instruction* getInstFromDuplicationByIndex(long llfiIndex){
			for(int i=0;i<duplicatedInsts.size();i++){
				if( llfiIndex == getLLFIIndexofInst(duplicatedInsts.at(i)) ){
					return duplicatedInsts.at(i);
				}
			}
		}

		bool isUsedInOtherOperand(Instruction* targetInst){
			for(int i=0;i<selectedInsts.size();i++){
				Instruction* currentInst = selectedInsts.at(i);
				for(unsigned int j = 0; j < currentInst->getNumOperands(); j++){
					Value* operandValue = currentInst->getOperand(j);
					if(isa<Instruction>(operandValue)){
						Instruction* operandInst = cast<Instruction>(operandValue);
						if(operandInst==targetInst) return true;
					}
				}
			}
			return false;
		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
