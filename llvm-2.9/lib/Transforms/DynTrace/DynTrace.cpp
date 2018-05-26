#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"

#include <string>
#include <iostream>
#include <vector>

#include "Sdds.h"
#include "ChainNode.h"


using namespace llvm;

namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		Function *hook;

		long sddsId;
		std::vector<SDDS> sddsActiveList;
		std::vector<SDDS> sddsEndedList;

		bishe_insert() : ModulePass(ID) {}

		virtual bool runOnModule(Module &M)
		{
			Constant *hookFunc;
			hookFunc = M.getOrInsertFunction("instCycleCount", Type::getVoidTy(M.getContext()), Type::getInt32Ty(M.getContext()), NULL);
			sddsId = 0;

			hook= cast<Function>(hookFunc);

			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				if(functionName != "dumpCounter" && functionName != "instCycleCount" && functionName != "getInstCycle"){
					for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB)
					{
						bishe_insert::runOnBasicBlock(BB, M.getContext());
					}
				}
			}

			errs() << "**** END ****" << '\n';
			errs() << "Total SDDS:" << sddsActiveList.size() << '\n';
			for(int i=0; i<sddsActiveList.size(); i++){
				std::vector<ChainNode> chain = sddsActiveList.at(i).getChain();
				errs() << "Chain Size:" << chain.size() << " --- ";
				for(int j=0; j<chain.size(); j++){
					errs() << chain.at(j).getIndex() << "." << chain.at(j).getInstType() << "." << chain.at(j).isUsedInMem() << "." << chain.at(j).isUsedInPtr() << "->";
				}
				errs() << "\n";
			}

			return false;
		}
		virtual bool runOnBasicBlock(Function::iterator &BB, LLVMContext &context)
		{
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI)           
			{
				// Store precedent SDDS of this instruction
				std::vector<SDDS> preSddsList;
				char instType = 'N';
				bool memFlag = false; // Is the inst used in meme address?
				bool ptrFlag = false;

				// Check if the instruction has been added to back.
				for(int i=0; i<sddsActiveList.size(); i++){
					long currentChainLastIndex = sddsActiveList.at(i).getLastIndex();	
					if(currentChainLastIndex == getLLFIIndexofInst(BI)){
						// If yes, get each such SDDS.
						preSddsList.push_back(sddsActiveList.at(i));				
					}
				}
				// If no, create a new SDDS for it.
				if(preSddsList.size() == 0){
					SDDS newSdds(sddsId);
					instType = getInstType(BI);
					ptrFlag = isUsedInPtr(BI);
					newSdds.insertNode(getLLFIIndexofInst(BI), instType, false, ptrFlag);
					sddsId++;
					preSddsList.push_back(newSdds);
					sddsActiveList.push_back(newSdds);
				}

				// Check its uses, clone for each use and add to its chain's end.
				Value::use_iterator UI = BI->use_begin();
				Value::use_iterator UE = BI->use_end();

				bool cloneFlag = false;
				while(UI!=UE){
					// *UI is current instruction
					Instruction* currentUseInstruction = dyn_cast<Instruction>(*UI);
					long currentInstructionIndex = getLLFIIndexofInst(currentUseInstruction);

					for(int j=0; j<preSddsList.size(); j++){
						// Get the SDDS obj in sddsActiveList
						int currentSddsId = preSddsList.at(j).getId();
						int k = 0;
						for(k=0; k<sddsActiveList.size(); k++){
							if(sddsActiveList.at(k).getId() == currentSddsId){
								break;
							}
						}						

						// Insert the index to the end, here we separate different pre path by cloning the obj.
						instType = getInstType(currentUseInstruction);
						memFlag = isUsedInMem(currentUseInstruction, BI);
						ptrFlag = isUsedInPtr(currentUseInstruction);
						if( cloneFlag == false){
							sddsActiveList.at(k).insertNode(currentInstructionIndex, instType, memFlag, ptrFlag);
							cloneFlag = true;
						}else{
							SDDS newSdds = preSddsList.at(j);
							newSdds.setId(sddsId);
							newSdds.insertNode(currentInstructionIndex, instType, memFlag, ptrFlag);
							sddsId++;
							sddsActiveList.push_back(newSdds);
						}

					}
					UI++;
				}

			}
			return true;
		}


		// Get llfi_index instrumented by LLFI
		long getLLFIIndexofInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("llfi_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			} else {
				errs() << "ERROR: LLFI indices for instructions are required for the pass, "
					<< "please run genllfiindexpass first\n";
				exit(3);
			}
		}

		char getInstType(Instruction *inst){
			if(inst->getOpcode() == 2) return 'B';
			if(inst->getOpcode() == 26) return 'A';
			if(inst->getOpcode() == 27) return 'L';
			if(inst->getOpcode() == 28) return 'S';
			if(inst->getOpcode() == 29) return 'G';
			if(inst->getOpcode() == 45) return 'F';
			if(inst->getOpcode() == 42) return 'C';
			if(inst->getOpcode() == 43) return 'C';
			return 'N';
		}

		bool isUsedInMem(Instruction *nextInst, Instruction *currentInst){
			if(nextInst->getOpcode() == 27){
				// if load inst, it has to be on pointer operand
				return true;
			}	
			if(nextInst->getOpcode() == 28){
				// if store inst
				if((dyn_cast<StoreInst>(nextInst))->getPointerOperand() == currentInst){
					return true;
				}	
			}
			return false;
		}
		
		bool isUsedInPtr(Instruction *currentInst){
			if( currentInst->getType()->isPointerTy() || currentInst->getType()->getScalarType()->isPointerTy() ) return true;
			return false;
		}

	};

}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);



