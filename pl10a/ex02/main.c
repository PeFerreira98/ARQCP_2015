#include <stdio.h>
#include "the_struct.h"
#include "insere.h"

int main(void){
	Aluno a1;
	Aluno *p = &a1;
	
	int numero = 1;
	int idade = 19;
	char nome[80] = "Quim";
	char morada[120] = "Rua 123";
	char *ptrnome = nome;
	char *ptrmorada = morada;	
	
	insere_dados (p, numero, ptrnome, ptrmorada, idade);
	
	printf("nr = %d\n", (*p).numero);
	printf("id = %d\n", (*p).idade);
	printf("nm = %s\n", (*p).nome);
	printf("mo = %s\n", (*p).morada);
	
	return 0;
}


