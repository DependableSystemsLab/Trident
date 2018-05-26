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
		Module *appModule;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			appModule = &M;

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			errs() << "Sampling Instructions ..." << '\n';
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
				if(opcode > 7 && opcode != 26 && opcode != 28 && opcode != 44 && opcode != 45){
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					insertCmpProfileFunction(BI, indexValue);
				}
		
				if(opcode == 1 || opcode ==6 || opcode == 7){
					insertDumpFunction(BI);
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

		void insertCmpProfileFunction(Instruction* cmpInst, Value* indexValue){
			// Creating function: void profileCmp(bool cmpResult, long llfiIndex);
	
			BasicBlock::iterator nextInst = cmpInst;
			nextInst++;
			Instruction* instPos = nextInst;
			std::vector<Value*> checker_args(1);
			checker_args[0] = indexValue;
			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = indexValue->getType();

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("profileCount", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", instPos);
		}

		void insertDumpFunction(Instruction* posInst){
			// Creating function: void dumpResult();
	
			Instruction* instPos = posInst;
			std::vector<Value*> checker_args(0);
			std::vector<const Type*> checker_arg_types(0);

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("dumpResult", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", instPos);
		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);