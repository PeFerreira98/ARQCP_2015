#include <stdio.h>
#include "soma.h"
#include "soma2.h"

int main(){
	int res=0, data1=102565852, data2=101451740; //data 1= 06-29-2012 data2= 06-12-2012
	
	res = menor_data_c(data1, data2);
	printf("res = %d\n", res);
	
	res = menor_data_s(data1, data2);
	printf("res = %d\n", res);
	
	return 0;
}
