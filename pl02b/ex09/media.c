#include <stdio.h>
#include <limits.h>
#include <math.h>

void copy_vec(float *x, float *y, int size){
	int i=0;
	
	for(i=0; i < size; i++){
		y[i] = x[i];
	}
}

void sorting_vec(float *x, int size){
	int i=0, j=0;
	float swap=0;

	//using bubble-sort algorithm

	for(i=0; i < size-1; i++){
		for(j=0; j < size-i-1; j++){
			if(*(x+j) > *(x+j+1)){
				swap = *(x+j);
				*(x+j) = *(x+j+1);
				*(x+j+1) = swap;
			}
		}
	}
}

int ex09(float *x, float *result, int size){
	int count=0, i=0;
	float copy[size];
	
	copy_vec(x, copy, size);

	sorting_vec(copy, size);

	result[0] = copy[0];

	for(i=0; i < size; i++){
		if(copy[i] != result[count]){
			result[count+1] = copy[i];
			count++;
		}
	}
	
	return count;
}





