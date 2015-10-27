#include <stdio.h>
#include <string.h>
#include "soma.h"

short int *ptrvec, num, x;

int main(void){
	short int vec1[10] = {0,2,4,3,5,10,7,1,6,8};
	short int *res;	

	ptrvec = vec1;
	num = 10;
	x = 10;

	res = soma();

	printf("%p = %s\n", res, *res);

	return 0;
}
