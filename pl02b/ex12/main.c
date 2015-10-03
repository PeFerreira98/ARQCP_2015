#include <stdio.h>
#include <stdlib.h>
#include "media.h"

int main(){
	int i ;
	char str[255] = "O ma va d CI";
	/*str[0] = 'O';
	str[1] = ' ';str[2] = 'm';str[3] = 'a'; str[4] = ' ';
	str[5] = 'v';str[6] = 'a';str[7] = ' ';str[8] = 'd';
	str[9] = ' ';str[10] = 'C';str[11] = 'I';*/
	
	ex12(str);
	
	for ( i = 0; i<12;i++){
		printf("%c",str[i]);
	}
	
	return 0;
}

