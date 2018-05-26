#ifndef CHAINNODE_H
#define CHAINNODE_H
#include <iostream>
#include <vector>

class ChainNode
{
	long index; // Instruction index
	char type;
	bool mem; // Whether the value used in memory address
	bool ptr;

	public:
	ChainNode(long instIndex);
	void setIndex(long instIndex);
	void setInstType(char instType);
	void setMem(bool usedInMemFlag);
	void setPtr(bool usedInPtrFlag);
	long getIndex();
	char getInstType();
	bool isUsedInMem();
	bool isUsedInPtr();
};

#endif
