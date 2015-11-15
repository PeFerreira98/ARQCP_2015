#include <stdio.h>
#include <string.h>
#include "soma.h"
#include "soma2.h"

int main(void){
	int vec1[] = {5, 54, 67, 78, 300};
	int vec2[] = {0, 0, 0, 0, 0};
	int i = 0, test = 0;
	char x = 127; //int signed, para evitar resultados marados, x<128

	
	somabyte2_c (x, vec1, vec2);
	for(i=0; i<(*vec1); i++) printf("%d >> %d\n", *(vec1+i), *(vec2+i)); 

	
	for(i=0; i<(*vec1); i++) *(vec2+i) = 0;
	test = somabyte2_s (x, vec1, vec2);
	printf("%d", test);
	for(i=0; i<(*vec1); i++) printf("\n%d >> %d", *(vec1+i), *(vec2+i)); 
	

	printf("\n");
	return 0;
}
