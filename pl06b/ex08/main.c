#include <stdio.h>
#include "soma.h"

int *ptrvec;
int num = 5;

int main(void){
	
	int i;
	int vec[] = {1,2,3,4,5};
	
	ptrvec = vec;
	
	for (i = 0; i < 5; i++){
		printf ("%d", vec[i]);
	}
	printf("\n");
	vec_inc();
	for (i = 0; i < 5; i++){
		printf ("%d", vec[i]);
	}
	
	return 0;
}
