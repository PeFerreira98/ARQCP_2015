#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 100;

int main(){
	char str1[MAX], str2[MAX], *res;
	
	printf("Introduza uma frase grande: ");
	fgets(str2, sizeof(str2), stdin);

	printf("Introduza uma frase pequena: ");
	fgets(str1, sizeof(str1), stdin);

	res = onde_existe(str1, str2);
	
	if(res != NULL) printf("%p = %c\n", res, *res);
	else printf("NULL pointer\n");	

	return 0;
}
