#include <stdio.h>
#include "soma.h"

long int *ptrvec;
long int num = 5;

int main(){
	
	int i, count;
	long int vec[] = {2,15,3,14,5};
	
	ptrvec = vec;
	
	for (i = 0; i < 5; i++){
		printf ("%ld ", vec[i]);
	}
	
	count = vec_pos();
	printf("\n%d\n", count);
	
	
	return 0;
}
