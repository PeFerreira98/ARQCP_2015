#include <stdio.h>
#include "soma.h"

int op1=0, op2=0, res = 0;

int main(void){
	int i = 0;
	printf("Valor op1:");
	scanf("%d", &op1);
	printf("Valor op2:");
	scanf("%d", &op2);

	res = soma();
	printf("soma = %d\n", res);
	
	res = sub();
	printf("Subtracção = %d\n", res);
	res = 0;
	
	for (i = 0; i < op2; i++){
		res = mult();
	}
	printf("Multiplicação = %d", res);
	

	return 0;
}
