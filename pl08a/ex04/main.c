#include <stdio.h>
#include "soma.h"

int main(){
	int *ptrmaior;
	int i = 0;
	ptrmaior = &i;
	
	int soma = soma_e_maior(-2, 5, ptrmaior);
	printf ("%d\n", soma);
	printf ("maior: %d\n", *ptrmaior);
	return 0;
}
