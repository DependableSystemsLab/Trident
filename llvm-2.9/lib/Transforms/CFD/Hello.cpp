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
//#include <string>

#include <iostream>
#include <fstream>
#include <set>
#include <list>
#include <sstream>
#include <algorithm>
#include <sstream>


using namespace llvm;

static cl::opt<std::string> cl_target_index_string("target_index", cl::desc("Specify the index you want to sample"), cl::value_desc("llfi value"));

namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		Function *hook;
		Function *hook1;
		int functionCallFlag;
		int functionIndex = 0;
		long targetIndex;

		// Keep a vector of function calls
		std::vector<std::string> functionCallVector;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc;
			Constant *hookFunc1;
			functionCallFlag = 0;
			hookFunc = M.getOrInsertFunction("functionCall", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);
			hookFunc1 = M.getOrInsertFunction("instructionCall", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);

			hook= cast<Function>(hookFunc);
			hook1= cast<Function>(hookFunc1);

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				targetIndex = atol(cl_target_index_string.c_str());

				functionIndex++;
				std::string functionName = F->getName();
				if(functionName != "instructionCall" && functionName != "functionCall" && functionName != "latencyCount"){
					functionCallFlag = 0;
					for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
					{
						bishe_insert::runOnBasicBlock(BB, M.getContext(), functionIndex);
						std::string funcName = F->getName();
					}
				}
			}

			errs() << "Add Smart Profile with Function Call" << '\n';
			return false;
		}
		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context, int functionIndex)
		{
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				//errs() << BI->getOpcode() << "\n";
				//errs() << BI->getOpcodeName() << "\n";

				long llfiIndex = getLLFIIndexofInst(BI);
				int opcode = BI->getOpcode();
				if(functionCallFlag == 0){
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), functionIndex);
					CallInst* call_print = CallInst::Create(hook, indexValue, "");
					BB->getInstList().insert(BI, call_print);
					functionCallFlag = 1;
					//errs() << functionIndex << "\n";
				}
				if(targetIndex == llfiIndex){
					//if(llfiIndex >= 0 && opcode != 44 && opcode != 1 && opcode != 26 && opcode != 28 && opcode != 45 && opcode != 2){
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					CallInst* call_print = CallInst::Create(hook1, indexValue, "");
					BB->getInstList().insert(BI, call_print);
					//}
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
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
