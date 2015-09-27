#include <stdio.h>
#include "media.h"

int main(){
	
	char string[255];

/*
	string[0] = 'a';
	string[1] = 'B';
	string[2] = 'K';
	string[3] = 'l';
	string[4] = 'x';
*/

	printf("Introduza uma frase: ");
	fgets(string, sizeof(string), stdin);
	
	ex4(string);
	return 0;	
}


