#include <stdio.h>
#include "media.h"

int main(){
	int i;
	int vec[11];
	vec[0] = 8;
	vec[1] = 12;
	vec[2] = 16;
	vec[3] = 12;
	vec[4] = 10;
	vec[5] = 6;
	vec[6] = 14;
	vec[7] = 0;
	vec[8] = 12;
	vec[9] = 16;
	vec[10] = 18;
	int vecFreq[21];
	
	for (i = 0; i<21; i++){
		vecFreq[i] = 0;
	}
	
	ex14(vec, 11, vecFreq);
	
	for (i = 0; i<21; i++){
		printf("%d, ",vecFreq[i]);
	}
	
	return 0;	
}
