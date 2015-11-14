#include <stdio.h>

void ex4(char *end){

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