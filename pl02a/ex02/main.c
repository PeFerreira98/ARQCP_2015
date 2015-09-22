#include <stdio.h>

int lerNum(int vec[]);

int main(){
	int vec[20];
	
	lerNum(vec);
	
	return 0;
}

int lerNum(int vec[]){
	int *a;
	int x, i;
	a = &vec[0];
	
	for (i = 0; i<=19; i++){
		printf("Número: ");
		scanf("%d", &x);
		*a = x;
		a++;
	}
	
	//verificação do vector.
	for (i = 0; i<=19; i++){
		printf("%d ; ", vec[i]);
	}
	
}

