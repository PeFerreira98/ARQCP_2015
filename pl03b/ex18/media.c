#include <stdlib.h>
#include <stdio.h>

void fill_vec(short *s, int siz){
	int i=0;
	
	for(i=0; i<siz; i++){
		*(s+i) = rand() % 999;
	}
}

int compactar_shorts(short* shorts, int n_shorts, int* inteiros){
	int i=0, j=0;
	
	if(n_shorts % 2 == 0){
		for(i=0; i<n_shorts; i=i+2){
			*(inteiros+j) = (int) *(shorts+i) + (int) *(shorts+(i+1));				
			j++;
		}
	}else{
		for(i=0; i<n_shorts-1; i=i+2){
			*(inteiros+j) = (int) *(shorts+i) + (int) *(shorts+(i+1)); 	
			j++;
		}
		*(inteiros+j) = (int) *(shorts+i);
		j++;		
	}


	return j;
}






















