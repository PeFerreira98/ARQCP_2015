#include <stdio.h>
#include <string.h>
#include "soma.h"

int main(void){
	int res = 0, n = 0;	
	
	printf("insira n: ");
	scanf("%d", &n);

	res = somatorio_n(n);

	printf("res  = %d\n", res);
	
	return 0;
}
