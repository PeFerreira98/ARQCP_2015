#include <stdio.h>
#include <string.h>
#include "the_struct.h"
#include "insere.h"

int main(void){
	Aluno p2;
	Aluno *p = &p2;
	
	char morada[120] = "Rua 123";
	char nova_morada[120] = "Rua 321";
	char *ptrmorada = nova_morada;
	
	strcpy((*p).morada, morada);	
	
	altera_morada(p, ptrmorada);
	
	printf("mo = %s\n", (*p).morada);
	
	return 0;
}


