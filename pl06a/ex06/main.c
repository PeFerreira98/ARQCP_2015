#include <stdio.h>
#include <string.h>
#include "soma.h"

char *ptr1, *ptr2, *ptr3;

int main(void){
	char str1[40]= "Life is made of Examples";
	char str2[40]= ", choose to Be one!";
	char str3[80];
	int i;
	
	ptr1 = str1;
	ptr2 = str2;
	ptr3 = str3;

	i = soma();
	
	for(i=0; i<strlen(str1); i++){
		printf("%c", str1[i]);
	}
	printf("\n");
	
	for(i=0; i<strlen(str2); i++){
		printf("%c", str2[i]);
	}
	printf("\n");

	for(i=0; i<strlen(str3); i++){
		printf("%c", str3[i]);
	}
	printf("\n");

	return 0;
}
