#include <stdio.h>
#include <string.h>
#include "soma.h"

long int num, aux;
long int *ptrvec1, *ptrvec2, *ptrvec3;

int main(void){
	long int vec1[10] = {65340,2,4,3,5,10,7,1,65551,8};
	long int vec2[10] = {2,20,0,4,65340,69,7,98,65551,88};
	long int vec3[10] = {0,0,0,0,0,0,0,0,0,0};
	int res = 0, i = 0;	

	ptrvec1 = vec1;
	ptrvec2 = vec2;
	ptrvec3 = vec3;
	
	num = 10;
	aux = num;

	res = comuns();

	printf("res  = %d\n", res);
	
	printf("vec1 = ");
	for(i=0; i<num; i++){
		printf("%ld ", vec1[i]);
	}
	printf("\n");
	
	printf("vec2 = ");
	for(i=0; i<num; i++){
		printf("%ld ", vec2[i]);
	}
	printf("\n");
	
	printf("vec3 = ");
	for(i=0; i<res; i++){
		printf("%ld ", vec3[i]);
	}
	printf("\n");

	return 0;
}
