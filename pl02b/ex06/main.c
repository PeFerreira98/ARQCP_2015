#include <stdio.h>

void potencia_por_referencia(int *x, int y);

int main(){
	
	int a = 2;
	
	int *ap;
	
	
	
	return 0;	
}

void potencia_por_referencia(int *x, int y){
	
	int i, p=1;
	for(i=0; i<y;i++)
	{ 
		p=p*(*x);
	}
	*x = p;
}
