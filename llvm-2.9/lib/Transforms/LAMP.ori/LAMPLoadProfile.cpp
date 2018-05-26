
#include "llvm/Module.h"
#include "llvm/Pass.h"
#include "llvm/Analysis/Passes.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Constants.h"
#include "llvm/Instructions.h"
#include "llvm/Function.h"
#include "llvm/BasicBlock.h"
#include "llvm/Support/Debug.h"
#include "llvm/Target/TargetData.h"
#include "llvm/ADT/IndexedMap.h"
#include "llvm/Module.h"
#include <map>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include "LAMPLoadProfile.h"

using namespace llvm;

static std::map<unsigned int, BasicBlock*> IdToLoopMap_global;
static std::map<BasicBlock*, unsigned int> LoopToIdMap_global;

inline unsigned int str_to_int(std::string& s)
{
	std::istringstream iss(s);
	unsigned int t;
	iss >> t;
	return t;	
}

namespace {
  class LdStCallCounter : public ModulePass {
  public:
    static char ID;
    static bool flag;
    bool runOnModule(Module &M);
    static unsigned int num_loads;
    static unsigned int num_stores;
    static unsigned int num_calls;
//    static unsigned int num_loops;
	LdStCallCounter(): ModulePass(ID)
	{
		
	}	
	unsigned int getCountInsts() { return num_loads + num_stores + num_calls; }
  };
}

char LdStCallCounter::ID = 0;

// flag to ensure we only count once
bool LdStCallCounter::flag = false;

// only want these counted once and only the first time (not after other instrumentation)
unsigned int LdStCallCounter::num_loads = 0;	
unsigned int LdStCallCounter::num_stores = 0;
unsigned int LdStCallCounter::num_calls = 0;
// store loops here also because loop passes cannot be required by other passes
// unsigned int LdStCallCounter::num_loops = 0;	

static RegisterPass<LdStCallCounter>
A("lamp-inst-cnt",
  "Count the number of LAMP Profilable insts");

bool LdStCallCounter::runOnModule(Module &M) {
  if (flag == true)	// if we have counted already -- structure of llvm means this could be called many times
  	return false;
  	// for all functions in module
  for (Module::iterator I = M.begin(), E = M.end(); I != E; ++I)
    if (!I->isDeclaration())
	{			// for all blocks in the function
		for (Function::iterator BBB = I->begin(), BBE = I->end(); BBB != BBE; ++BBB)
		{		// for all instructions in a block
			for (BasicBlock::iterator IB = BBB->begin(), IE = BBB->end(); IB != IE; IB++)
			{
				if (isa<LoadInst>(IB))		// count loads, stores, calls
					num_loads++;
				else if (isa<StoreInst>(IB))
					num_stores++;		// count only external calls, ignore declarations, etc
				else if (isa<CallInst>(IB) && ( (dyn_cast<CallInst>(IB)->getCalledFunction() == NULL) || 
						  (dyn_cast<CallInst>(IB)->getCalledFunction()->isDeclaration())))
					num_calls++;
			}
		}
	}
llvm::errs() << "Loads/Store/Calls:" << num_loads << " " << num_stores << " " << num_calls << "\n";
	flag = true;
	
  return false;
}

void LAMPBuildLoopMap::getAnalysisUsage(AnalysisUsage &AU) const {
        AU.setPreservesAll();
	AU.addRequired<LdStCallCounter>();
}

char LAMPBuildLoopMap::ID = 0;
unsigned int LAMPBuildLoopMap::loop_id = 0;
bool LAMPBuildLoopMap::IdInitFlag = false;
static RegisterPass<LAMPBuildLoopMap> Y("lamp-map-loop","Build the map of LAMP Id and Loop");
LoopPass *llvm::createLAMPBuildLoopMapPass() { return new LAMPBuildLoopMap(); }

