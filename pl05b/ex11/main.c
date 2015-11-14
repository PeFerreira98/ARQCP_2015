#include <stdio.h>
#include "test.h"

long int A=0, B=0;

int main(void){
	unsigned long long int res = 0;
	printf("Valor A:");
	scanf("%li", &A);

	printf("Valor B:");
	scanf("%li", &B);

	res = test();

	printf("res = %llu\n", res);

	return 0;
}
