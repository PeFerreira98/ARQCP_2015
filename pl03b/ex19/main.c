#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 100;

int main(){
	char str[MAX], palavra[MAX];
	int res;
	int i=0, index_palavras[MAX];
	
	printf("Introduza uma frase: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Introduza uma palavra: ");
	fgets(palavra, sizeof(palavra), stdin);
	
//	res = pesquisa_palavra(str, palavra, 7);

//	printf("result = %d\n", res);


	

	res = pesquisa_ocorrencias_palavra(str, palavra, index_palavras);

	printf("result = %d\n", res);

	for(i=0; i<res; i++){
		printf("str[%d] = %c \n", index_palavras[i], str[index_palavras[i]]);
	}

	return 0;
}