bool LAMPBuildLoopMap::runOnLoop(Loop* L, LPPassManager &LPM)
{
  // build the <IDs, Loop> map
	LdStCallCounter &Counter = getAnalysis<LdStCallCounter>();
	if (IdInitFlag == false){
		loop_id = Counter.getCountInsts()-1; //instruction is assigned from 0
		llvm::errs() << "----------------------------------------------\n";
		llvm::errs() << "ID  loop_ptr header_ptr\n";
		llvm::errs() << "----------------------------------------------\n";
		IdInitFlag = true;
	}
	BasicBlock* BB = L->getHeader();
	loop_id ++;
	IdToLoopMap_global[loop_id] = BB;
	LoopToIdMap_global[BB] = loop_id;

	IdToLoopMap[loop_id] = BB;
	LoopToIdMap[BB] = loop_id;

	llvm::errs() << loop_id << " " << L << " " << BB << " " << /* IdToLoopMap_global.size() <<*/ "\n";
  
	return true;
}

void LAMPLoadProfile::getAnalysisUsage(AnalysisUsage &AU) const {
        AU.setPreservesAll();
        // AU.addRequired<LoopInfo>();
}

char LAMPLoadProfile::ID = 0;
unsigned int LAMPLoadProfile::lamp_id = -1;
static RegisterPass<LAMPLoadProfile> Z("lamp-load-profile","Load back profile data and generate dependency information");

