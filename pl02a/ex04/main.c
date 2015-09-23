#include <stdio.h>

int ex4(int *end);

int main(){
	
	char string[255];
	string[0] = "a";
	string[1] = "B";
	string[2] = "K";
	string[3] = "l";
	string[4] = "x";
	
	
	int *a;
	a = string;
	
	ex4(a);
	
}

int ex4(int *end){
	
	for (i = 0; i < 5; i++){
		
		if(*end>64 && *end<91){
			*end = *end +32;
			printf("%d", *end);
		}
		
		end++;
		
	}
	
	
}
