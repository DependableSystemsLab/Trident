#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int instLogArray [100000] = {0};

void profileLoad(long* adrs, long llfiIndex){
	if(instLogArray[llfiIndex] == 0){
		FILE *f = fopen("profile_mem_result.txt", "a");
		fprintf(f, "L %lld %p\n", llfiIndex, adrs);
		fclose(f);
		instLogArray[llfiIndex] = 1;
	}
}

void profileStore(long* adrs, long llfiIndex){
	if(instLogArray[llfiIndex] == 0){
		FILE *f = fopen("profile_mem_result.txt", "a");
		fprintf(f, "S %lld %p\n", llfiIndex, adrs);
		fclose(f);
		instLogArray[llfiIndex] = 1;
	}
}

void dumpResult(){

}

