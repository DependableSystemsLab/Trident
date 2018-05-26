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

using namespace llvm;

namespace CS1745
{
	class LoopDependence : public LoopPass
	{
		friend struct MemOp;
		std::ofstream file;
		public:
		static char ID;

		LoopDependence() : 
			LoopPass(ID)
		{
			//std::string name = "DEPINFO";
			//file.open(name.c_str());
		}

		~LoopDependence()
		{
		}

		virtual bool runOnLoop(Loop *L, LPPassManager &LPM);

		virtual void getAnalysisUsage(AnalysisUsage &AU) const
		{
			AU.setPreservesAll();	// We don't modify the program, so we preserve all analyses
			AU.addRequiredID(LoopSimplifyID);
			AU.addRequired<LoopInfo>();
			AU.addRequiredTransitive<AliasAnalysis>();
			AU.addPreserved<AliasAnalysis>();
			AU.addRequiredTransitive<TargetData>();
		}

		private:
		// Various analyses that we use...
		AliasAnalysis *AA; // Current AliasAnalysis information
		LoopInfo *LI; // Current LoopInfo
		TargetData *TD;

		//void computeDependencies(BasicBlock*& body);
		long getLLFIIndexofInst(Instruction *inst);

	};

	// Compute the dependence matrix of a loop.  Only consider perfectly
	// nested, single block loops with easily analyzed array accesses.
	bool LoopDependence::runOnLoop(Loop *L, LPPassManager &LPM)
	{

		// Get our Loop and Alias Analysis information...
		LI = &getAnalysis<LoopInfo>();
		AA = &getAnalysis<AliasAnalysis>();
		TD = &getAnalysis<TargetData>();

		//only process outermost loop
		if (L->getParentLoop())
			return false;
		//NumLoopNests++;

		//now check that these loops are perfectly nested inside one another
		BasicBlock *body;

		//go through the basic block and make sure only loads and stores
		//access memory
		for (BasicBlock::iterator I = body->begin(), E = body->end(); I != E; I++)
		{
			if (I->getOpcode() == 42){ // JUSTIN: control category of loop
				errs() << getLLFIIndexofInst(I) << "\n";
			}
		}

		//NumPerfectLoopNests++;
		//file << "Loop Nest " << NumPerfectLoopNests << "\n";

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


	char LoopDependence::ID = 0;
	RegisterPass<LoopDependence> X("loop-dep", "Loop Dependence");
}
