#include <stdio.h>
#include "soma.h"

char *ptr1;

int main(void){
	
	int i = 0, c = 0;
	char str[] = "abc def ghijk";
	
	ptr1 = str;
	
	for (i = 0; i < 13; i++){
		printf ("%c", str[i]);
	}
	
	c = encripta();
	
	printf("\n");
	for (i = 0; i < 13; i++){
		printf ("%c", str[i]);
	}
	
	printf("\nLetras modificadas: %d\n", c);
	
	return 0;
}
