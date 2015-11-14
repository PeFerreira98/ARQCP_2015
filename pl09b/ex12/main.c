#include <stdio.h>
#include <string.h>
#include "soma.h"

int main(void){
	int *vec;
	int pos = 3, b = 6;
	vec = &b;
	int res;
	res = activa_bit(vec, pos);

	printf("o numero %d tem o %dº bit a %d\n",*vec, pos, res);
	
	return 0;
}
