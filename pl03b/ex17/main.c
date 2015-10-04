#include <stdio.h>
#include <stdlib.h>
#include "media.h"

int main(){
	int i;
	
	int vec1[5];
	for (i = 0; i < 5; i++){
		vec1[i] = rand() %15;
	}
	
	int vec2[5];
	for (i = 0; i < 5; i++){
		vec2[i] = rand() %15;
	}
	
	for (i = 0; i < 5; i++){
		printf("%d \n", vec1[i]);
	}
	printf("-----\n");
	for (i = 0; i < 5; i++){
		printf("%d \n", vec2[i]);
	}
	
	printf("\nALTERADO \n");
	swap(vec1, vec2, 5);
	
	for (i = 0; i < 5; i++){
		printf("%d \n", vec1[i]);
	}
	printf("-----\n");
	for (i = 0; i < 5; i++){
		printf("%d \n", vec2[i]);
	}
	
	return 0;
}
