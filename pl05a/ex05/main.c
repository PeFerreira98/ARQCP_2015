#include <stdio.h>
#include "area.h"

int alt=0, comp=0, res = 0;

int main(void){
	int i;
	printf("Valor altura:");
	scanf("%d", &alt);
	printf("Valor comprimento:");
	scanf("%d", &comp);
	
	for ( i = 0; i < comp; i++){
		res = get_area();
	}
	
	printf("area = %d\n", res);

	return 0;
}
