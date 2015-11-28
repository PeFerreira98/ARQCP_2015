#include <stdio.h>
#include <stdlib.h>

int procura_matriz(int **m, int numero, int y, int k){
	int i=0, j=0;
	
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (*(*(m+i)+j) == numero) return 1;
		}
		
	}
	
	return 0;
}



