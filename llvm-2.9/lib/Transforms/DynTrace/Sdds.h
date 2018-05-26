#ifndef SDDS_H
#define SDDS_H
#include <iostream>
#include <vector>
#include "ChainNode.h"

class SDDS
{
	long id;
	std::vector<ChainNode> chain;
	bool endFlag;

	public:
	SDDS(long sddsId);
	long getLastIndex();
	void insertNode(long index, char type, bool memFlag, bool ptrFlag);
	void setEnd();
	bool isEnded();
	void setId(long sddsId);
	std::vector<ChainNode> getChain();
	long getId();
};

#endif
