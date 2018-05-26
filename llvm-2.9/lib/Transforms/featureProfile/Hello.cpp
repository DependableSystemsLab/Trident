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

			errs() << "Profiling Features' Values ..." << '\n';
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

				if(opcode == 42){
					if(BI->getOperand(0)->getType()->isIntegerTy() == true){
						// If it is not pointer type of operands
						Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
						insertForICmp(BI, indexValue);
					}
				}

				if(opcode == 43){
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					insertForFCmp(BI, indexValue);
				}
		
				if(opcode == 28){
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
				}

				if(opcode == 1 || opcode == 6 || opcode == 7){
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

		void insertForICmp(Instruction* cmpInst, Value* indexValue){
			// Creating function: void profileCmpValues(long cmpValue1, long cmpValue2, long llfiIndex);
	
			BasicBlock::iterator nextInst = cmpInst;
			nextInst++;
			Instruction* instPos = nextInst;
	
			std::vector<Value*> checker_args(3);
			std::vector<const Type*> checker_arg_types(3);
			if(cmpInst->getOperand(0)->getType()->isIntegerTy(64) != true){
				// Convert i32 to i64
				SExtInst* convertInst1 = new SExtInst(cmpInst->getOperand(0), Type::getInt64Ty(appModule->getContext()), "convt1", instPos);
				SExtInst* convertInst2 = new SExtInst(cmpInst->getOperand(1), Type::getInt64Ty(appModule->getContext()), "convt1", instPos);
				checker_args[0] = convertInst1;
				checker_args[1] = convertInst2;
				checker_args[2] = indexValue;
				checker_arg_types[0] = convertInst1->getType();
				checker_arg_types[1] = convertInst2->getType();
				checker_arg_types[2] = indexValue->getType();
			}else{
				// If it is already i64, keep it
				checker_args[0] = cmpInst->getOperand(0);
				checker_args[1] = cmpInst->getOperand(1);
				checker_args[2] = indexValue;
				checker_arg_types[0] = cmpInst->getOperand(0)->getType();
				checker_arg_types[1] = cmpInst->getOperand(1)->getType();
				checker_arg_types[2] = indexValue->getType();
			}

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("profileICmpValues", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", instPos);
		}

		void insertForFCmp(Instruction* cmpInst, Value* indexValue){
			// Creating function: void profileCmpValues(double cmpValue1, double cmpValue2, long llfiIndex);
	
			BasicBlock::iterator nextInst = cmpInst;
			nextInst++;
			Instruction* instPos = nextInst;
	
			std::vector<Value*> checker_args(3);
			std::vector<const Type*> checker_arg_types(3);
			if(cmpInst->getOperand(0)->getType()->isDoubleTy() != true){
				// Convert float to double
				FPExtInst* convertInst1 = new FPExtInst(cmpInst->getOperand(0), Type::getDoubleTy(appModule->getContext()), "convt1", instPos);
				FPExtInst* convertInst2 = new FPExtInst(cmpInst->getOperand(1), Type::getDoubleTy(appModule->getContext()), "convt1", instPos);
				checker_args[0] = convertInst1;
				checker_args[1] = convertInst2;
				checker_args[2] = indexValue;
				checker_arg_types[0] = convertInst1->getType();
				checker_arg_types[1] = convertInst2->getType();
				checker_arg_types[2] = indexValue->getType();
			}else{
				// If it is already double, keep it
				checker_args[0] = cmpInst->getOperand(0);
				checker_args[1] = cmpInst->getOperand(1);
				checker_args[2] = indexValue;
				checker_arg_types[0] = cmpInst->getOperand(0)->getType();
				checker_arg_types[1] = cmpInst->getOperand(1)->getType();
				checker_arg_types[2] = indexValue->getType();
			}

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("profileFCmpValues", checker_type);
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
