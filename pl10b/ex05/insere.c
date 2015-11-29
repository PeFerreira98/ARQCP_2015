#include <stdlib.h>
#include <string.h>
#include "the_struct.h"
	
int procura_maiores (Aluno *a, int minima, int *maiores){

	int flag = 0, count = 0, i;
	
	for (i = 0; i < 10; i++){
		if((*a).nota[i] > minima){
			if(flag==0){
				*maiores = (*a).nota[i];
				flag = 2;
				count++;
			}else{
				*maiores = (*a).nota[i];	
				count++;
				flag++;
			}
			maiores = (int*) realloc (maiores, flag*sizeof(int));
		}
	}
	free(maiores);
	return count;
	
}

