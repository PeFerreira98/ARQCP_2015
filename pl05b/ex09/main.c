#include <stdio.h>
#include "soma.h"

int op1=0;

int main(void){
	int res = 0;
	printf("Valor op1:");
	scanf("%d", &op1);

	res = soma();

	printf("soma = %d:0x%x\n", res, res);

	return 0;
}
