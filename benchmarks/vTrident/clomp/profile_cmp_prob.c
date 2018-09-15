#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define listSize 10000000
int initFlag = 0;
long long zeroList[listSize];
long long oneList[listSize];


void profileCmp(int cmpResult, long llfiIndex){
	if(initFlag == 0){
		int i = 0;
		for(i=0; i<listSize; i++){
			zeroList[i] = 0;
			oneList[i] = 0;
		}
		initFlag = 1;
	}
	//printf("%d\n", cmpResult);
	if(cmpResult == 0) zeroList[llfiIndex]++;
	else oneList[llfiIndex]++;
}

void dumpResult(){
	FILE *f = fopen("profile_cmp_prob_result.txt", "w");
	long i = 0;
	for(i=0; i<listSize; i++){
		if(zeroList[i] != 0 || oneList[i] != 0){
			fprintf(f, "%lld: %d %d\n", i, zeroList[i], oneList[i]);
		}
	}
	fclose(f);
}

