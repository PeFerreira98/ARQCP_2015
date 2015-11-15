#include <stdio.h>
#include "soma.h"
#include "soma2.h"

int main(){
	int res=0, a = 91, b = 102, pos = 3;
	
	res = junta_bits_c(a, b, pos);
	printf("result = %d\n", res);
	
	res = 0;
	res = junta_bits_s(a, b, pos);
	printf("result = %d\n", res);
	
	return 0;
}
