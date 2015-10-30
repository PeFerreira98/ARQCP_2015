#include <stdio.h>
#include <string.h>
#include "soma.h"

long int num;
long int *ptrvec1, *ptrvec2, *ptrvec3;

int main(void){
	long int vec1[10] = {0,2,4,3,5,10,7,1,65539,8};
	long int vec2[10] = {0,0,0,0,0,0,7,0,65539,0};
	long int vec3[10] = {0,0,0,0,0,0,0,0,0,0};
	int res = 0, i = 0;	

	ptrvec1 = vec1;
	ptrvec2 = vec2;
	ptrvec3 = vec3;
	
	num = 10;

	res = soma();

	printf("%d\n", res);
	
	for(i=0; i<num; i++){
		printf("%ld ", vec1[i]);
	}
	printf("\n");
	for(i=0; i<num; i++){
		printf("%ld ", vec2[i]);
	}
	printf("\n");
	//for(i=0; i<num; i++){
	for(i=0; i<res; i++){
		printf("%ld ", vec3[i]);
	}
	printf("\n");

	return 0;
}
