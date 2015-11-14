#include <stdio.h>
#include "soma.h"

char *ptr1, *ptr2;

int main(void){
	char str1[20]= "Exemblo de fvrabe";
	char str2[20];
	int i;
	
	ptr1 = str1;
	ptr2 = str2;

	i = str_copy_p();

	for(i=0; i<20; i++){
		printf("%c", str1[i]);
	}

	printf("\n");

	for(i=0; i<20; i++){
		printf("%c", str2[i]);
	}

	printf("\n");


	return 0;
}
