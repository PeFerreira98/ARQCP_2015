#include <stdio.h>
#include <limits.h>
#include <math.h>

int MAX = 100;

int string_para_inteiro(char s[]){
	int tamanho = 0, i = 0, num = 0;
	
	while(s[tamanho] != 0){
		tamanho++;
	}
	
	for(i=0; i<tamanho; i++){
		num += (s[i] - '0') * pow(10, (tamanho - i - 1))
	}
	
	return num;
}

int main(){
	char str[MAX];
	int num = 0;
	
	printf("Introduza numero: ");
	fgets(str, sizeof(str), stdin);
	
	num = string_para_inteiro(str);
	printf("%d", num);
	
	return 0;
}

