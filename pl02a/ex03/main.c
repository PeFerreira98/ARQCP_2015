#include <stdio.h>
#include "media.h"

int main(){
	int vec[10];
	int *a;
	a = vec;
	
	vec[0] = 0;
	vec[1] = 1;
	vec[2] = 2;
	vec[3] = 3;
	vec[4] = 4;
	
	ex3(a, 5);

	return 0;
}

