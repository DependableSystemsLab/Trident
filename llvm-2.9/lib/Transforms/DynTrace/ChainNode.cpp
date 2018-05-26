#include "ChainNode.h"

ChainNode::ChainNode(long instIndex){
	index = instIndex;
	ptr = false;
	mem = false;
	type = 'N';
}

long ChainNode::getIndex(){
	return index;
}

char ChainNode::getInstType(){
	return type;
}

bool ChainNode::isUsedInMem(){
	return mem;
}

bool ChainNode::isUsedInPtr(){
	return ptr;
}

void ChainNode::setIndex(long instIndex){
	index = instIndex;
}

void ChainNode::setInstType(char instType){
	type = instType;
}

void ChainNode::setMem(bool usedInMemFlag){
	mem = usedInMemFlag;
}

void ChainNode::setPtr(bool usedInPtrFlag){
	ptr = usedInPtrFlag;
}
