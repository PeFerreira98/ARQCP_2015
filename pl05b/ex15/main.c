#include <stdio.h>
#include "soma.h"

int temp=0, temp_p = 0, res = 0;

int main(void){
	printf("Temperatura actual:");
	scanf("%d", &temp);
	printf("Temperatura pretendida:");
	scanf("%d", &temp_p);


	res = soma();
	
	printf("temperatura pretendida em %d segundos...", res);

	return 0;
}
