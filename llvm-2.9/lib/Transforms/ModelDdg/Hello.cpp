#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include <string>
#include <map>
#include <list>
#include <sstream>
#include <dlfcn.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include "llvm/Target/TargetData.h"


using namespace llvm;

namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		Module *module;
		std::map<const Type*, std::string> preInjectMap;
		std::map<std::string, long> globalAddressMap;
		int preInjectFuncCount = 0;
		long globalAddressCounter = 0;
		std::vector<Function*> definedFunctionVector;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{

			module = &M;

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F){
				int bbCount = 0;
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB){
					bbCount++;
				}
				if(bbCount>0){
					definedFunctionVector.push_back(F);
					//errs() << F->getName() << "\n";
				}
			}

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				if(functionName.find("injectFault") != std::string::npos || functionName.find("preInject") != std::string::npos){
					continue;
				}


				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
				{
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

			errs() << "Instrumenting for DDG ..." << '\n';
			return false;
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			/* 
			   1. Get LLFI index for the BB, use the first inst index.
			   2. Insert dump BB index call.
			 */



			long bbIndex = 0;
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				long llfiIndex = getLLFIIndexofInst(BI);
				BasicBlock::iterator nextInst = BI;

				if(isa<PHINode>(nextInst)){
					while(isa<PHINode>(nextInst)){
						nextInst++;
						bbIndex = llfiIndex;
					}	
				}else{
					bbIndex = llfiIndex;
				}

				addBbIndexDumpFunctionCall(nextInst, bbIndex, module);

				break;
			}

			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				long llfiIndex = getLLFIIndexofInst(BI);
				//errs() << BI->getName() << "\n";

				// Dump for cmp inst
				if(isa<CmpInst>(BI)){
					addCmpDumpFunctionCall(BI, llfiIndex, module);
					
					// Operand 1
					Value* cmpValue1 = BI->getOperand(0);
					Instruction* cmpValue1Inst;
					if(isa<Instruction>(cmpValue1)){
						cmpValue1Inst = dyn_cast<Instruction>(cmpValue1);

					}else{
						// Maybe an arguement, not inst
						// Dump the place holder
						//addCmpDumpPlaceHolderFunctionCall(BI, llfiIndex, module);
						cmpValue1Inst = demoteFunctionParameters(cmpValue1, BI);
					}

					if( preInjectMap.find(cmpValue1Inst->getType()) == preInjectMap.end() ){
						// Did not find this type of preInject function body
						createPreInjectionFunction(cmpValue1Inst, module);
					}
					addPreInjectFunctionCall(cmpValue1Inst, module, BI);
					
					addCmpDumpPlaceHolderFunctionCall(BI, llfiIndex, module);

					// Operand 2
					Value* cmpValue2 = BI->getOperand(1);
					Instruction* cmpValue2Inst;
					if(isa<Instruction>(cmpValue2)){
						cmpValue2Inst = dyn_cast<Instruction>(cmpValue2);

					}else{
						// Maybe an arguement, not inst
						// Dump the place holder
						//addCmpDumpPlaceHolderFunctionCall(BI, llfiIndex, module);
						cmpValue2Inst = demoteFunctionParameters(cmpValue2, BI);
					}

					if( preInjectMap.find(cmpValue2Inst->getType()) == preInjectMap.end() ){
						// Did not find this type of preInject function body
						createPreInjectionFunction(cmpValue2Inst, module);
					}
					addPreInjectFunctionCall(cmpValue2Inst, module, BI);

					addDumpNewLineFunctionCall(BI, llfiIndex, module);
				}else if(isa<CallInst>(BI)){
					Function* calledFunction = dyn_cast<CallInst>(BI)->getCalledFunction();
					if( std::find(definedFunctionVector.begin(), definedFunctionVector.end(), calledFunction ) != definedFunctionVector.end() ){
						if(calledFunction->getName() != "main" && llfiIndex != 0){
							//errs() << calledFunction->getName() << "\n";
							addCallDumpFunctionCall(BI, llfiIndex, module);
							addDumpNewLineFunctionCall(BI, llfiIndex, module);
						}
					}
				}else if(isa<ReturnInst>(BI)){
					addReturnDumpFunctionCall(BI, llfiIndex, module);
					addDumpNewLineFunctionCall(BI, llfiIndex, module);
				}else if(isa<LoadInst>(BI)){
					// Dump for load inst
					addLoadDumpFunctionCall(BI, llfiIndex, module);
					Value* addressOperandValue = dyn_cast<LoadInst>(BI)->getPointerOperand();
					if(isa<Instruction>(addressOperandValue)){
						Instruction* addressOperand = dyn_cast<Instruction>(addressOperandValue);
						if( preInjectMap.find(addressOperand->getType()) == preInjectMap.end() ){
							// Did not find this type of preInject function body
							createPreInjectionFunction(addressOperand, module);
						}
						addPreInjectFunctionCall(addressOperand, module, BI);
					}else{
						std::string globalVarName = addressOperandValue->getName();
						long globalAddress = 0;
						if( globalAddressMap.find(globalVarName) == globalAddressMap.end() ){
							globalAddressMap.insert( std::pair<std::string, long>(globalVarName, globalAddressCounter) );
							globalAddress = globalAddressCounter;
							globalAddressCounter++;
						}else{
							globalAddress = globalAddressMap.at(globalVarName);
						}
						addGlobalAddressDumpFunctionCall(BI, globalAddress, module);
					}
					addDumpNewLineFunctionCall(BI, llfiIndex, module);
				}else if( isa<StoreInst>(BI) ){
					// Dump for store inst
					addStoreDumpFunctionCall(BI, llfiIndex, module);
					Value* addressOperandValue = dyn_cast<StoreInst>(BI)->getPointerOperand();
					if(isa<Instruction>(addressOperandValue)){
						Instruction* addressOperand = dyn_cast<Instruction>(addressOperandValue);
						if( preInjectMap.find(addressOperand->getType()) == preInjectMap.end() ){
							// Did not find this type of preInject function body
							createPreInjectionFunction(addressOperand, module);
						}
						addPreInjectFunctionCall(addressOperand, module, BI);
					}else{
						std::string globalVarName = addressOperandValue->getName();
						long globalAddress = 0;
						if( globalAddressMap.find(globalVarName) == globalAddressMap.end() ){
							globalAddressMap.insert( std::pair<std::string, long>(globalVarName, globalAddressCounter) );
							globalAddress = globalAddressCounter;
							globalAddressCounter++;
						}else{
							globalAddress = globalAddressMap.at(globalVarName);
						}
						addGlobalAddressDumpFunctionCall(BI, globalAddress, module);
					}
					addDumpNewLineFunctionCall(BI, llfiIndex, module);

				}else if(BI->getName().find("indvar") != std::string::npos){
					// Dump for indvar
					BasicBlock::iterator nextInst = BI;
					while(isa<PHINode>(nextInst)){
						nextInst++;
					}		
					addIndvarDumpFunctionCall(nextInst, llfiIndex, module);
					addDumpNewLineFunctionCall(nextInst, llfiIndex, module);
				}
			}


			return true;
		}


		////////////////////////////////////////////////////////////

		// Store and load function parameters for dumping values in cmp
		Instruction* demoteFunctionParameters(Value* paramValue, Instruction* insertLoc){
			AllocaInst *paramAddress = new AllocaInst( paramValue->getType(), "demoteAddress", insertLoc );	
			new StoreInst(paramValue, paramAddress, insertLoc);
			LoadInst *loadParam = new LoadInst( paramAddress, "loadParam", insertLoc);
			return loadParam;
		}

		// Call to insert bb index
		void addBbIndexDumpFunctionCall(Instruction* insertLoc, long bbIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* bbIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), bbIndex);
			checker_args[0] = bbIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = bbIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpBbIndex", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}

		void addDumpNewLineFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpNewLine", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}

		void addCmpDumpPlaceHolderFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpCmpValuePlaceHolder", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}

		void addCallDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpCallInst", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}

		void addReturnDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpReturnInst", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}


		void addCmpDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpCmpInst", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}

		void addGlobalAddressDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpGlobalAddress", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);

			//BasicBlock::iterator nextInst = insertLoc;
			//nextInst++;

			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(),"", insertLoc);
		}

		void addLoadDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpLoadInst", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", insertLoc);

			//Value* addressOperandValue = dyn_cast<LoadInst>(insertLoc)->getPointerOperand();
			//if(isa<Instruction>(addressOperandValue))
			//	addPreInjectFunctionCall(dyn_cast<Instruction>(addressOperandValue), module);
		}

		void addStoreDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpStoreInst", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", insertLoc);

			//Value* addressInst = dyn_cast<StoreInst>(insertLoc)->getOperand(0);

			//addPreInjectFunctionCall(dyn_cast<Instruction>(addressInst), module);
		}

		void addIndvarDumpFunctionCall(Instruction* insertLoc, long instIndex, Module* module){
			std::vector<Value*> checker_args(1);
			Value* instIndexValue = ConstantInt::get(Type::getInt64Ty(module->getContext()), instIndex);
			checker_args[0] = instIndexValue;

			std::vector<const Type*> checker_arg_types(1);
			checker_arg_types[0] = instIndexValue->getType(); 

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("dumpIndvarInst", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", insertLoc);	
		}

		long getLLFIIndexofInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("llfi_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			}
			return 0;
		}


		/////////////////////////////////////////


		void addPreInjectFunctionCall(Instruction* BI, Module* module, Instruction* insertLoc){

			if (BI->isTerminator()){
				errs() << "ERROR: Terminator is not injectable\n";
				exit(2);
			}

			std::vector<Value*> checker_args(2);
			Value* indexValue = ConstantInt::get(Type::getInt64Ty(BI->getContext()), 1);//getLLFIIndexofInst(BI)); We dont need llfiindex passed here.
			checker_args[0] = BI;
			checker_args[1] = indexValue;

			std::vector<const Type*> checker_arg_types(2);
			checker_arg_types[0] = BI->getType(); //Type::getInt64Ty(module->getContext());
			checker_arg_types[1] = indexValue->getType();
			FunctionType* checker_type = FunctionType::get(BI->getType(), checker_arg_types, false);
			// Based on the type, find the preInject function name in map
			std::string preInjectFuncName = preInjectMap.at(BI->getType());

			Constant* checker_handler_c = module->getOrInsertFunction(preInjectFuncName, checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);

			BasicBlock::iterator nextInst = BI;
			nextInst++;
			Instruction* ficall = CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "fi", insertLoc);

		}

		void addFiFunctionCall(Instruction* tmploc, int size, Module* module, BasicBlock* bb, Instruction* loadIndexloc){
			std::vector<Value*> checker_args(3);
			Value* typeSizeValue = ConstantInt::get(Type::getInt32Ty(tmploc->getContext()), size);
			checker_args[0] = tmploc;
			checker_args[1] = typeSizeValue;
			checker_args[2] = loadIndexloc;

			std::vector<const Type*> checker_arg_types(3);
			checker_arg_types[0] = tmploc->getType(); //Type::getInt64Ty(module->getContext());
			checker_arg_types[1] = Type::getInt32Ty(tmploc->getContext());
			checker_arg_types[2] = Type::getInt64Ty(module->getContext());

			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(module->getContext()), checker_arg_types, false);
			Constant* checker_handler_c = module->getOrInsertFunction("injectFault", checker_type);
			Function* checker_handler = dyn_cast<Function>(checker_handler_c);
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", bb);
		}

		void createPreInjectionFunction(Instruction* BI, Module* module){
			const Type* operandType = BI->getType();
			// Update map
			std::stringstream ss;
			ss << "preInject" << preInjectFuncCount;
			std::string preInjectFuncName = ss.str();
			preInjectMap.insert( std::pair<const Type*, std::string>(operandType, preInjectFuncName) );
			preInjectFuncCount++;

			Constant* c = module->getOrInsertFunction(preInjectFuncName, operandType, operandType, Type::getInt64Ty(module->getContext()), NULL);
			Function* fiFunc = cast<Function>(c);
			std::vector<Value*> args;
			for(Function::arg_iterator ai = fiFunc->arg_begin(); ai != fiFunc->arg_end(); ++ai){
				args.push_back(&*ai);
			}

			BasicBlock* entryblock = BasicBlock::Create(module->getContext(), "entry", fiFunc);
			AllocaInst *tmploc = new AllocaInst( args[0]->getType(), "tmploc", entryblock);	
			AllocaInst *indexloc = new AllocaInst( args[1]->getType(), "indexloc", entryblock);	
			new StoreInst(args[0], tmploc, entryblock);
			new StoreInst(args[1], indexloc, entryblock);

			Instruction* tmpcast = new BitCastInst(tmploc, PointerType::get(Type::getInt8Ty(module->getContext()), 0), "tmploc_cast", entryblock);
			LoadInst *loadIndexloc = new LoadInst( indexloc, "loadIndexloc", entryblock);

			// Get bit length
			//TargetData* td = new TargetData(module);
			//int size = td->getTypeSizeInBits(args[0]->getType());
			//TargetData &td = getAnalysis<TargetData>();
			//int size = td.getTypeSizeInBits(args[0]->getType());

			// Hard code size for types
			const Type* instType = args[0]->getType();
			int size = 64;
			if( !instType->isPointerTy() ){
				size = instType->getScalarSizeInBits();
			}

			addFiFunctionCall(tmpcast, size, module, entryblock, loadIndexloc);
			//errs() << preInjectFuncName << ": " << size << "\n";

			LoadInst *updateval = new LoadInst(tmploc, "updateval", entryblock);
			ReturnInst::Create(module->getContext(), updateval, entryblock);
		}
	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
