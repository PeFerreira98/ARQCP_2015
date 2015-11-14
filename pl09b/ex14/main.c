#include <stdio.h>
#include "soma.h"

int main(){
	int res=0, a = 91, b = 102, pos = 3;
	
	res = junta_bits(a, b, pos);
	
	printf("%d\n", res);
	
	return 0;
}
