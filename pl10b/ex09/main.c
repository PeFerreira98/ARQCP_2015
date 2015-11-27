#include <stdio.h>
#include "dinMatrix.h"


int main(){
	int **matrix = NULL;
	int i=0, j=0, y=5, k=8;

	matrix = cria_matriz(y, k);
	
	if (matrix == NULL)
	{
		printf("something went wrong...");
		return -1;
	}

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++) printf("%d ", *(*(matrix+i)+j));
		printf("\n");
	}
	


	return 0;
}



