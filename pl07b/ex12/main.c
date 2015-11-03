#include <stdio.h>
#include <string.h>
#include "soma.h"

long long int *ptrvec;
int num = 10;

int main(void){
	long long int vec[10] = {43000000000,2,999,3,5,1000,7,1,65539,8};
	int i = 0;	
	int count = 0;
	
	ptrvec = vec;

	for(i=0; i<num; i++){
		printf("%llu ", vec[i]);
	}
	printf("\n");
	
	count = vec_corta();
	
	for(i=0; i<num; i++){
		printf("%llu ", vec[i]);
	}
	printf("\nModificações: %d\n", count);
	
	return 0;
}
