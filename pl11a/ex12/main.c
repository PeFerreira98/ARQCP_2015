#include <stdio.h>
#include "dinMatrix.h"
#include "soma.h"


int main(){
	int **a = NULL;
	int **b = NULL;
	int **resultado = NULL;
	
	int i=0, j=0, y=5, k=5,c =0;

	a = cria_matriz(y, k);
	b = cria_matriz(y, k);
	resultado = cria_matriz(y, k);
	
	if (a == NULL || b == NULL || resultado == NULL)
	{
		printf("something went wrong...");
		return -1;
	}
	
	//Preenche as matrizes
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++){
		 *(*(a+i)+j) = c++;
		 *(*(b+i)+j) = *(*(a+i)+j);
	 }
	}
	
	soma_matrizes(a,b,resultado,y,k);
	
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++) printf("%d ", *(*(resultado+i)+j));
		printf("\n");
	}	


	return 0;
}



