#include <stdio.h>
#include "contabilizar.h"
#include "comparar.h"
#include "preencher.h"

int main(){
	
	int vec[100];
	preencher(vec);
	
	printf("Numero de ocorrências: %d \n", contabilizar(vec));
	
	return 0;
	
}
