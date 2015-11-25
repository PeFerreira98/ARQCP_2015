#include <stdio.h>
#include "the_struct.h"
#include "insere.h"

int main(void){
	Aluno al[5];
	
	int numero = 1;
	int idade = 19;
	int i = 0;
	char nome[80] = "Quim";
	char morada[120] = "Rua 123";
	char *ptrnome = nome;
	char *ptrmorada = morada;	
	
	for (i = 0; i < 5; i++)
	{
		insere_dados ((al+i), numero, ptrnome, ptrmorada, idade);
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("nr = %d\n", (*(al+i)).numero);
		printf("id = %d\n", (*(al+i)).idade);
		printf("nm = %s\n", (*(al+i)).nome);
		printf("mo = %s\n", (*(al+i)).morada);
		printf("\n");
	}
	
	return 0;
}


