#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include <string>
#include "llvm/Target/TargetData.h"
#include "llvm/DerivedTypes.h"
#include "llvm/GlobalValue.h"
#include "llvm/Support/InstIterator.h"


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

			errs() << "Tracking memory depedencies ..." << '\n';
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

				if(opcode == 27){
					// Load
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					insertLoadFunction(BI, indexValue);
				}

				if(opcode == 28){
					// Store
					Value* indexValue = ConstantInt::get(Type::getInt64Ty(context), llfiIndex);
					insertStoreFunction(BI, indexValue);
				}
		
				if(opcode == 1){
					//insertDumpFunction(BI);
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

		void insertLoadFunction(Instruction* loadInst, Value* indexValue){
			BasicBlock::iterator nextInst = loadInst;
			nextInst++;
			Instruction* instPos = nextInst;


			Value* loadAdr = dyn_cast<LoadInst>(loadInst)->getPointerOperand();

			// Convert from ptr to int
			CastInst* convertInst = new BitCastInst(loadAdr, Type::getInt64PtrTy(appModule->getContext()), "convt", instPos);

			std::vector<Value*> checker_args(2);
			checker_args[0] = convertInst;
			checker_args[1] = indexValue;


			std::vector<const Type*> checker_arg_types(2);
			checker_arg_types[0] = convertInst->getType();
			checker_arg_types[1] = indexValue->getType();

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("profileLoad", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", instPos);
		}


		void insertStoreFunction(Instruction* storeInst, Value* indexValue){
			BasicBlock::iterator nextInst = storeInst;
			nextInst++;
			Instruction* instPos = nextInst;


			Value* storeAdr = dyn_cast<StoreInst>(storeInst)->getPointerOperand();

			// Convert from ptr to int
			CastInst* convertInst = new BitCastInst(storeAdr, Type::getInt64PtrTy(appModule->getContext()), "convt", instPos);

			std::vector<Value*> checker_args(2);
			checker_args[0] = convertInst;
			checker_args[1] = indexValue;


			std::vector<const Type*> checker_arg_types(2);
			checker_arg_types[0] = convertInst->getType();
			checker_arg_types[1] = indexValue->getType();

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(appModule->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = appModule->getOrInsertFunction("profileStore", checker_type);
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
