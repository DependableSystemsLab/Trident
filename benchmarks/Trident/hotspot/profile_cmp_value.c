#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define listSize 100000
int initFlag = 0;
long long icmpValue1List[listSize];
long long icmpValue2List[listSize];
double fcmpValue1List[listSize];
double fcmpValue2List[listSize];
long long icmpCountList[listSize];
long long fcmpCountList[listSize];

void initLists(){
	if(initFlag == 0){
		long long i = 0;
		for(i=0; i<listSize; i++){
			icmpValue1List[i] = 0;
			icmpValue2List[i] = 0;
			fcmpValue1List[i] = 0;
			fcmpValue2List[i] = 0;
			icmpCountList[i] = 0;
			fcmpCountList[i] = 0;
		}
		initFlag = 1;
	}
}

void profileICmpValues(long cmpValue1, long cmpValue2, long llfiIndex){
	initLists();
	//printf("%d\n", cmpResult);
	icmpCountList[llfiIndex] += 1;
	long long cmpCountV = icmpCountList[llfiIndex];
	long orgV1 = icmpValue1List[llfiIndex];
	long orgV2 = icmpValue2List[llfiIndex];
	icmpValue1List[llfiIndex] = (orgV1*cmpCountV+cmpValue1) / cmpCountV;
	icmpValue2List[llfiIndex] = (orgV2*cmpCountV+cmpValue2) / cmpCountV;
}

void profileFCmpValues(double cmpValue1, double cmpValue2, long llfiIndex){
	initLists();
	//printf("%d\n", cmpResult);
	fcmpCountList[llfiIndex] += 1;
	long long cmpCountV = fcmpCountList[llfiIndex];
	double orgV1 = fcmpValue1List[llfiIndex];
	double orgV2 = fcmpValue2List[llfiIndex];
	fcmpValue1List[llfiIndex] = (orgV1*cmpCountV+cmpValue1) / cmpCountV;
	fcmpValue2List[llfiIndex] = (orgV2*cmpCountV+cmpValue2) / cmpCountV;
}

void dumpResult(){
	FILE *f = fopen("profile_cmp_value_result.txt", "w");
	long i = 0;
	for(i=0; i<listSize; i++){
		if(icmpCountList[i] != 0){
			fprintf(f, "icmp %lld: %ld %ld %lld\n", i, icmpValue1List[i], icmpValue2List[i], icmpCountList[i]);
		}else if(fcmpCountList[i] != 0){
			fprintf(f, "fcmp %lld: %f %f %lld\n", i, fcmpValue1List[i], fcmpValue2List[i], fcmpCountList[i]);
		}
	}
	fclose(f);
}

