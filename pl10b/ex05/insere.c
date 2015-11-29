#include <stdlib.h>
#include <string.h>
#include "the_struct.h"
	
int procura_maiores (Aluno *a, int minima, int *maiores){

	int count = 0, i;
	
	for (i = 0; i < 10; i++){
		if((*a).nota[i] > minima){
			if(count==0){
				*maiores = (*a).nota[i];
				count++;
			}else{
				maiores = (int*) realloc (maiores, (count+1)*sizeof(int));
				*(maiores + count) = (*a).nota[i];	
				count++;
			}
		}
	}
	
	return count;
	
}

