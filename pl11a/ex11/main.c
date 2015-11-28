#include <stdio.h>
#include <string.h>
#include "pares.h"
#include "dinMatrix.h"

int main(void){
		
	int **matrix = NULL;
	int i=0, j=0, y=5, k=5, c=0, count;

	matrix = cria_matriz(y, k);
	
	if (matrix == NULL)
	{
		printf("something went wrong...");
		return -1;
	}
	
	 //preencher a matriz
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++) *(*(matrix+i)+j) = c++;
	}
	//Imprimir a matriz
	for (i = 0; i < y; i++) 
	{
		for (j = 0; j < k; j++) printf("%d ", *(*(matrix+i)+j));
		printf("\n");
	}
	
	count = conta_pares(matrix,y,k);
	printf("pares = %d ", count);
	
	return 0;
}


