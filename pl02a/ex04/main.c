#include <stdio.h>

int ex4(char *end);

int main(){
	
	char string[255];
	char *a;
	a = string;
	
	string[0] = 'a';
	string[1] = 'B';
	string[2] = 'K';
	string[3] = 'l';
	string[4] = 'x';
	
	ex4(a);
	
}

int ex4(char *end){
	int i;
	for (i = 0; i < 5; i++){	
		if(*end>64 && *end<91){
			*end = *end +32;
			printf("%c", *end);
		}else{
			printf("%c", *end);	
		}
		end++;
	}
	
	
}
