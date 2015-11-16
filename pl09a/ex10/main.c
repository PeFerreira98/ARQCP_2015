#include <stdio.h>
#include "soma.h"
#include "soma2.h"

int main(){
	int res=0, x = 6;
	
	res = conta_bits_um_s(x);
	printf("numero de bits 1 = %d\n", res);
	
	res = conta_bits_um_c(x);
	printf("numero de bits 1 = %d\n", res);
	
	return 0;
}
