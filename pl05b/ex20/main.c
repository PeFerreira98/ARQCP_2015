#include <stdio.h>
#include "soma.h"

int i=0, j = 0;

int main(void){
	int h = 0;
	
	printf("Valor de i: ");
	scanf("%d", &i);
	
	printf("Valor de i: ");
	scanf("%d", &j);
	h = f();
	printf("f: %d\n", h);
	h = f2();
	printf("f: %d\n", h);
	h = f3();
	printf("f: %d\n", h);
	h = f4();
	printf("f: %d\n", h);

	return 0;
}
