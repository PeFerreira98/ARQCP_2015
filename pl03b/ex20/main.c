#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 100;

int main(){
	char str[MAX];
	int res, i=0;
	int inicio_palavra[MAX], fim_palavra[MAX];
	
	printf("Introduza uma frase: ");
	fgets(str, sizeof(str), stdin);
	
	res = palavras_vogais_crescentes(str, inicio_palavra, fim_palavra);

	printf("result = %d\n", res);

	for(i=0; i<res; i++){
		printf("str[%d] a str[%d] \n", inicio_palavra[i], fim_palavra[i]);
	}
	
	return 0;
}
