#include <stdio.h>
#include "soma.h"

int main(){
	int *v1;
	int v2 = 3;
	int i = -2;
	v1 = &i;
	
	int soma = incrementa_e_quadrado(v1, v2);
	printf ("Quadrado de %d = %d\n", v2, soma);
	printf ("O valor que foi incrementado de %d\n", *v1);
	return 0;
}
