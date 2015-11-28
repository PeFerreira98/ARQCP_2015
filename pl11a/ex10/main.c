#include <stdio.h>
#include "dinMatrix.h"
#include "searchMatrix.h"

int main(){
	int **matrix = NULL, result = -1;
	int i=0, j=0, c=0;
	int y=5, k=8;
	int num = 38;

	matrix = cria_matriz(y, k);
	
	if (matrix == NULL)
	{
		printf("something went wrong...");
		return -1;
	}

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++){
			*(*(matrix+i)+j) = c++;
			printf("%d ", *(*(matrix+i)+j));
		}
		printf("\n");
	}
	
	result = procura_matriz(matrix, num, y, k);
	
	printf("%d existe na matriz? %d \n", num, result);

	return 0;
}



