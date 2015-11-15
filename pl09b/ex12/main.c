#include <stdio.h>
#include <string.h>
#include "soma.h"
#include "soma2.h"

int main(void){
	int *vec;
	int value = 15, pos = 4, res = 0;
	//Tendo em conta que a primeira posição é 0
	vec = &value;
	
	res = activa_bit_c(vec, pos);
	printf("res = %d, colocando 1b na pos %d, o nr apresenta o valor %d\n", res, pos, *vec);

	res = 0;
	res = activa_bit_s(vec, pos);
	printf("res = %d, colocando 1b na pos %d, o nr apresenta o valor %d\n", res, pos, *vec);

	return 0;
}
