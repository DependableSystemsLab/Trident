#include "llvm/Pass.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Type.h"
#include "llvm/Instructions.h"
#include "llvm/Instruction.h"
#include "llvm/Support/IRBuilder.h"
#include <string>
#include "llvm/Support/CommandLine.h"
#include <iostream>
#include <stack>
#include <map>
#include <sstream>
#include <fstream>


using namespace llvm;


static cl::opt<std::string> cl_select_index("select_index", cl::desc("Specify llfi index to analyze"), cl::value_desc("llfi index"));
static cl::opt<std::string> cl_select_stuples_file("select_stuples_file", cl::desc("Specify the file of selected index"), cl::value_desc("file name"));
static cl::opt<std::string> cl_select_store_file("select_store_file", cl::desc("Specify the file of selected index"), cl::value_desc("file name"));
static cl::opt<std::string> cl_select_cmp_file("select_cmp_file", cl::desc("Specify the file of selected index"), cl::value_desc("file name"));
static cl::opt<std::string> cl_select_call_file("select_call_file", cl::desc("Specify the file of selected index"), cl::value_desc("file name"));

struct InstTuple{
	float pR = 0;
	float mR = 0;
	float cR = 0;
};

struct InstNode{
	Instruction* nodeInst;
	float accumPR = 0;
	float accumMR = 0;
	float accumCR = 0;
};

std::map<long, InstTuple*> instTupleMap;
std::map<long, long long> instCountMap;


namespace{
	struct bishe_insert : public ModulePass{
		static char ID;   
		long targetIndex = 0;
		std::vector<Value*> visitedInstVector;

		// record crash rate
		float avCR = 0;
		float totalCR = 0;
		long cRCount = 0;

		bishe_insert() : ModulePass(ID) {
			readSTuples();
			//readStoreCount();
			//readCmpCount();
			//readCallCount();
		}

