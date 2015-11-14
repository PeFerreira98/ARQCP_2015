#include <stdio.h>
#include "soma.h"

int main(){
	int *p;
	int b, c, d, res;
	
	b= 3; c=2; d = 4;
	p = &d;
	
	res = calc(p, b, c);
	
	printf("res = %d\n", res);
	
	return 0;
}
