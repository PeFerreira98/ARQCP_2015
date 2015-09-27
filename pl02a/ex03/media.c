#include <stdio.h>

void ex3(int * end, int num){
	int i;
	
	for (i = 0; i < num; i++){
		if(*end%2 == 0) printf("%d ; ", *end);
		end++;
	}
}
