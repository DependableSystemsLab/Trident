#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define listSize 100000
int initFlag = 0;
long long countList[listSize];


void profileCall(long llfiIndex){
	if(initFlag == 0){
		int i = 0;
		for(i=0; i<listSize; i++){
			countList[i] = 0;
		}
		initFlag = 1;
	}
	//printf("%d\n", cmpResult);
	countList[llfiIndex]++;
}

void dumpResult(){
	FILE *f = fopen("profile_call_prob_result.txt", "w");
	long i = 0;
	for(i=0; i<listSize; i++){
		if(countList[i] != 0){
			fprintf(f, "%lld: %d\n", i, countList[i]);
		}
	}
	fclose(f);
}

