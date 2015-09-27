#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 10;

int main(){
	float vec1[MAX], vec2[MAX];
	int i=0, count=0;

	for(i=0; i<MAX; i++) vec1[i] = rand() % 16;

	for(i=0; i<MAX; i++) printf("%f ", vec1[i]);

	count = ex09(vec1, vec2, MAX); 
	printf("\n");

	for(i=0; i<count; i++) printf("%f ", vec2[i]);
	
	printf("\n");

	return 0;
}