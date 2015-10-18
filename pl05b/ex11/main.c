#include <stdio.h>
#include "test.h"

int A=0, B=0;

int main(void){
	unsigned long long int res = 0;
	printf("Valor A:");
	scanf("%d", &A);

	printf("Valor B:");
	scanf("%d", &B);

	res = test();

	printf("res = %llu\n", res);

	return 0;
}
