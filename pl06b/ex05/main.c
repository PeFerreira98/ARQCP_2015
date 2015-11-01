#include <stdio.h>
#include <string.h>
#include "soma.h"
#include "soma1.h"

char *ptr1;

int main(void){
	
	int i = 0, c=0;
	char str[] = "abc def ghij";
	
	ptr1 = str;
	for (i = 0; i < strlen(str); i++){
		printf ("%c", str[i]);
	}
	printf("\n\n");
	
	c = encripta();
	
	for (i = 0; i < strlen(str); i++){
		printf ("%c", str[i]);
	}
	printf("\nLetras modificadas: %d\n\n", c);
	c=0;
	
	c = decifra();
	
	for (i = 0; i < strlen(str); i++){
		printf ("%c", str[i]);
	}
	printf("\nLetras modificadas: %d\n", c);
	
	return 0;
}
