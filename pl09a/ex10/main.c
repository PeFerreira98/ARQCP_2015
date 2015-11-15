#include <stdio.h>
#include "soma.h"

int main(){
	int res=0, x = 15;
	
	res = conta_bits_um(x);
	
	printf("numero de bits 1 = %d\n", res);
	
	return 0;
}
