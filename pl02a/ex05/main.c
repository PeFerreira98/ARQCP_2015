#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "media.h"

const int MAX = 200;

int main(){
	char str[MAX];
	int i=0;
	
	printf("Introduza uma frase: ");
	fgets(str, sizeof(str), stdin);
	
	ex05(str, check_str_size(str));
	
	for(i=0; i<check_str_size(str); i++){
		printf("%c", str[i]);
	}
	
	printf("\n");
	return 0;
}
