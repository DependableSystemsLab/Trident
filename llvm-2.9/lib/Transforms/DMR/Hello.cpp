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
		std::vector<long> selectedInsts;
		std::vector<long> duplicatedInsts;
		Module *appModule;
		//Function *hook;
		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{

			appModule = &M;
			//Constant *hookFunc;
			//hookFunc = M.getOrInsertFunction("profileTrace", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);

			//hook= cast<Function>(hookFunc);
			readSelectSet();

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				//std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			errs() << "Added Duplication " << duplicatedInsts.size() << '\n';
			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				// Check if the current index is selected
				long llfiIndex = getLLFIIndexOfInst(BI);
				if(std::find(selectedInsts.begin(), selectedInsts.end(), llfiIndex) != selectedInsts.end()) {

					Instruction* currentInst = BI;
					Instruction* duplicatedInst = currentInst->clone();
					BasicBlock::iterator nextInst = currentInst;
					nextInst++;
					duplicatedInst->insertBefore(nextInst);								
					// Remove llfi_index
					long dupId = getLLFIIndexOfInst(duplicatedInst);
					duplicatedInst->setMetadata("llfi_index", NULL);
					// Adding new dup_index with the same llfi index
					Value* dupIndexValue = ConstantInt::get(Type::getInt64Ty(context), dupId);
					MDNode *mdnode = MDNode::get(context, dupIndexValue);
					duplicatedInst->setMetadata("dup_index", mdnode);

					for(unsigned int j = 0; j < duplicatedInst->getNumOperands(); j++){
						duplicatedInst->setOperand(j, currentInst->getOperand(j));
					}

					Instruction* lastDupInst = duplicatedInst;
					Instruction* lastInst = currentInst;
					int lastOperandIndex = -1;
					int usesEndFlag = 1;

					errs() << "\n";
					while(usesEndFlag){

						if(currentInst->use_begin() == currentInst->use_end()){
							usesEndFlag = 0;
							break;
						}

						// Go to next use instruction
						Instruction* nextUseInstruction;
						for(Value::use_iterator UI = currentInst->use_begin(); UI != currentInst->use_end(); UI++){

							nextUseInstruction = dyn_cast<Instruction>(*UI);
							errs() << "  -- in use: " << getLLFIIndexOfInst(nextUseInstruction) << "\n";


							if( getLLFIIndexOfInst(nextUseInstruction) < getLLFIIndexOfInst(lastInst) ){
								errs() << "--> Reverse order uses\n";
								usesEndFlag = 0;

								// Insert check call
								//insertCallWrapper(nextUseInstruction, lastInst, lastDupInst);
								//insertCheckFlag(nextUseInstruction);

								break;
							}

							if( getLLFIIndexOfInst(nextUseInstruction) ==0 && getDupIndexOfInst(nextUseInstruction) ==0 ){
								errs() << "--> Junk inst\n";
								continue;
							}


							for(unsigned int i = 0; i < nextUseInstruction->getNumOperands(); i++){
								// Keep track of operand position of last inst
								if ( nextUseInstruction->getOperand(i) == lastInst ){
									errs() << "  -- current position: " << i << "\n";
									lastOperandIndex = i;
									break;
								}
							}

							if( !isInstSync(nextUseInstruction) && getLLFIIndexOfInst(nextUseInstruction) != 0 ){

								duplicatedInst = nextUseInstruction->clone();
								BasicBlock::iterator nextInst = nextUseInstruction;
								nextInst++;
								duplicatedInst->insertBefore(nextInst);
								// Remove llfi_index
								long dupId = getLLFIIndexOfInst(duplicatedInst);
								duplicatedInst->setMetadata("llfi_index", NULL);
								// Adding new dup_index with the same llfi index
								Value* dupIndexValue = ConstantInt::get(Type::getInt64Ty(context), dupId);
								MDNode *mdnode = MDNode::get(context, dupIndexValue);
								duplicatedInst->setMetadata("dup_index", mdnode);								

								for(unsigned int j = 0; j < duplicatedInst->getNumOperands(); j++){
									if (j == lastOperandIndex && !isInstSync(lastInst) ){
										duplicatedInst->setOperand(j, lastDupInst);
									}else{
										duplicatedInst->setOperand(j, nextUseInstruction->getOperand(j));
									}
								}
							}else if (getLLFIIndexOfInst(nextUseInstruction) == 0 || getDupIndexOfInst(nextUseInstruction) != 0){
								errs() << "--> Meet dup inst\n";

								// Insert check call
								//insertCallWrapper(nextUseInstruction);
								//insertCheckFlag(nextUseInstruction);

								usesEndFlag = 0;
								break;
							}else if( isInstSync(nextUseInstruction) ){
								// Insert check call
								//insertCallWrapper(nextUseInstruction);
								//insertCheckFlag(nextUseInstruction);
								//insertCheckMarker(nextUseInstruction);
								if(getLLFIIndexOfInst(lastInst) != getDupIndexOfInst(lastDupInst) && getLLFIIndexOfInst(lastInst) != 0){
									errs() << "**********FAIL TRACING LAST INST********** -> " << getLLFIIndexOfInst(nextUseInstruction) << " lastInst: " <<getLLFIIndexOfInst(lastInst) << " - lastDupInst: " << getDupIndexOfInst(lastDupInst) << "\n";
								}else{
									insertCallWrapper(nextUseInstruction, lastInst, lastDupInst);	
									//insertCheckFlag(nextUseInstruction);
									usesEndFlag = 0;
									break;
									//lastDupInst = nextUseInstruction;
								}
							}

							lastDupInst = duplicatedInst;
							lastInst = nextUseInstruction;

						}
						currentInst = nextUseInstruction;
					}

				}

			}
			return true;
		}

		long getLLFIIndexOfInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("llfi_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			}
			return 0;
		}

		long getDupIndexOfInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("dup_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			}
			return 0;
		}

		void readSelectSet(){
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
					selectedInsts.push_back(currentIndex);
				}
			}
			//std::sort(selected_insts.begin(), selected_insts.end());
		}

		bool isInstSync(Instruction *inst){
			int opcode = inst->getOpcode();
			if(opcode == 28 || opcode < 8 || opcode >= 43) return true;
			else return false;
		}

		bool isInstDuped(Instruction *inst){
			BasicBlock::iterator nextInst = inst;
			nextInst++;
			MDNode *mdnode = nextInst->getMetadata("dup_index");
			if (mdnode) {
				return true;
			}
			return false;

		}

		void insertCheckFlag(Instruction* instPos){
			LLVMContext& context = appModule->getContext();
			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("check_flag", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, "", instPos);
		}

		void insertCheckMarker(Instruction* inst){
			LLVMContext& context = appModule->getContext();
			long checkId = 0;
			Value* metaValue = ConstantInt::get(Type::getInt64Ty(context), checkId);
			MDNode *mdnode = MDNode::get(context, metaValue);
			inst->setMetadata("check_id", mdnode);
		}

		void insertCallWrapper(Instruction* currentInst, Instruction* lastInst, Instruction* lastDupInst){
			
			errs() << "***Insert wrapper: " << getLLFIIndexOfInst(currentInst) << " - " << getLLFIIndexOfInst(lastInst) << " - " << getDupIndexOfInst(lastDupInst) << "\n";

			LLVMContext& context = appModule->getContext();
			// Insert sync_check() external function calls
			// 1: i1
			// 2: double
			// 32: i32
			// 64: i64
			// 0: float
			int typeID = -1;
			if ( lastInst->getType()->isIntegerTy(1) ) typeID = 1;
			if ( lastInst->getType()->isIntegerTy(32) ) typeID = 32;
			if ( lastInst->getType()->isIntegerTy(8) ) typeID = 8;
			if ( lastInst->getType()->isIntegerTy(16) ) typeID = 16;
			if ( lastInst->getType()->isIntegerTy(64) ) typeID = 64;
			if ( lastInst->getType()->isDoubleTy() ) typeID = 2;
			if ( lastInst->getType()->isFloatTy() ) typeID = 0;

			if ( lastInst->getType()->isPointerTy() ){
				if (
						lastInst->getType() == Type::getInt1PtrTy(context) ||
						lastInst->getType() == Type::getInt8PtrTy(context) ||
						lastInst->getType() == Type::getInt16PtrTy(context) ||
						lastInst->getType() == Type::getInt32PtrTy(context) ||
						lastInst->getType() == Type::getInt64PtrTy(context) ||
						lastInst->getType() == Type::getDoublePtrTy(context) ||
						lastInst->getType() == Type::getFloatPtrTy(context) 
				   )
					typeID = -1;
				else
					typeID = -1;								
			}

			if (typeID == -1){
				errs() << " ** No Type Recg\n";
			}else{
				errs() << "* Inserting function call\n";
				insertCallToCheck(currentInst, lastDupInst, lastInst, typeID);
			}
		}

		void insertCallToCheck(Instruction *insert_pos, Instruction *arg1_inst, Instruction *arg2_inst, int typeID){

			errs() << "Inserting at " << getLLFIIndexOfInst(insert_pos) << "\n";

			LLVMContext& context = appModule->getContext();
			Function* checker_handler;
			std::string checkerFunctionName = "";
			std::vector<Value*> checker_args(2);
			checker_args[0] = arg1_inst;
			checker_args[1] = arg2_inst;
			// We need to declare it
			std::vector<const Type*> checker_arg_types(2);

			// Based on the type ID, we create different types for arguements.
			// 1: i1
			// 2: double
			// 32: i32
			// 64: i64
			// 0: float
			switch(typeID){
				case 1:
					checker_arg_types[0] = Type::getInt1Ty(context);
					checker_arg_types[1] = Type::getInt1Ty(context);
					checkerFunctionName = "sync_check_bool";
					break;
				case 8:
					checker_arg_types[0] = Type::getInt8Ty(context);
					checker_arg_types[1] = Type::getInt8Ty(context);
					checkerFunctionName = "sync_check_int";
					break;
				case 16:
					checker_arg_types[0] = Type::getInt16Ty(context);
					checker_arg_types[1] = Type::getInt16Ty(context);
					checkerFunctionName = "sync_check_int";
					break;
				case 32:
					checker_arg_types[0] = Type::getInt32Ty(context);
					checker_arg_types[1] = Type::getInt32Ty(context);
					checkerFunctionName = "sync_check_int";
					break;
				case 64:
					checker_arg_types[0] = Type::getInt64Ty(context);
					checker_arg_types[1] = Type::getInt64Ty(context);
					checkerFunctionName = "sync_check_long";
					break;
				case 0:
					checker_arg_types[0] = Type::getFloatTy(context);
					checker_arg_types[1] = Type::getFloatTy(context);
					checkerFunctionName = "sync_check_float";
					break;
				case 2:
					checker_arg_types[0] = Type::getDoubleTy(context);
					checker_arg_types[1] = Type::getDoubleTy(context);
					checkerFunctionName = "sync_check_double";
					break;
				case 100:
					Instruction* lastInst = arg2_inst;
					checker_arg_types[0] = lastInst->getType();
					checker_arg_types[1] = lastInst->getType();
					checkerFunctionName = "sync_check_ptr";
					break;
			}

			errs() << "TYPE ID: " << typeID << "\n";
			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction(checkerFunctionName, checker_type);
			checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", insert_pos);
		}

	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
