#include <stdio.h>
#include <stdlib.h>

#define listSize 10000

int initFlag = 0;
int instList[listSize];


void getVmLog(long llfiIndex){

	if(initFlag == 0){
		remove("vmsize_log.txt");
		initFlag = 1;
		long i=0;
		for(i=0; i<listSize; i++){
			instList[i] = 0;
		}
	}
	
	if(instList[llfiIndex] == 1) return;

	FILE* file = fopen( "/proc/self/status", "r" );
	if ( file != NULL ){   
		char line[1024]; /* or other suitable maximum line size */
		while (fgets(line, sizeof line, file) != NULL) /* read a line */{   
			if (!strncmp(line,"VmSize:",7)){   
				//printf("%s", line);
				FILE* wf = fopen("vmsize_log.txt", "a");
				fprintf(wf, "%ld= %s", llfiIndex, line);
				fclose(wf);
				instList[llfiIndex] = 1;
				break;
			}   
		}   
		fclose(file);
	}

}
