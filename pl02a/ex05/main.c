#include <stdio.h>
#include <limits.h>
#include <math.h>

const int MAX = 200;

int check_str_size(char *s){
	int tamanho = 0;
	
	while(*(s++)!= 0){
		tamanho++;
	}
	
	return tamanho;
}

void troca_letras_apt(char *c){
	if(96 < *c < 193){
		*c = *c - 32;
	}
}

void ex05(char *str, int t){
	int i=0;
	
	for(i=0; i < t; i++){
		troca_letras_apt(str+i);
	}
}

int main(){
	char str[MAX];
	int i=0;
	
	printf("Introduza uma frase: ");
	fgets(str, sizeof(str), stdin);
	
	ex05(str, check_str_size(str));
	
	for(i=0; i<check_str_size(str); i++){
		printf("%c", str[i]);
	}
	
	printf("\n");
	return 0;
}
