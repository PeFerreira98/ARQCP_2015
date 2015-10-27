#include <stdio.h>
#include "soma.h"

char *ptr1;

int main(void){
	
	int i = 0, c = 0;
	char str[] = "abc def gh";
	
	ptr1 = str;
	for (i = 0; i < 11; i++){
		printf ("%c", str[i]);
	}
	printf("\n");
	
	c = encripta();
	
	for (i = 0; i < 11; i++){
		printf ("%c", str[i]);
	}
	
	printf("\nLetras modificadas: %d\n", c);
	
	return 0;
}
