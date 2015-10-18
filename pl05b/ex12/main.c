#include <stdio.h>
#include "test.h"

int A=0, B=0;
long int C=0, D=0;

int main(void){
	long long int res = 0;

	printf("Valor A (8b):");
	scanf("%d", &A);

	printf("Valor B (16b):");
	scanf("%d", &B);

	printf("Valor C (32b):");
	scanf("%li", &C);
	
	printf("Valor D (32b):");
	scanf("%li", &D);

	res = test();

	printf("res = %llu\n", res);

	return 0;
}
