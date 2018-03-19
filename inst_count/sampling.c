#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define listSize 100000
long long instCountList[listSize];
int init_flag = 0;


void profileCount(long llfiIndex){
	if(init_flag == 0){
		int i = 0;
		for(i=0;i<listSize;i++){
			instCountList[i] = 0;
		}
		init_flag = 1;
	}

	long long curCount = instCountList[llfiIndex];
	instCountList[llfiIndex] = curCount + 1;
}

void dumpResult(){
	FILE *f = fopen("instCountResult.txt", "w");
	long i = 0;
	for(i=0; i<listSize; i++){
		if(instCountList[i] != 0){
			fprintf(f, "%lld: %lld\n", i, instCountList[i]);
		}
	}
	fclose(f);
}

