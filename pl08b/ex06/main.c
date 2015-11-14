#include <stdio.h>
#include <string.h>
#include "soma.h"

int main(void){
	char a[] = "eosndf";
	char b[] = "eosndf";
	int res = 10;	
	
	res = testa_iguais(a, b);

	printf("res  = %d\n", res);
	
	return 0;
}
