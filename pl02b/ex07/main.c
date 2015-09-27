#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 30;

int main(){
	int vec[MAX], i=0;

	for(i=0; i<MAX; i++) vec[i] = rand() % 16;

	for(i=0; i<MAX; i++) printf("%d ", vec[i]);

	ex07(vec, MAX); 
	printf("\n");

	for(i=0; i<MAX; i++) printf("%d ", vec[i]);
	
	printf("\n");

	return 0;
}