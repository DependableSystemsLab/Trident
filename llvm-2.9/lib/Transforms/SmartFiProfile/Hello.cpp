#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include <string>


using namespace llvm;

namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		Function *hook;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc;
			hookFunc = M.getOrInsertFunction("smartProfile", Type::getVoidTy(M.getContext()), Type::getInt64Ty(M.getContext()), NULL);

			hook= cast<Function>(hookFunc);

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				if(functionName != "profileTrace"){
					for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
					{
						bishe_insert::runOnBasicBlock(BB, M.getContext());
					}
				}
			}

			errs() << "Add Smart Profile" << '\n';
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
				if(llfiIndex > 0 && opcode != 44 && opcode != 1 && opcode != 2 && opcode != 28){
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					CallInst* call_print = CallInst::Create(hook, indexValue, "");
					BB->getInstList().insert(BI, call_print);
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
