#include <stdio.h>
#include <string.h>

int soma_multiplos_x_c (char *vec, int x){
	int count = 0, i = 0, new_x = 0;
	int MASK = 0x00FF0000;				
	
	new_x = MASK & x;					//Mascara logica AND
	new_x = new_x >> 16;				//Shift logico 2bytes a direita
	
	if(new_x == 0){ 					//verificação se 3ºbyte = 0
		printf("3º byte esta a 0, mete um nr em condições!");
		return -1;
	}
	
	printf("%d >> ", new_x);
	
	for(i=0; i<strlen(vec); i++){
		if(*(vec+i) % new_x == 0){		//verificação se vec[i] multiplo de 3ºbyte (new_x)
			printf("%c ", *(vec+i));	
			count += *(vec+i);			//update do contador
		}
	}
	
	return count;
}
