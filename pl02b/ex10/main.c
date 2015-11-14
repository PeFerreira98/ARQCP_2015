#include <stdio.h>
#include <stdlib.h>
#include "media.h"

int main(){
	int i;
	int vec[5];
	vec[0] = 4;
	for (i = 1; i < 5; i++){
		vec[i] = i;
	}
	
	ex10(vec);
	return 0;	
}

