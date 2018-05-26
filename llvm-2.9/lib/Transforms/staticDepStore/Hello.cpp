#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include <string>
#include "llvm/Support/CommandLine.h"
#include <iostream>

using namespace llvm;


static cl::opt<std::string> cl_select_index("select_index", cl::desc("Specify llfi index to analyze"), cl::value_desc("llfi index"));


namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		long targetIndex = 0;
		std::vector<Value*> visitedInstVector;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			//errs() << "Analyzing Error Propagation ..." << '\n';

			readSelectIndex();
			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB){
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				//errs() << BI->getOpcode() << "\n";
				//errs() << BI->getOpcodeName() << "\n";
				long llfiIndex = getLLFIIndexofInst(BI);
				int opcode = BI->getOpcode();
				if (llfiIndex == targetIndex){
					// The target one
					//errs() << llfiIndex << "->";
					checkNextUseInst(dyn_cast<Value>(BI) );
				}
			}
			return true;
		}

		long getLLFIIndexofInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("llfi_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			}
			return 0;
		}

		void readSelectIndex(){
			targetIndex = std::atol(cl_select_index.c_str());
		}

		////////////////////////////////////////////////////
		void checkNextUseInst(Value* nextInst){

			if( std::find(visitedInstVector.begin(), visitedInstVector.end(), nextInst) != visitedInstVector.end() ){
				return;
			}

			// Add to visited
			visitedInstVector.push_back(nextInst);

			// Recursion to check
			Value::use_iterator UI = nextInst->use_begin();
			Value::use_iterator UE = nextInst->use_end();
			Value* nextIterateInst;
			while(UI!=UE){
				Instruction* currentInst = dyn_cast<Instruction>(*UI);
				if( std::find(visitedInstVector.begin(), visitedInstVector.end(), currentInst) != visitedInstVector.end() ){
					return;
				}else{
					//errs() << getLLFIIndexofInst(currentInst);
				}

				if(isa<CmpInst>(currentInst)){
/*
					errs() << "cmp:" << getLLFIIndexofInst(currentInst) << ":" << dyn_cast<CmpInst>(currentInst)->getPredicate();
					if( currentInst->getOperand(0)->getType()->isIntegerTy(1) == true ){
						errs() << ":1\n";
					}else if( currentInst->getOperand(0)->getType()->isIntegerTy(8) == true ){
						errs() << ":8\n";
					}else if( currentInst->getOperand(0)->getType()->isIntegerTy(16) == true ){
						errs() << ":16\n";
					}else if( currentInst->getOperand(0)->getType()->isIntegerTy(32) == true ){
						errs() << ":32\n";
					}else if( currentInst->getOperand(0)->getType()->isIntegerTy(64) == true ){
						errs() << ":64\n";
					}else{
						errs() << ":32\n";
					}
				}else if(isa<CallInst>(currentInst)){
					//errs() << " - FUNC\n";
*/					
//					errs() << "call " << getLLFIIndexofInst(currentInst) << " " << dyn_cast<CallInst>(currentInst)->getCalledFunction()->getName() << "\n";
				}else if(isa<StoreInst>(currentInst)){
					//if( dyn_cast<StoreInst>(currentInst)->getPointerOperand() == nextInst ){
						// Next use is pointer in store
						//errs() << ".ST(A)->";
						//errs() << "\n";
					//	return;
					//}else{
						// Data
					errs() << "store:" << getLLFIIndexofInst(currentInst) << ":" << currentInst->getOperand(0)->getType()->getTypeID() << "\n";
					return;
					//}
					//errs() << " - STORE\n";
				}else if(isa<ReturnInst>(currentInst)){
					//errs() << " - RTN\n";
				}else if(isa<LoadInst>(currentInst)){
					//errs() << ".LD->";
					//errs() << "\n";
					//return;
				}else if(isa<BinaryOperator>(currentInst)){
					//errs() << "bio " << getLLFIIndexofInst(currentInst) << "\n";
				}else if(isa<GetElementPtrInst>(currentInst)){
					//errs() << "getptr:" << getLLFIIndexofInst(currentInst) << "\n";
				}else if(currentInst->getOpcode() == 22){
					// Ashr
					//errs() << "ashr:" << getLLFIIndexofInst(currentInst) << "\n";
				}else if(currentInst->getOpcode() == 21){
					// Lshr
					//errs() << "lshr:" << getLLFIIndexofInst(currentInst) << "\n";
				}else if(currentInst->getOpcode() == 23){
					// and
					//errs() << "and:" << getLLFIIndexofInst(currentInst) << "\n";
				}else if(currentInst->getOpcode() == 24){
					// or
					//errs() << "or:" << getLLFIIndexofInst(currentInst) << "\n";
				}else if(currentInst->getOpcode() == 25){
					// xor
					//errs() << "xor:" << getLLFIIndexofInst(currentInst) << "\n";
				}
				//errs() << "->";

				nextIterateInst = *UI;
				checkNextUseInst(nextIterateInst);
				UI++;
			}

		}

	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
