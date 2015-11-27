#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeSpacesAllMaj(char *str){
	int size = strlen(str), i=0, j=0;
	
	for (i = 0; i < size; i++){
		if(*(str+i) == ' '){
			for (j = i; j < size; j++){
				*(str+j) = *(str+j+1);
			}
		}
		
		if('a' <= *(str+i) && *(str+i) <= 'z'){
			*(str+i) -= 32;
		}
	}
	
}

void strCopy(char *strSource, char* strDest, int size){
	int i=0;
	for (i = 0; i < size; i++)
	{
		*(strDest+i) = *(strSource+i);
	}
}

char* dynamicString(char *str){
	int size;
	char *str2, *strtmp;
	
	removeSpacesAllMaj(str);
	
	size = strlen(str);
	
	strtmp = (char*) malloc(size * sizeof(char));
	
	if (strtmp == NULL) return NULL;
	
	str2 = strtmp;
	strtmp = NULL;
	
	strCopy(str, str2, size);
	
	return str2;	
}
