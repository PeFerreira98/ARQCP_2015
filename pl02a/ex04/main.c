#include <stdio.h>

int ex4(char *end);

int main(){
	
	char string[255];
	
	string[0] = 'a';
	string[1] = 'B';
	string[2] = 'K';
	string[3] = 'l';
	string[4] = 'x';
	
	ex4(string);
	return 0;	
}

int ex4(char *end){
	int i;
	
	while (*end != 0){
		
		if(*end>64 && *end<91){
			*end = *end +32;
			printf("%c", *end);
		}else{
			printf("%c", *end);	
		}
		
		end++;
	}
}
