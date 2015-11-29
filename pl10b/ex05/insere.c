#include <string.h>
#include "the_struct.h"
	
int *procura_maiores (Aluno *a, int minima, int *maiores){

	int flag = 0;
	int i;
	
	for (i = 0; i < 10; i++){
		if((*p).nota[i] > minima){
			if(flag==0){
				*maiores = (*p).nota[i];
				flag = 2;
			}else{
				maiores = realloc (*maiores, flag);
				*maiores = (*p).nota[i];	
				flag++;
			}
			maiores++;
		}
	}
	
}

