#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Argument.h"
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
		Module *module;
		long targetIndex = 0;
		std::vector<Value*> visitedInstVector;
		//std::vector<int> resultTypeVector;
		std::vector<Function*> definedFunctionVector;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{

			module = &M;
			readSelectIndex();

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F){
				int bbCount = 0;
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB){
					bbCount++;
				}
				if(bbCount>0){
					definedFunctionVector.push_back(F);
					//errs() << F->getName() << "\n";
				}
			}

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F){
				//errs() << F->getName() << '\n';
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			errs() << "Find Ending Inst ..." << '\n';

			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				long llfiIndex = getLLFIIndexofInst(BI);
				if (llfiIndex == targetIndex){
					// The target one
					checkNextUseInst(dyn_cast<Value>(BI) );
				}

			}

			return true;
		}


		////////////////////////////////////////////////////////////


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

		void checkNextUseInst(Value* nextInst){

			//errs() << "Check Next \n";
/*
			if( isa<StoreInst>(nextInst) || isa<BranchInst>(nextInst) || isa<CallInst>(nextInst) || isa<AllocaInst>(nextInst) ){
				return;
			}
*/
			if( std::find(visitedInstVector.begin(), visitedInstVector.end(), nextInst) != visitedInstVector.end() ){
				return;
			}

			// Add to visited
			visitedInstVector.push_back(nextInst);

			// Recursion to check
			Value::use_iterator UI = nextInst->use_begin();
			Value::use_iterator UE = nextInst->use_end();
			Value* nextIterateInst;


			if(isa<CmpInst>(nextInst)){
				//resultTypeVector.push_back(3);
				errs() << "--> Cmp(" << getLLFIIndexofInst( dyn_cast<Instruction>(nextInst) ) << ")\n";
			}
			while(UI!=UE){
				Instruction* currentInst = dyn_cast<Instruction>(*UI);
				//errs() << getLLFIIndexofInst(currentInst) << "\n";

				// Tracing
				if( isa<CallInst>(currentInst) ){

					//errs() << "In call \n";
					// Check if this function is user defined.
					Function* calledFunction = dyn_cast<CallInst>(currentInst)->getCalledFunction();
					if( std::find(definedFunctionVector.begin(), definedFunctionVector.end(), calledFunction ) != definedFunctionVector.end() ){
						//errs() << "User defined \n";
						//errs() << "--> In Call " << getLLFIIndexofInst( dyn_cast<Instruction>(currentInst) ) << "\n";
						int i;
						for(i = 0; i < dyn_cast<CallInst>(currentInst)->getNumOperands(); i++){
							if(dyn_cast<CallInst>(currentInst)->getArgOperand(i) == nextInst){ // nextInst here is actually previous inst.
								int j=0;
								for(Function::ArgumentListType::iterator AI = calledFunction->getArgumentList().begin(), AE = calledFunction->getArgumentList().end(); AI != AE; ++AI) {
									if( j==i ){
										//AI->getName();
										nextIterateInst = AI;
										//errs() << "--> " << getLLFIIndexofInst( dyn_cast<Instruction>(nextIterateInst) ) << "\n";
										break;
									}
									j++;
								}
								
								break;
							}
						}
						//continue;
					}else{
						//errs() << "Not user defined .. \n";
						nextIterateInst = *UI;
					}
				} else if( isa<StoreInst>(currentInst) ){
					if( dyn_cast<StoreInst>(currentInst)->getPointerOperand() == nextInst ){
						// Last inst is used as address in current inst.
						//resultTypeVector.push_back(2);
					}else{
						//errs() << "--> Type 1\n";
						//resultTypeVector.push_back(1);
					}
					errs() << "--> Store(" << getLLFIIndexofInst( dyn_cast<Instruction>(currentInst) ) << ")\n";
					nextIterateInst = (*UI);
				}else if( isa<LoadInst>(currentInst) ){
					if( dyn_cast<LoadInst>(currentInst)->getPointerOperand() == nextInst ){
						// Last inst is used as address in current inst.
						//errs() << "--> Type 2\n";
						//resultTypeVector.push_back(2);
					}else{
						//errs() << "--> Type 1\n";
						//resultTypeVector.push_back(1);
					}
					errs() << "--> Load(" << getLLFIIndexofInst( dyn_cast<Instruction>(currentInst) ) << ")\n";
					nextIterateInst = (*UI);
				}else if( isa<ReturnInst>(currentInst) ){
					// If it is return, we stop here. Since in FF-DDG, call function can be recorded, so match from there.
					errs() << "--> Return(" << getLLFIIndexofInst( dyn_cast<Instruction>(currentInst) ) << ")\n";
					nextIterateInst = (*UI);
				}else{
					nextIterateInst = *UI;
				}

/*
				if( isa<CmpInst>(currentInst) ){
					//errs() << "--> Type 3\n";
					//resultTypeVector.push_back(3);
					errs() << "--> In Cmp " << getLLFIIndexofInst( dyn_cast<Instruction>(currentInst) ) << "\n";
					nextIterateInst = (*UI);
				}
*/

				checkNextUseInst(nextIterateInst);
				UI++;
			}

		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
