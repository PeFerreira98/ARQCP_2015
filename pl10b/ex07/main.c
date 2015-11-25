#include <stdio.h>
#include "the_struct.h"
#include "soma.h"


int main(){
	s2 st1;
	
	s2 *s = &st1;
	
	short shr[3] = {1,2,3};
	int x = 27;
	char vec_c[3] = {'x','y','z'};


	insere_dados(s, shr, x, vec_c);
	
	printf("(%hi, %hi, %hi), %d, (%c, %c, %c)\n",
		st1.w[0], st1.w[1], st1.w[2], st1.j, st1.c[0], st1.c[1], st1.c[2]);
	
	
	return 0;
}



