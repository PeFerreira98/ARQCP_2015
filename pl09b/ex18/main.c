#include <stdio.h>
#include "soma.h"
#include "soma2.h"

int main(){
	char vec[] = "Phrase Example";
	//char vec[] = "s";
	int x = 131072; //3byte = 2
	int res = 0;
	
	res = soma_multiplos_x_c (vec, x);

	printf("\nresult in c = %d\n", res);
	
	res = 0;
	
	res = soma_multiplos_x_s (vec, x);
	
	printf("\nresult in s = %d\n", res);
	
	return 0;
}



