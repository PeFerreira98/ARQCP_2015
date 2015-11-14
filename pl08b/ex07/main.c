#include <stdio.h>
#include "soma.h"

int main(){
	int vec[] = {0,2,5,-3,-2,1,4}, n = 7, i = 0;
	int *ptrvec;
	
	ptrvec = vec;
	
		
	for (i = 0; i < n; i++){
		printf("%d ", vec[i]);
	}
	
	int count = conta_pares(ptrvec, n);
	
	printf("\nQuantidade de pares: %d\n", count);
	
	return 0;
}
