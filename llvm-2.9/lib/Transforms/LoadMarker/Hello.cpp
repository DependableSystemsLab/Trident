#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include <string>
#include <sstream>


using namespace llvm;

namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		Function *hook1;
		Function *hook2;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc1;
			hookFunc1 = M.getOrInsertFunction("print1", Type::getVoidTy(M.getContext()), Type::getInt32Ty(M.getContext()), Type::getInt32Ty(M.getContext()), NULL);
			hook1 = cast<Function>(hookFunc1);


			Constant *hookFunc2;
			hookFunc2 = M.getOrInsertFunction("print2", Type::getVoidTy(M.getContext()), Type::getInt32Ty(M.getContext()), NULL);

			hook2 = cast<Function>(hookFunc2);

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				if(functionName != "print1" && functionName != "print2"){
					for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
					{
						bishe_insert::runOnBasicBlock(BB, M.getContext());
					}
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
				/*
				   errs() << "Opcode -> " << BI->getOpcode() << "\n";
				   int i;
				   for(i=0; i<BI->getNumOperands(); i++){
				   errs() << "  - Operand:" << BI->getOperand(i)->getName() << "\n";
				   }
				 */
/*
				Value* value1 = ConstantInt::get(Type::getInt32Ty(context),BI->getOpcode());
				CallInst* call_print1 = CallInst::Create(hook1, value1, value1, "");
				BB->getInstList().insert(BI, call_print1);

				Value* value2 = ConstantInt::get(Type::getInt32Ty(context),BI->getOpcode());
                                CallInst* call_print2 = CallInst::Create(hook2, value2, "");
                                BB->getInstList().insert(BI, call_print2);
*/
			}
			return true;
		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
