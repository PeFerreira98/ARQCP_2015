#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 100;

int main(){
	char str[MAX];
	int res = 0;
	
	printf("Introduza uma frase: ");
	fgets(str, sizeof(str), stdin);
	
	res = ex11(str);
	
	printf("result = %d \n", res);

	return 0;
}
