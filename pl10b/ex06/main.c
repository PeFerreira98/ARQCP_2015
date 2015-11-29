#include <stdio.h>
#include "the_struct.h"
#include "soma.h"


int main(){
	s1 st1;
	s1 *s = &st1;
	
	int i = 23;
	char c = 'f';
	int j = 34;
	char d = 'd';

	insere_dados(s, i, c, j, d);
	
	printf("st1 >> %d, %c, %d, %c\n", st1.i, st1.c, st1.j, st1.d);
	
	return 0;
}



