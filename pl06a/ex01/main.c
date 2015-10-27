#include <stdio.h>
#include "soma.h"

char *ptr1;

int main(void){
	
	int count = 0;
	char str[] = "ab c dd aZeff ";
	
	ptr1 = str;
	
	count = space_count();
	
	printf ("Numero de espaços: %d\n", count);
	
	return 0;
}
