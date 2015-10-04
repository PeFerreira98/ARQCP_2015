#include <stdio.h>
#include <stdlib.h>
#include "media.h"

const int MAX = 11;

int main(){
	short sh[MAX];
	int in[MAX], res=0, i=0;

	fill_vec(sh, MAX);

	for(i=0; i<MAX; i++){
		printf("%hi ", sh[i]);
	}

	res = compactar_shorts(sh, MAX, in);

	printf("\n result = %d \n", res);

	for(i=0; i<res; i++){
		printf("%d ", in[i]);
	}

	return 0;
}
