#include <stdio.h>
#include <string.h>
#include "soma.h"

int *ptrvec;
int num = 10;


int main(void){
	int vec[10] = {0,-2,999,-3,5,1000,7,1,-65539,8};
	int i = 0;	
	int count;

	ptrvec = vec;

	for(i=0; i<num; i++){
		printf("%d ", vec[i]);
	}
	
	printf("\n");
	count = preenche_vec();
	
	for(i=0; i<num; i++){
		printf("%d ", vec[i]);
	}
	
	printf("\nModificações: %d\n", count);
	
	return 0;
}
