#include <stdio.h>
#include <limits.h>
#include <math.h>

void ex07(int *x, int size){
	int i=0, j=0, swap=0;

	//using bubble-sort algorithm

	for(i=0; i < size-1; i++){
		for(j=0; j < size-i-1; j++){
			if(x[j] > x[j+1]){
				swap = x[j];
				x[j] = x[j+1];
				x[j+1] = swap;
			}
		}
	}
}





