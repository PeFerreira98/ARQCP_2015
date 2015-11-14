#include <stdio.h>
#include "soma.h"

int n=0, res=1;

int main(void){
	int r = 0;
	printf("Valor n:");
	scanf("%d", &n);

	r = soma();
	
	printf("soma = %d", r);

	return 0;
}
