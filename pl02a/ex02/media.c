#include <stdio.h>

void lerNum(int vec[]){
	int *a;
	int x, i;
	a = &vec[0];
	
	for (i = 0; i<=3; i++){
		printf("Número: ");
		scanf("%d", &x);
		*a = x;
		a++;
	}
	
	//verificação do vector
	for (i = 0; i<=3; i++){
		printf("%d", vec[i]);
	}
	
}
