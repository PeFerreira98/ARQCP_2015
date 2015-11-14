#include <stdio.h>
#include <string.h>
#include "soma.h"

short int num, x;
short int *ptrvec;

int main(void){
	short int vec1[10] = {0,2,4,3,5,10,7,1,6,8};
	int *res;	

	ptrvec = vec1;
	num = 10;
	x = 10;

	res = vec_search();

	if(res != 0)	printf("%p = %hd\n", res, *res);
	else printf("res = 0\n");

	return 0;
}
