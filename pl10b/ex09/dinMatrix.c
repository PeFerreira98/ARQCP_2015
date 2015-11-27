#include <stdio.h>
#include <stdlib.h>

int **cria_matriz(int y, int k){
	int **mainMatrix = NULL;
	int **matrixTmp1 = NULL;
	int *matrixTmp2 = NULL;
	int i=0;
	
	matrixTmp1 = (int**) calloc (y, sizeof(int*));
	if(matrixTmp1 == NULL) return NULL;
	mainMatrix = matrixTmp1;

	for (i = 0; i < y; i++)
	{
		matrixTmp2 = (int*) calloc (k, sizeof(int));
		if(matrixTmp2 == NULL) return NULL;
		*(mainMatrix+i) = matrixTmp2;
	}

	return mainMatrix;
}



