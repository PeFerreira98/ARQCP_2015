#include <stdio.h>
#include <string.h>
#include "dinString.h"


int main(){
	char str[] = "This Is a String", *str2;
	int size, i;

	size = strlen(str);
	
	for (i = 0; i < size; i++) printf("%c", *(str+i));
	printf("\n");

	str2 = dynamicString(str);

	size = strlen(str2);

	for (i = 0; i < size; i++) printf("%c", *(str2+i));
	printf("\n");

	return 0;
}



