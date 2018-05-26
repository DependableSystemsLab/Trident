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
#include "llvm/Support/CommandLine.h"

#include <vector>
#include <deque>
#include <set>
#include <algorithm>
#include <ostream>
#include <fstream>
#include <iostream>
#include <queue>  
#include <map>
#include <sstream>
#include <string> 
#include <stack> 



using namespace llvm;

static cl::opt<std::string> cl_select_cmp_prob_name("select_cmp_prob_file", cl::desc("Specify the file of selected index"), cl::value_desc("file name"));
static cl::opt<std::string> cl_select_LT_name("select_ltcmp_file", cl::desc("Specify the file of selected index"), cl::value_desc("file name"));
static cl::opt<std::string> cl_select_index("select_target_index", cl::desc("Specify the target of selected index"), cl::value_desc("file name"));


struct GraphNode{
	BasicBlock* curBb;
	float prob = 0;
	float initNodeRProb = 0;
};

struct StoreTuple{
	float prob = 0; // Prob. of path to reach the store
	float rProb = 0; // Prob. of the reverse branch of the target CMP
	GraphNode* node = new GraphNode;
};

std::map<long, StoreTuple*> storeTupleMap; // storeIndex -> storeTuple
std::map<long, float> cmpFalseProbMap;
long targetCmpIndex;
long targetHeaderBrIndex;
std::vector<long> ltcmpInst;
std::vector<long> headerBrIndexVec;
std::map<long, long> exitToHeaderMap;


namespace{

	struct NLTSolver : public ModulePass{
		std::ofstream file;

		static char ID;

