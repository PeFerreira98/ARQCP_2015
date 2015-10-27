#include <stdio.h>
#include "soma.h"

int *ptrvec;
int num = 5;

int main(void){
	
	int i, soma = 0;
	int vec[] = {2,5,3,4,5};
	
	ptrvec = vec;
	
	for (i = 0; i < 5; i++){
		printf ("%d", vec[i]);
	}
	
	soma = vecsum_par();
	printf("\n%d\n", soma);
	
	
	return 0;
}
