#include <stdio.h>
#include "test.h"

int A=0, B=0, n=0;

int main(void){
	int res = 0;

	printf("Valor A:");
	scanf("%d", &A);

	printf("Valor B:");
	scanf("%d", &B);

	printf("Valor n:");
	scanf("%d", &n);

	res = test();

	printf("res = %d\n", res);

	return 0;
}
