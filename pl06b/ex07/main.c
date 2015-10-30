#include <stdio.h>
#include <string.h>
#include "soma.h"

int *ptrvec;
int num;

int main(void){
	int vec1[10] = {0,1,2,3,4,5,6,7,8,9};
	int res = 0, i = 0;	

	ptrvec = vec1;
	num = 10;

	res = soma();

	for(i=0; i<10; i++){
		printf("%d + ", vec1[i]);
	}

	printf(" = %d\n", res);

	return 0;
}
