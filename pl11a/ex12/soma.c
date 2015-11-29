#include <stdio.h>

void soma_matrizes (int **a, int **b, int **resultado, int y, int k){
	
	int i, j;
	
	for (i = 0; i < y; i++)
		for (j = 0; j < k; j++)
		 *(*(resultado+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
	
}
