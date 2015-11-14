#include <stdio.h>
#include "test.h"

int op1=0, op2=0, overflow_fl=0, carry_fl=0;

int main(void){
	int res = 0;
	printf("Valor op1:");
	scanf("%d", &op1);

	printf("Valor op2:");
	scanf("%d", &op2);

	test();

	printf("overflow = %d, carry = %d\n", overflow_fl, carry_fl);

	return 0;
}
