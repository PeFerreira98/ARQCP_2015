#include <stdio.h>
#include <limits.h>

int ex10(int *a){
	
	int c;
	int i;
	int soma = 0;
	c = *a;
	*a++;
	for (i = 1; i < c+1; i++){
		if (i%2==0){
			soma = soma + *a;
		}
		*a++;
	}
	printf("%d \n", soma);
	return c;
	
}
