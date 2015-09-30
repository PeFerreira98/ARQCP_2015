#include "comparar.h"

 int contabilizar(int *vec){
	int c = 0;	
	int i;
	
	for(i = 0; i < 98; i++){
		c = c + comparar(vec+i);
		
	}	
	
	return c;
	
}
