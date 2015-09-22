#include <stdio.h>

int ex3(int *end, int num);

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
	
}

int ex3(int * end, int num){
	int i;
	
	for (i = 0; i < num; i++){
		
		if(*end%2 == 0) printf("%d ; ", *end);
		
		end++;
		
	}
	
}

