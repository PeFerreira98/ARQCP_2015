#include <string.h>
#include "the_struct.h"
	
void insere_dados (Aluno *p, int numero, char *nome, char *morada, int idade){
	
	(*p).numero = numero;
	(*p).idade = idade;
	strcpy((*p).nome, nome);
	strcpy((*p).morada, morada);
}

