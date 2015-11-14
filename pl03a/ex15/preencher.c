#include <stdlib.h>


void preencher (int *vec){
	int i;
	
	for(i = 0; i < 100; i++){
		*(vec+i) = rand() % 20;
	}
}
