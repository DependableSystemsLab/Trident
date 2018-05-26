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

static cl::opt<std::string> cl_select_set_file_name("select_set_file", cl::desc("Specify the file of selected sets"), cl::value_desc("file name"));


namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		Function *hook;
		std::vector<long> selectedInsts;
		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc;
			hookFunc = M.getOrInsertFunction("specificCheckpoint", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);

			readSelectSet();

			hook= cast<Function>(hookFunc);

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				if(functionName != "checkpointInstTrack" && functionName != "specificCheckpoint"){
					for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
					{
						bishe_insert::runOnBasicBlock(BB, M.getContext());
					}
				}
			}

			errs() << "Add Basic Block Specific Checkpoint" << '\n';
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
				//if(llfiIndex > 0 && opcode != 28 && opcode != 1 && opcode != 2 && opcode != 44){
				//if(llfiIndex == 944 || llfiIndex == 2080 || llfiIndex == 5420 || llfiIndex == 4792 || llfiIndex == 9694){
				if(std::find(selectedInsts.begin(), selectedInsts.end(), llfiIndex) != selectedInsts.end()) {
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					CallInst* call_print = CallInst::Create(hook, indexValue, "");
					BB->getInstList().insert(BI, call_print);
					break;
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
					long currentIndex = atol(line.c_str());
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
