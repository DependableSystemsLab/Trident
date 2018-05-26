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
		std::vector<int> selectedInsts;
		Function *hook;
		Function *hook2;
		long bbId = 0;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc;
			Constant *hookFunc2;
			hookFunc = M.getOrInsertFunction("coverageCounter", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);
			hookFunc2 = M.getOrInsertFunction("dumpCounter", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);

			hook= cast<Function>(hookFunc);
			hook2= cast<Function>(hookFunc2);
			//readSelectSet();

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				//std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext(), F);
				}
			}

			errs() << "Add coverage function call. Total of BB: " << bbId << '\n';
			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context, Function* F)
		{
			int insertFlag = 1;
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				// Check if the current index is selected
				//long llfiIndex = getLLFIIndexofInst(BI);
                                int opcode = BI->getOpcode();

				if(opcode == 1 && F->getName() == "main"){
					// It's a return
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), opcode);
					CallInst* call_print = CallInst::Create(hook2, indexValue, "");
					BB->getInstList().insert(BI, call_print);
					continue;
				}

				if(insertFlag == 1 && opcode != 44) {
					bbId++;
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), bbId);
					CallInst* call_print = CallInst::Create(hook, indexValue, "");
					BB->getInstList().insert(BI, call_print);
					insertFlag = 0;
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
					int currentIndex = atoi(line.c_str());
					//errs() << "Select Index: " << currentIndex << "\n";
					selectedInsts.push_back(currentIndex);
				}
			}
			//std::sort(selected_insts.begin(), selected_insts.end());
		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
