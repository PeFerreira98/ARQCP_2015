#include <stdio.h>
#include <stdlib.h>
#include "the_struct.h"
#include "insere.h"

int main(void){
	Aluno p2;
	Aluno *p = &p2;
		
	int count,i, minima = 10;
	
	int *maiores = NULL;
	maiores = (int*) malloc(1*sizeof(int));
	int notas[10] = {12,13,11,14,16,6,19,10,15,11};
	
	for (i = 0; i < 10; i++){
		(*p).nota[i] = notas[i];
	}
	
	count = procura_maiores(p, minima, maiores);
	printf("Notas superiores a %d: %d -> ", minima, count);
	
	for (i = 0; i < count; i++) printf ("%d ", *(maiores + i));
	
	free(maiores);
	
	return 0;
}


