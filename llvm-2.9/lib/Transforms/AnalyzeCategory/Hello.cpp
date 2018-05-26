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
		Module *module;
		long targetIndex = 0;
		std::vector<Instruction*> visitedInstVector;
		std::vector<int> resultTypeVector;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{

			module = &M;
			readSelectIndex();

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			errs() << "Analyzing Category ..." << '\n';

			// Check result types
			if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 1) != resultTypeVector.end() && std::find(resultTypeVector.begin(), resultTypeVector.end(), 2) != resultTypeVector.end() && std::find(resultTypeVector.begin(), resultTypeVector.end(), 3) != resultTypeVector.end() ){
				std::cout << "--> Type 4\n";
			}else if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 1) != resultTypeVector.end() && std::find(resultTypeVector.begin(), resultTypeVector.end(), 2) != resultTypeVector.end() ){
				std::cout << "--> Type 5\n";
			}else if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 1) != resultTypeVector.end() && std::find(resultTypeVector.begin(), resultTypeVector.end(), 3) != resultTypeVector.end() ){
				std::cout << "--> Type 6\n";
			}else if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 2) != resultTypeVector.end() && std::find(resultTypeVector.begin(), resultTypeVector.end(), 3) != resultTypeVector.end() ){
				std::cout << "--> Type 7\n";
			}else if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 1) != resultTypeVector.end()){
				std::cout << "--> Type 1\n";
			}else if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 2) != resultTypeVector.end()){
				std::cout << "--> Type 2\n";
			}else if( std::find(resultTypeVector.begin(), resultTypeVector.end(), 3) != resultTypeVector.end()){
				std::cout << "--> Type 3\n";
			}else{
				// If no type has been found, it must be type 1 (Computation data)
				std::cout << "--> Type 1\n";
			}

			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				long llfiIndex = getLLFIIndexofInst(BI);
				if (llfiIndex == targetIndex){
					// The target one
					checkNextUseInst(BI);
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

		void checkNextUseInst(Instruction* nextInst){
			if( isa<StoreInst>(nextInst) || isa<BranchInst>(nextInst) || isa<CallInst>(nextInst) || isa<AllocaInst>(nextInst) ){
				return;
			}

			if( std::find(visitedInstVector.begin(), visitedInstVector.end(), nextInst) != visitedInstVector.end() ){
				return;
			}

			// Add to visited
			visitedInstVector.push_back(nextInst);

			// Recursion to check
			Value::use_iterator UI = nextInst->use_begin();
			Value::use_iterator UE = nextInst->use_end();


			if(isa<CmpInst>(nextInst)){
				resultTypeVector.push_back(3);
			}
			while(UI!=UE){
				Instruction* currentInst = dyn_cast<Instruction>(*UI);
				//errs() << getLLFIIndexofInst(currentInst) << "\n";

				// Record each category
				if( isa<StoreInst>(currentInst) ){
					if( dyn_cast<StoreInst>(currentInst)->getPointerOperand() == nextInst ){
						// Last inst is used as address in current inst.
						//errs() << "--> Type 2\n";
						resultTypeVector.push_back(2);
					}else{
						//errs() << "--> Type 1\n";
						resultTypeVector.push_back(1);
					}
				}
				if( isa<CallInst>(currentInst) ){
					resultTypeVector.push_back(1);
				}
				if( isa<LoadInst>(currentInst) ){
					if( dyn_cast<LoadInst>(currentInst)->getPointerOperand() == nextInst ){
						// Last inst is used as address in current inst.
						//errs() << "--> Type 2\n";
						resultTypeVector.push_back(2);
					}else{
						//errs() << "--> Type 1\n";
						resultTypeVector.push_back(1);
					}
				}
				if( isa<CmpInst>(currentInst) ){
					//errs() << "--> Type 3\n";
					resultTypeVector.push_back(3);
				}

				checkNextUseInst(dyn_cast<Instruction>(*UI));
				UI++;
			}

		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