		virtual bool runOnModule(Module &M)
		{
			//errs() << "Analyzing Error Propagation ..." << '\n';

			readSelectIndex();
			for(Module::iterator F = M.begin(), E = M.end(); F!= E; ++F)
			{
				//errs() << F->getName() << '\n';
				std::string functionName = F->getName();
				for(Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB){
					bishe_insert::runOnBasicBlock(BB, M.getContext());
				}
			}

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
				if (llfiIndex == targetIndex){
					// The target one
					InstNode* initNode = new InstNode;
					initNode->nodeInst = BI;
					initNode->accumPR = 1;
					checkNextUseInst( initNode );
					return true;
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

		void readSelectIndex(){
			targetIndex = std::atol(cl_select_index.c_str());
		}

		////////////////////////////////////////////////////
		void checkNextUseInst(InstNode* curNode){
			Instruction* curInst = curNode->nodeInst;
			Value* curValue = dyn_cast<Value>(curInst);

			if( std::find(visitedInstVector.begin(), visitedInstVector.end(), curValue) != visitedInstVector.end() ){
				return;
			}



			// Process current node
			//////////////////////////////////////////////////////////////////////////////////
			// DEBUG
			//errs() << curInst->getOpcode() << " " << getLLFIIndexofInst(curInst) << " ";
			//if(isa<CallInst>(curInst)){
			//	errs() << dyn_cast<CallInst>(curInst)->getCalledFunction()->getName();
			//}
			//printf(" --> curAccum: %.6f, %.6f, %.6f\n", curNode->accumPR, curNode->accumMR, curNode->accumCR);
			//////////////////////////////////////////////////////////////////////////////////



			// If it is a terminator, add to global accum
			long curInstIndex = getLLFIIndexofInst(curInst);
			long curInstOpcode = curInst->getOpcode();
			if( (curInstOpcode == 2 && dyn_cast<BranchInst>(curInst)->isConditional()) || curInstOpcode == 28 || curInstOpcode == 45 ){
				// Result
				if(isa<StoreInst>(curInst)){
					printf("%ld store: %.6f, %.6f, %.6f\n", curInstIndex, curNode->accumPR, curNode->accumMR, curNode->accumCR);
				}else if(isa<CallInst>(curInst) && dyn_cast<Value>(curInst)->getNumUses() == 0 ){
					printf("%ld call %s: %.6f, %.6f, %.6f\n", curInstIndex, dyn_cast<CallInst>(curInst)->getCalledFunction()->getName(), curNode->accumPR, curNode->accumMR, curNode->accumCR);
				}else if(isa<BranchInst>(curInst) && dyn_cast<BranchInst>(curInst)->isConditional() ){
					long cmpIndex = getLLFIIndexofInst( dyn_cast<Instruction>(curInst->getOperand(0)) );
					printf("%ld cmp: %.6f, %.6f, %.6f\n", cmpIndex, curNode->accumPR, curNode->accumMR, curNode->accumCR);
				}
				return;
			}

			// Add to visited
			visitedInstVector.push_back(curValue);

			// Recursion to check
			Value::use_iterator UI = curValue->use_begin();
			Value::use_iterator UE = curValue->use_end();
			Value* nextIterateInst;
			std::stack<InstNode*> childStack;

			while(UI!=UE){
				Instruction* childInst = dyn_cast<Instruction>(*UI);
				if( std::find(visitedInstVector.begin(), visitedInstVector.end(), childInst) == visitedInstVector.end() ){
					nextIterateInst = *UI;
					InstNode* nextNode = new InstNode;
					nextNode->nodeInst = childInst;

					long nextInstIndex = getLLFIIndexofInst(childInst);

					float nextCR = instTupleMap[nextInstIndex]->cR;
					float nextPR = instTupleMap[nextInstIndex]->pR;
					float nextMR = instTupleMap[nextInstIndex]->mR;


					// Check if the next inst is a store
					if(isa<StoreInst>(childInst)){
						if( dyn_cast<StoreInst>(childInst)->getPointerOperand() == curInst ){
							// Cur inst is used as pointer in the next store inst
							nextCR = avCR;
							nextPR = 1 - avCR;
							nextMR = 0;
							//errs() << "Used in store as adrs\n";
						}else{
							// This is because STORE has 2 types of tuples depending on its input position.
							nextCR = 0;
							nextPR = 1;
							nextMR = 0;
						}
					}

					//printf(" -- nextCR: %.f, nextPR: %.f, nextMR: %.f \n", nextCR, nextPR, nextMR);

					// Save to next node with accum info
					
					// Update accum propagation
					nextNode->accumPR = nextPR * curNode->accumPR;
					nextNode->accumCR = curNode->accumPR * nextCR + curNode->accumCR;

					// Update accum masking
					nextNode->accumMR = 1 - nextNode->accumPR - nextNode->accumCR;
					childStack.push(nextNode);
				}
				UI++;
			}

			while(!childStack.empty()){
				checkNextUseInst( childStack.top() );
				childStack.pop();
			}

		}

		void readSTuples(){
			std::ifstream select_stuples_file;
			select_stuples_file.open(cl_select_stuples_file.c_str());
			if(!select_stuples_file.is_open()){
				errs()<<"\nERROR: can not open tuple file!\n";
				exit(1);
			}

			while(select_stuples_file.good()){
				std::string line;
				getline(select_stuples_file, line);
				if(line.empty())        continue;
				else{
					std::string input = line.c_str();
					std::istringstream ss(input);
					std::string token;

					std::vector<float> eleVector;
					while(std::getline(ss, token, ' ')) {
						float num = 0;
						std::stringstream convert(token);
						convert >> num;
						eleVector.push_back(num);
					}
					long index = (long)eleVector.at(0);
					float pR = eleVector.at(1);
					float mR = eleVector.at(2);
					float cR = eleVector.at(3);
					InstTuple* it = new InstTuple;
					it->pR = pR;
					it->mR = mR;
					it->cR = cR;
					instTupleMap[index] = it;
					//printf("%ld %.6f %.6f %.6f\n", index, pR, mR, cR);

					if(cR > 0){
						totalCR += cR;
						cRCount++;
						avCR = totalCR / cRCount;
						//printf("%.6f %.6f\n", totalCR, avCR);
					}
				}
			}
		}

		void readStoreCount(){
			std::ifstream select_store_file;
			select_store_file.open(cl_select_store_file.c_str());
			if(!select_store_file.is_open()){
				errs()<<"\nERROR: can not open store file!\n";
				exit(1);
			}

			while(select_store_file.good()){
				std::string line;
				getline(select_store_file, line);
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
					long index = (long)eleVector.at(0);
					long long sCount = eleVector.at(2);
					instCountMap[index] = sCount;
				//	printf("%ld %lld\n", index, sCount);
				}
			}
		}


		void readCmpCount(){
			std::ifstream select_cmp_file;
			select_cmp_file.open(cl_select_cmp_file.c_str());
			if(!select_cmp_file.is_open()){
				errs()<<"\nERROR: can not open cmp file!\n";
				exit(1);
			}

			while(select_cmp_file.good()){
				std::string line;
				getline(select_cmp_file, line);
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
					long index = (long)eleVector.at(0);
					long long fCount = eleVector.at(1);
					long long tCount = eleVector.at(2);
					long long totalCount = fCount + tCount;
					instCountMap[index] = totalCount;
					//printf("%ld %lld\n", index, totalCount);
				}
			}
		}


		void readCallCount(){
			std::ifstream select_call_file;
			select_call_file.open(cl_select_call_file.c_str());
			if(!select_call_file.is_open()){
				errs()<<"\nERROR: can not open call file!\n";
				exit(1);
			}

			while(select_call_file.good()){
				std::string line;
				getline(select_call_file, line);
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
					long index = (long)eleVector.at(0);
					long long cCount = eleVector.at(1);
					instCountMap[index] = cCount;
					//printf("%ld %lld\n", index, cCount);
				}
			}
		}



	};
}
char bishe_insert::ID = 0;
static RegisterPass<bishe_insert> X("bishe_insert", "test function exist", false, false);
