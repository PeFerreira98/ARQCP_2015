#include <stdio.h>
#include <limits.h>

int main(){
	char a;
	int b;
	long int c;
	float d;
	double e;
	
	printf("\nTamanho de um char = %d bits", sizeof(a) * CHAR_BIT);
	printf("\nTamanho de um int = %d bits", sizeof(b) * CHAR_BIT);
	printf("\nTamanho de um long int = %d bits", sizeof(c) * CHAR_BIT);
	printf("\nTamanho de um float = %d bits", sizeof(d) * CHAR_BIT);
	printf("\nTamanho de um double = %d bits", sizeof(e) * CHAR_BIT);
	printf("\n");
	
	//Different systems may have different sizes for certain data_types. To avoid mistakes we use >> CHAR_BIT 
	
	return 0;
}