bool LAMPLoadProfile::runOnModule(Module& M)
{
	IdToLoopMap.insert(IdToLoopMap_global.begin(), IdToLoopMap_global.end());
	LoopToIdMap.insert(LoopToIdMap_global.begin(), LoopToIdMap_global.end());
  // build the <IDs, Instrucion> map
	for (Module::iterator FB = M.begin(), FE = M.end(); FB != FE; FB++){
  			// for all blocks in the function
		if (!FB->isDeclaration())
		for (Function::iterator BBB = FB->begin(), BBE = FB->end(); BBB != BBE; ++BBB)
		{		// for all instructions in a block
			for (BasicBlock::iterator IB = BBB->begin(), IE = BBB->end(); IB != IE; IB++)
			{
				if (isa<LoadInst>(IB) || isa<StoreInst>(IB)){ // count loads, stores, calls
					IdToInstMap[++lamp_id]=IB;
					InstToIdMap[IB]=lamp_id;
				}
				else if (isa<CallInst>(IB) && ( (dyn_cast<CallInst>(IB)->getCalledFunction() == NULL) || 
							(dyn_cast<CallInst>(IB)->getCalledFunction()->isDeclaration()))){
					IdToInstMap[++lamp_id]=IB;
					InstToIdMap[IB]=lamp_id;
				}
			}
		}
	}
	std::ifstream ifs;
	struct stat sInfo;

	if(stat("result.lamp.profile", &sInfo ) !=0){    // need to add file name
		std::cerr << "Could not find file result.lamp.profile\n";
		return false;
	}
	try{
		ifs.open("result.lamp.profile");
		//llvm::errs() << "Opened result.lamp.profile\n";
	}catch (...){
		std::cerr << "Could not find file result.lamp.profile\n";
		return false;
	}
	std::string s;
	// discard the first three strings ("BEGIN" "Memory" "Profile")
	ifs >> s; ifs >> s; ifs >> s;

	unsigned int num_cnt = 0;
	unsigned int num, i1_id=0, i2_id=0, cross_iter=0, loop_id=0, times=0;
	BasicBlock* BB;
	std::map<BasicBlock*, std::set<std::pair<Instruction*, Instruction*>* > >::iterator iter;

	llvm::errs() << "--------------------------------------------------\n";
	llvm::errs() << "  Inst_1 --> Inst_2        Loop          Count\n";
	llvm::errs() << "--------------------------------------------------\n";

  while (ifs >> s)
	{
		size_t found_leftP;   // ( 
		size_t found_rightP;  // )

    // String Operation
		// (1) discard string with ")"
		// (2) erase "(" in the string

		found_rightP = s.find_first_of(")");
		if (found_rightP !=  std::string::npos) continue;

		found_leftP = s.find_first_of("(");
		if (found_leftP !=  std::string::npos){
			assert(found_leftP == 0);        // "(" always 1st character
			s.erase(0,1);
		}
    if (s.find("END") != std::string::npos) break;
    
    num_cnt ++;
		num = str_to_int(s);
		// llvm::errs() << "Read: " << num;

    switch (num_cnt % 6){ //6  numbers in each line (result.lamp.profile)
			case 1:
				i1_id = num;
				break;
			case 2:
				cross_iter = num;
				break;
			case 3:
				loop_id = num;
				break;
			case 4:
				i2_id = num;
				break;
			case 5:
				times = num;
//				if (cross_iter){  // comment out for 583 hw2
					if ( IdToInstMap[i1_id] != NULL && IdToInstMap[i2_id] !=NULL  ){
						std::pair<Instruction*, Instruction*>* dep_inst_pair_ptr = new std::pair<Instruction*, Instruction*>;
						dep_inst_pair_ptr->first  = IdToInstMap[i1_id];
						dep_inst_pair_ptr->second = IdToInstMap[i2_id];
						BB = IdToLoopMap_global[loop_id];

						llvm::errs() << IdToInstMap[i1_id] << "(" << i1_id<< ")" << " " << IdToInstMap[i2_id] << "(" << i2_id<< ")" << ", "  << BB << "(" << loop_id << ") " ;
						iter = LoopToDepSetMap.find(BB);
						if (iter == LoopToDepSetMap.end() ){   // newly found loop
							std::set <std::pair<Instruction*, Instruction*>* >* dep_pair_set_ptr = new std::set <std::pair<Instruction*, Instruction*>* >;
							dep_pair_set_ptr->insert(dep_inst_pair_ptr);
							LoopToDepSetMap[BB] = *dep_pair_set_ptr;
							//llvm::errs() << " X " ;
						}else{																 // loop already in the map
							LoopToDepSetMap[BB].insert(dep_inst_pair_ptr);
							//llvm::errs() << " O " ;
						}
						DepToTimesMap[dep_inst_pair_ptr] = times;	
						llvm::errs() << times << "  " << /*LoopToDepSetMap.size() <<*/  "\n";
					}
//				}  // comment out for 583 hw2
				break;  
			case 0:
				break;
			default:
				break;
		}
	} // end of while(ifs >> s)


	llvm::errs() << "--------------------------------------------------\n";
	llvm::errs() << "  Max Dep Count in each Loop\n";
	llvm::errs() << "--------------------------------------------------\n";

	std::map<BasicBlock*, std::set<std::pair<Instruction*, Instruction*>* > > :: iterator  Liter;
	std::set<std::pair<Instruction*, Instruction*>* > :: iterator  Siter;
	unsigned int max_times;
	unsigned int  Id1=0, Id2=0;
  //for (int i = lamp_id+1; i< ;i ++ )
	llvm::errs() << "Num of cross-dep Loops: "<< LoopToDepSetMap.size() << "\n";
  for (Liter = LoopToDepSetMap.begin();Liter != LoopToDepSetMap.end(); Liter++){
		max_times = 0;
		for (Siter = Liter->second.begin();Siter != Liter->second.end(); Siter++){
			times = DepToTimesMap[*Siter];
			if (times > max_times){	
				max_times = times;
        Id1 = InstToIdMap[(*Siter)->first];
        Id2 = InstToIdMap[(*Siter)->second];
			}
		}
		LoopToMaxDepTimesMap[Liter->first] = max_times;
    llvm::errs() << LoopToIdMap[Liter->first] << " " << max_times << " ("  << Id1 << "," << Id2 << ")"<< "\n";
	}

	return true;
}
