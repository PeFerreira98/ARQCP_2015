#include <stdio.h>
#include "soma.h"

int i=0, j = 0;

int main(void){
	int h = 0;
	printf("Numero:");
	scanf("%d", &i);
	printf("Numero:");
	scanf("%d", &j);
	
	h = soma();
	if (h == 1){
		printf("%d é multiplo de %d\n", i, j);
	}
	if (h == 0){
		printf("%d não é multiplo de %d\n", i, j);
	}
	

	return 0;
}
