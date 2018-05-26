#define DEBUG_TYPE "loop-dep" 
#include "llvm/BasicBlock.h"
#include "llvm/Constants.h"
#include "llvm/Function.h"
#include "llvm/Instructions.h"
#include "llvm/Module.h"
#include "llvm/Pass.h"
#include "llvm/Type.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AliasSetTracker.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/CFG.h"
#include "llvm/Target/TargetData.h"

#include <vector>
#include <deque>
#include <set>
#include <algorithm>
#include <ostream>
#include <fstream>
#include <iostream>
#include <queue>  


using namespace llvm;

namespace CS1745{
	class LoopDependence : public LoopPass{
		friend struct MemOp;
		std::ofstream file;
		public:
		static char ID;

		LoopDependence() : 
			LoopPass(ID){
				//std::string name = "DEPINFO";
				//file.open(name.c_str());
			}

		~LoopDependence(){

		}

		virtual bool runOnLoop(Loop *L, LPPassManager &LPM);

		virtual void getAnalysisUsage(AnalysisUsage &AU) const{
			AU.setPreservesAll();	// We don't modify the program, so we preserve all analyses
			AU.addRequiredID(LoopSimplifyID);
			AU.addRequired<LoopInfo>();
			AU.addRequiredTransitive<AliasAnalysis>();
			AU.addPreserved<AliasAnalysis>();
			AU.addRequiredTransitive<TargetData>();
		}

		private:
		// Various analyses that we use...
		//AliasAnalysis *AA; // Current AliasAnalysis information
		//LoopInfo *LI; // Current LoopInfo
		//TargetData *TD;

		long getLLFIIndexofInst(Instruction *inst);
		long getCmpIndexOfBb(BasicBlock* bb);
		long getTmnIndexOfBb(BasicBlock* bb);
	};

	bool LoopDependence::runOnLoop(Loop *L, LPPassManager &LPM){

		//errs() << "New loop\n";

		// Start from header
		PHINode* phiNode = L->getCanonicalInductionVariable();
		if(phiNode == NULL) return false;
		Instruction* phiInst = dyn_cast<Instruction>(phiNode);
		BasicBlock *headerBb = phiInst->getParent();
		TerminatorInst* tmnInst = headerBb->getTerminator();

		// Check inner loop first
		if( L->getLoopDepth() > 1 ){
			//return false;
		}


		// DFS
		std::queue<BasicBlock*> gQueue;
		std::vector<BasicBlock*> visitedVector;
		gQueue.push(headerBb);
		BasicBlock* exitBb;
		std::vector<long> cmpIndexVector;

		while( !gQueue.empty() ){

			BasicBlock* curBb = gQueue.front();
			gQueue.pop();
			TerminatorInst* curTmnInst = curBb->getTerminator();
			
			// Get children
			if(curTmnInst->getOpcode() == 2){
				int ti = curTmnInst->getNumSuccessors();
				int i = 0;
				for(i=0; i<ti; i++){
					BasicBlock* nextBb = curTmnInst->getSuccessor(i);
					if(std::find(visitedVector.begin(), visitedVector.end(), nextBb) != visitedVector.end()) {
						// Found
					}else if(L->contains(nextBb)){
						gQueue.push(nextBb);
						visitedVector.push_back(nextBb);
					}

					if(nextBb == headerBb){
						// Current bb is the exit bb
						long cmpIndex = getCmpIndexOfBb(curBb);
						if(std::find(cmpIndexVector.begin(), cmpIndexVector.end(), cmpIndex) == cmpIndexVector.end()) {
							if(cmpIndex != 0){
								errs() << getTmnIndexOfBb(headerBb) << " " << cmpIndex << "\n";
								cmpIndexVector.push_back(cmpIndex);	
							}
						}
						exitBb = curBb;
					}
				}
			}

		}

		return false;
	}

	long LoopDependence::getLLFIIndexofInst(Instruction *inst) {
		MDNode *mdnode = inst->getMetadata("llfi_index");
		if (mdnode) {
			ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
			return cns_index->getSExtValue();
		}
		return 0;
	}

	long LoopDependence::getCmpIndexOfBb(BasicBlock* bb){
		for (BasicBlock::iterator I = bb->begin(), E = bb->end(); I != E; I++){
			if(I->getOpcode() == 42 || I->getOpcode() == 43){
				return getLLFIIndexofInst(I);
			}
		}
		return 0;
	}

	long LoopDependence::getTmnIndexOfBb(BasicBlock* bb){
		TerminatorInst* curTmnInst = bb->getTerminator();
		return getLLFIIndexofInst(dyn_cast<Instruction>(curTmnInst));
	}
	char LoopDependence::ID = 0;
	RegisterPass<LoopDependence> X("loop-dep", "Loop Dependence");
}
