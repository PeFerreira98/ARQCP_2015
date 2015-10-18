#include <stdio.h>
#include "soma.h"

int i=0;

int main(void){
	int h = 0;
	printf("Numero:");
	scanf("%d", &i);
	h = soma();
	
	printf(": %d\n", h);

	return 0;
}