		NLTSolver() : 
			ModulePass(ID){
				readBranchProb();
				readLTCmps();
				readTargetIndex();
				targetHeaderBrIndex = exitToHeaderMap[targetCmpIndex];
			}
		/*
		   virtual void getAnalysisUsage(AnalysisUsage &AU) const{
		   AU.addRequired<LoopInfo>();
		   }
		 */
		virtual bool runOnModule(Module &M){
			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F){
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB){
					runOnBasicBlock(BB, F, targetCmpIndex);
				}
			}
		}

		virtual bool runOnBasicBlock(Function::iterator &BB, Function* f, long targetCmpIndex){
			for(BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE; ++BI){
				if( getLLFIIndexofInst(BI) == targetHeaderBrIndex){
					processCmp(BI, f);
				}
			}
		}

		void processCmp(Instruction* targetHeaderBrInst, Function* f){

			// Start from header bb
			BasicBlock *initBb = targetHeaderBrInst->getParent(); // This is the header bb of the loop.
			TerminatorInst* tmnInst = initBb->getTerminator();
			long headerBrIndex = getLLFIIndexofInst(targetHeaderBrInst);
			long headerCmpIndex = getCmpIndexOfBb(initBb);
			float tmnValue = 1;

			// BFS
			std::queue<GraphNode*> gQueue;
			//////////////////////////////////
			GraphNode* initNode = new GraphNode;
			initNode->curBb = initBb;
			gQueue.push(initNode);
			//////////////////////////////////
			std::vector<GraphNode*> visitedVector;
			std::vector<GraphNode*> directDomBbsOfTarget;

			
			// The loop only contains 1 bb
			if(headerCmpIndex == targetCmpIndex){
				errs() << "SDC 1\n";
				return;
			}


			while( !gQueue.empty() ){
				GraphNode* curNode = gQueue.front();
				gQueue.pop();
				BasicBlock* curBb = curNode->curBb;

				// DEBUG
				//errs() << " \nVisiting " << getCmpIndexOfBb(curBb);
				//printf(", curprob: %.6f, initNodeRProb: %.6f\n", curNode->prob, curNode->initNodeRProb);

				// Encounter a new header bb of a loop
				long curBbBrIndex = getTmnIndexOfBb(curBb);
				if(std::find(headerBrIndexVec.begin(), headerBrIndexVec.end(), curBbBrIndex)!=headerBrIndexVec.end()){
					if( headerBrIndex != curBbBrIndex){
						errs() << "Loop nested found ... \n";
						return;
					}
				}

				// If this is the exit bb
				// Return cond.
				if(getCmpIndexOfBb(curNode->curBb) == targetCmpIndex && curNode->prob >= tmnValue){
				//if(curNode->prob >= tmnValue){
					// This is the re-convergence point BB.

					// DEBUG
					//printf("... Exit, with tmnValue: %.6f, curNode.prob: %.6f \n", tmnValue, curNode->prob);
					//errs() << "\n\nStore found: " << storeTupleMap.size() << "\n";

					for (std::map<long, StoreTuple*>::iterator it = storeTupleMap.begin(); it != storeTupleMap.end(); ++it){
   						//errs() << "\n -> StoreIndex: " << it->first;
						//printf(" => prob: %.6f, rprob: %.6f\n", it->second->prob, it->second->rProb);

						long storeIndex = it->first;
						// If the target cmp bb dominates the bb containing the store, then prob is 1.
						GraphNode* storeNode = it->second->node;
						/*
						int k=0;
						int domFlag = 0;
						for(k=0;k<directDomBbsOfTarget.size();k++){
							if( directDomBbsOfTarget.at(k) == storeNode ){
								domFlag = 1;
								break;
							}
						}
						if(domFlag == 0){						
							float affProb = it->second->prob * ( 1 + it->second->rProb );
							printf("%ld %.6f\n", storeIndex, affProb);
						}else{
							printf("%ld 1\n", storeIndex);
						}
						*/
						float fProb = cmpFalseProbMap[targetCmpIndex];
						float tProb = 1-fProb;
						float biggerProb = 1;
						if(fProb >= tProb) biggerProb = fProb;
						else biggerProb = tProb;
						float affProb = biggerProb - (1 - it->second->prob);
						printf("%ld %.6f\n", storeIndex, affProb);
					}
					return;
				}

				// Update store tuple in current node
				updateAllStoresInNode(curNode);

				TerminatorInst* curTmnInst = curBb->getTerminator();

				// Get children
				if(curTmnInst->getOpcode() == 2){
					int ti = curTmnInst->getNumSuccessors();
					int i = 0;
					for(i=0; i<ti; i++){
						BasicBlock* nextBb = curTmnInst->getSuccessor(i);

						/////////////////////////////////////
						GraphNode* nextNode = new GraphNode;
						int j=0;
						int visitedFlag = 0;
						for(j=0;j<visitedVector.size();j++){
							//if(visitedVector.at(j).curBb == nextBb && visitedVector.at(j).curBb != NULL){
							if(visitedVector.at(j)->curBb == nextBb){
								nextNode = visitedVector.at(j);
								visitedFlag = 1;
								break;
							}
						}
						if(visitedFlag == 0){
							nextNode->curBb = nextBb;
						}
						/////////////////////////////////////

						if(curBb != nextBb && nextBb != initBb){
							long cmpIndex = getCmpIndexOfBb(curBb);
							if(std::find(ltcmpInst.begin(), ltcmpInst.end(), cmpIndex)==ltcmpInst.end()){
								// Not found in LT list
								float brProb = 1;
								if(ti > 1) {
									if(i==0){
										// True br, i=0, tOrF=0
										brProb = getBrProb(curBb, 0);
									}else{
										// False br, i=1, tOrF=1
										brProb = getBrProb(curBb, 1);
									}

									// If init node, set r prob
									if(curNode == initNode){
										nextNode->initNodeRProb = 1-brProb;
										//errs() << ">>> Setting init node rprob.\n";
										directDomBbsOfTarget.push_back(nextNode);
									}else{
										// If not, inhretant from parent
										nextNode->initNodeRProb = curNode->initNodeRProb;
									}
								}

								// Update path prob of next node
								if(curNode->prob == 0){
									nextNode->prob = brProb;
									//printf(" >>> new node prob: %.6f\n", brProb);
								}else{
									//printf(" >>> before agg. curNode.prob: %.6f, nextNode.prob: %.6f, brProb: %.6f\n", curNode->prob, nextNode->prob, brProb);
									nextNode->prob = nextNode->prob + curNode->prob * brProb;
									//printf(" >>> after agg. curNode.prob: %.6f, nextNode.prob: %.6f, brProb: %.6f\n", curNode->prob, nextNode->prob, brProb);
								}
								
								gQueue.push(nextNode);
							}

						}
					}
				}else{
					tmnValue = tmnValue - curNode->prob;
				}

				int k = 0;
				int visitedFlag = 0;
				for(k=0;k<visitedVector.size();k++){
					if(visitedVector.at(k) == curNode){
						visitedFlag = 1;
						break;
					}
				}
				if(visitedFlag == 0){
					visitedVector.push_back(curNode);
				}
				//errs() << "--VistedVector size: " << visitedVector.size() << "\n";

			}

		}

		void updateAllStoresInNode(GraphNode* theNode){
			BasicBlock* theBb = theNode->curBb;
			for(BasicBlock::iterator BI = theBb->begin(), BE = theBb->end(); BI != BE; ++BI){
				if(isa<StoreInst>(BI)){
					StoreTuple* sT = new StoreTuple;
					sT->prob = theNode->prob;
					sT->rProb = theNode->initNodeRProb;
					sT->node = theNode;
					long storeIndex = getLLFIIndexofInst(BI);
					storeTupleMap[storeIndex] = sT;
					//errs() << ">>> Store found " << storeIndex << "\n";
				}
			}
		}

		long getLLFIIndexofInst(Instruction *inst) {
			MDNode *mdnode = inst->getMetadata("llfi_index");
			if (mdnode) {
				ConstantInt *cns_index = dyn_cast<ConstantInt>(mdnode->getOperand(0));
				return cns_index->getSExtValue();
			}
			return 0;
		}

		long getCmpIndexOfBb(BasicBlock* curBb){
			TerminatorInst* curTmnInst = curBb->getTerminator();
			if(curTmnInst->getNumOperands() > 0){
				if(isa<CmpInst>(curTmnInst->getOperand(0))){
					Instruction* I = dyn_cast<Instruction>(curTmnInst->getOperand(0));
					if(I->getOpcode() == 42 || I->getOpcode() == 43){
						return getLLFIIndexofInst(I);
					}
				}
			}
			return 0;
		}

		long getTmnIndexOfBb(BasicBlock* bb){
			TerminatorInst* tmnInst = bb->getTerminator();
			return getLLFIIndexofInst(dyn_cast<Instruction>(tmnInst));
		}

		float getBrProb(BasicBlock* curBb, int tOrF){
			long cmpIndex = getCmpIndexOfBb(curBb);
			//if(cmpIndex == 0) return 1;
			if(tOrF==0){
				// True br
				return (1-cmpFalseProbMap[cmpIndex]);
			}else{
				// False br
				return cmpFalseProbMap[cmpIndex];
			}
		}

		std::vector<long> getStoresInBb(BasicBlock* curBb){
			std::vector<long> storeVec;
			for(BasicBlock::iterator BI = curBb->begin(), BE = curBb->end(); BI != BE; ++BI){
				if(isa<StoreInst>(BI)){
					storeVec.push_back(getLLFIIndexofInst(BI));
				}
			}
			return storeVec;
		}

		void readTargetIndex(){
			targetCmpIndex = std::atol(cl_select_index.c_str());
		}

		void readLTCmps(){
			std::ifstream select_ltcmp_file;
			select_ltcmp_file.open(cl_select_LT_name.c_str());
			if(!select_ltcmp_file.is_open()){
				errs()<<"\nERROR: can not open select_set_file!\n";
				exit(1);
			}

			while(select_ltcmp_file.good()){
				std::string line;
				getline(select_ltcmp_file, line);
				if(line.empty())        continue;
				else{

					std::string input = line.c_str();
					std::istringstream ss(input);
					std::string token;

					std::vector<long long> eleVector;
					while(std::getline(ss, token, ' ')) {
						long num = 0;
						std::stringstream convert(token);
						convert >> num;
						eleVector.push_back(num);
					}
					long headerBrIndex = eleVector.at(0);
					long exitBbCmpIndex = eleVector.at(1);

					ltcmpInst.push_back(exitBbCmpIndex);
					headerBrIndexVec.push_back(headerBrIndex);
					exitToHeaderMap[exitBbCmpIndex] = headerBrIndex;
				}
			}

		}

		void readBranchProb(){
			std::ifstream select_cmp_prob_file;
			select_cmp_prob_file.open(cl_select_cmp_prob_name.c_str());
			if(!select_cmp_prob_file.is_open()){
				errs()<<"\nERROR: can not open select_set_file!\n";
				exit(1);
			}

			while(select_cmp_prob_file.good()){
				std::string line;
				getline(select_cmp_prob_file, line);
				if(line.empty())        continue;
				else{
					std::string input = line.c_str();
					std::istringstream ss(input);
					std::string token;

					std::vector<long long> eleVector;
					while(std::getline(ss, token, ' ')) {
						long long num = 0;
						std::stringstream convert(token);
						convert >> num;
						eleVector.push_back(num);
					}
					long cmpIndex = (long)eleVector.at(0);
					long long cmpFalseCount = eleVector.at(1);
					long long cmpTrueCount = eleVector.at(2);
					long long totalCount = cmpTrueCount + cmpFalseCount;
					float cmpFalseProb = (float)cmpFalseCount / (float)totalCount;
					float cmpTrueProb = (float)cmpTrueCount / (float)totalCount;
					if(cmpFalseProb == 0){
						cmpFalseProb = 0.00001;
						cmpTrueProb = 1- cmpFalseProb;
					}
					if(cmpTrueProb == 0){
						cmpTrueProb = 0.00001;
						cmpFalseProb = 1 - cmpTrueProb;	
					}
					cmpFalseProbMap[cmpIndex] = cmpFalseProb;

					//printf("%.15f\n", cmpFalseProb);
					//errs() << "Select Index: " << cmpIndex << "\n";
				}
			}
		}
	};

}

char NLTSolver::ID = 0;
static RegisterPass<NLTSolver> X("loop-dep", "NLTSolver", false, false);
