#ifndef DETECTOR_H
#define DETECTOR_H

#include "llvm/Pass.h"
#include "llvm/Constants.h"
#include "llvm/GlobalValue.h"
#include "llvm/Support/InstIterator.h"
#include "llvm/Instruction.h"
#include "llvm/Instructions.h"
#include "llvm/DerivedTypes.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/InstIterator.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Metadata.h"

#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/Dominators.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AliasSetTracker.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ProfileInfo.h"

#include <iostream>
#include <fstream>
#include <set>
#include <list>
#include <sstream>
#include <algorithm>
#include <sstream>

using namespace llvm;
using namespace std;

namespace InstrumentDetector_ns{
	class InstrumentDetector : public ModulePass {
	private:
		Module* app_module;
		vector<int> selected_insts;
		map<int, Instruction*> map_instID_to_inst;
		map<Instruction*, int> map_inst_to_instID;
		map<Instruction*, Instruction*> map_duplicated_insts; //map_duplicated_insts[original_inst] == duplicated_inst
		set<BasicBlock*> set_dest_bbs;

		static string name_prefix;

		void doInitialization(Module &M);

		void readSelectSet();
		void addAllInst();
		void getMaps();
		void instrumentThisInstruction(Instruction* inst);
		void handleNotUsedDuplicatedInsts();
		void combineExtendedChecks();
		void constructCheckerFunc();
		void removeRedundentBitCast();
		void insertCalltoCheckFlag(Instruction* insert_pos);

		StoreInst* used_in_Store(Instruction* inst);
		bool used_in_Load(Instruction* inst);
		bool used_in_Br(Instruction* inst);
		bool used_in_Ret(Instruction* inst);
		bool hasUndefValue(Instruction* inst);
		bool unduplicatableCall(Instruction* inst);

		//To remove removable checkers, 
		//this might enlarge the 
		//protected instruction set a little bit
		void connectFragments(); 

		//We will try to find a lowly executed place
		// for the check point to reduce overhead
		Instruction* findPlaceforCheckPointCmp(Instruction* original_place, Instruction* original_inst, Instruction** check_cmp_inst_ref);
		Instruction* findPlaceforCheckPointStore(Instruction* original_place, Instruction* original_inst);

	public:
		static char ID;
		static long inst_id;
		InstrumentDetector() : ModulePass(ID){}
		virtual void getAnalysisUsage(AnalysisUsage &AU) const 
		{
			//order matters! LoopInfo requires DominatorTree info
			//AU.addRequired<TargetData>();
			//AU.addRequired<CallGraph>();
	  		AU.addRequired<DominatorTree>();
			AU.addRequired<PostDominatorTree>();
			AU.addRequired<LoopInfo>();
			//AU.addRequired<ProfileInfo>();
			AU.setPreservesCFG();
		}


		virtual bool runOnModule(Module &M);
		
	};
	char InstrumentDetector::ID = 0;
	long InstrumentDetector::inst_id = 0;
	static RegisterPass<InstrumentDetector> X("InstrumentDetector", "Instrument Detectors", false, false);

	string InstrumentDetector::name_prefix = "duplicated_";
}

#endif