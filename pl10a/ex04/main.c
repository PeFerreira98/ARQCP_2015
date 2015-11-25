#include <stdio.h>
#include <string.h>
#include "the_struct.h"
#include "insere.h"

int main(void){
	Aluno p2;
	Aluno *p = &p2;
	int i;
	int notas[10] = {12,13,11,14,16,6,19,10,15,11};
	int *ptrnotas = notas;
		
	insere_notas (p, ptrnotas);
	
	for (i = 0; i < 10; i++){
		printf("%d ", (*p).nota[i]);
	}
		
	return 0;
}


