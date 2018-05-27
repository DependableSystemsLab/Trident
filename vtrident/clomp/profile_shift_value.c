#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define listSize 100000
int initFlag = 0;
long long shiftValueList[listSize];
long long shiftCountList[listSize];

void initLists(){
	if(initFlag == 0){
		long long i = 0;
		for(i=0; i<listSize; i++){
			shiftValueList[i] = 0;
			shiftCountList[i] = 0;
		}
		initFlag = 1;
	}
}

void profileShiftValues(long shiftValue, long llfiIndex){
	initLists();
	//printf("%d\n", cmpResult);
	long long shiftCountV = shiftCountList[llfiIndex];
	long long orgV = shiftValueList[llfiIndex];
	long long totalV = orgV * shiftCountV + shiftValue;
	shiftCountList[llfiIndex] += 1;
	long long aV = totalV / (shiftCountV + 1);
	shiftValueList[llfiIndex] = aV;
}


void dumpResult(){
	FILE *f = fopen("profile_shift_value_result.txt", "w");
	long i = 0;
	for(i=0; i<listSize; i++){
		if(shiftCountList[i] != 0){
			fprintf(f, "%lld: %ld %ld\n", i, shiftValueList[i], shiftCountList[i]);
		}
	}
	fclose(f);
}

