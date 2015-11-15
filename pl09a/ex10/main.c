#include <stdio.h>
#include "soma.h"
#include "soma2.h"

int main(){
<<<<<<< HEAD
	int res=0, x = 6;
=======
	int res=0, x = 15;
>>>>>>> a81012f79a19277b0f811594fc552f756d81f26f
	
	res = conta_bits_um_s(x);
	
	printf("numero de bits 1= %d\n", res);
	
	res = conta_bits_um_c(x);
	
	printf("numero de bits 1 = %d\n", res);
	
	return 0;
}
