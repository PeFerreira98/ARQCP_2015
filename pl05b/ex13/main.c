#include <stdio.h>
#include "test.h"

long int A=0, B=0, C=0, D=0;

int main(void){
	long int res = 0;

	printf("Valor A:");
	scanf("%li", &A);

	printf("Valor B:");
	scanf("%li", &B);

	printf("Valor C:");
	scanf("%li", &C);
	
	printf("Valor D:");
	scanf("%li", &D);

	res = test();

	printf("res = %li\n", res);

	return 0;
}
