#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


void profileLoad(long* adrs, long llfiIndex){
	FILE *f = fopen("profile_mem_result.txt", "a");
	fprintf(f, "L %lld %p\n", llfiIndex, adrs);
	fclose(f);
}

void profileStore(long* adrs, long llfiIndex){
	FILE *f = fopen("profile_mem_result.txt", "a");
	fprintf(f, "S %lld %p\n", llfiIndex, adrs);
	fclose(f);
}

void dumpResult(){

}

