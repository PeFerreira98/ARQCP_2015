#include <stdio.h>
#include <limits.h>
#include <math.h>

int str_size(char *str){
	int size=0;

	while(*(str + size) != 0) size++;

	size--;

	return size;
}

void high_to_low(char *str, int s){
	int i=0;
	
	for(i=0; i<s; i++){
		if('A' <= *(str+i) && *(str+i) <= 'Z'){
			 *(str+i) = *(str+i) + ('a'-'A');
		}
	}
}

int ex11(char *str){
	int res=1, size=0, i=0;
	
	size = str_size(str);
	
	high_to_low(str, size);

	for(i=0; i<size; i++){
		if( *(str+i) != *(str+(size-1-i)) ){
			res = 0;
			break;
		}
	}
	
	return res;
}





