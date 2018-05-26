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

			errs() << "Profiling SHIFT Values ..." << '\n';
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
				//errs() << llfiIndex << "\n";

				if(opcode == 20 || opcode == 21 || opcode == 22){
					// If it is not pointer type of operands
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					insertForShift(BI, indexValue);
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

		void insertForShift(Instruction* shiftInst, Value* indexValue){
			// Creating function: void profileShiftValues(long shiftValue, long llfiIndex);
			/*
			int skipFlag = 0;
			if (OverflowingBinaryOperator *op = dyn_cast<OverflowingBinaryOperator>(shiftInst)) {
				if (op->hasNoUnsignedWrap())
					skipFlag = 1;
					//errs() << "  has nuw\n";
				//else if (op->hasNoSignedWrap())
				//	errs() << "  has nsw\n";
			}
			*/
			BasicBlock::iterator nextInst = shiftInst;
			nextInst++;
			Instruction* instPos = nextInst;

			std::vector<Value*> checker_args(2);
			std::vector<const Type*> checker_arg_types(2);
			if(shiftInst->getOperand(1)->getType()->isIntegerTy(32) == true || shiftInst->getOperand(1)->getType()->isIntegerTy(8) == true ){
				// Convert i32 to i64
				SExtInst* convertInst1 = new SExtInst(shiftInst->getOperand(1), Type::getInt64Ty(appModule->getContext()), "convt1", instPos);
				checker_args[0] = convertInst1;
				checker_args[1] = indexValue;
				checker_arg_types[0] = convertInst1->getType();
				checker_arg_types[1] = indexValue->getType();
			}else if(shiftInst->getOperand(1)->getType()->isIntegerTy(64) == true ){
				// If it is already i64, keep it
				checker_args[0] = shiftInst->getOperand(1);
				checker_args[1] = indexValue;
				checker_arg_types[0] = shiftInst->getOperand(1)->getType();
				checker_arg_types[1] = indexValue->getType();
			}else return;

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("profileShiftValues", checker_type);
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
