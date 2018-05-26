#include "Sdds.h"

SDDS::SDDS(long sddsId){
	id = sddsId;
	endFlag = false;
}

long SDDS::getLastIndex(){
	if(chain.size() > 0){
  		return chain.at(chain.size() - 1).getIndex();
	}else{
		return 0;
	}
}

void SDDS::insertNode(long index, char type, bool memFlag, bool ptrFlag){
	ChainNode newNode(index);
	newNode.setInstType(type);
	newNode.setMem(memFlag);
	newNode.setPtr(ptrFlag);
	chain.push_back(newNode);
}

void SDDS::setEnd(){
	endFlag = true;
}

bool SDDS::isEnded(){
	return endFlag;
}

void SDDS::setId(long sddsId){
	id = sddsId;
}

std::vector<ChainNode> SDDS::getChain(){
	return chain;
}

long SDDS::getId(){
	return id;
}
