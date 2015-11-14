#include <stdlib.h>
#include <stdio.h>

int word_size(char *str){
	int size=0;

	while(('A' <= *(str+size) && *(str+size) <= 'Z') || ('a' <= *(str+size) && *(str+size) <= 'z') ){
		size++;
	}

	return size;
}

int str_size(char *str){
	int size=0;

	while(*(str + size) != 0) size++;

	size--;

	return size;
}

void str_copy(char *original, char *copy){
	int i=0;
	
	for(i=0; i<str_size(original); i++)
		*(copy+i) = *(original+i);
}


void high_to_low(char *str){
	int i=0;
	
	for(i=0; i<str_size(str); i++){
		if('A' <= *(str+i) && *(str+i) <= 'Z'){
			 *(str+i) = *(str+i) + ('a'-'A');
		}
	}
}

int word_verification(char *palavra_str, char *palavra_chave, int size){
	//recebe a posição atual da str2 e a 1 pos da str1 e o tamanho da str pequena (1)	
	int j=0;
	
	for(j=0; j<size; j++){
		//Se encontrar um caracter diferente, retorna 0
		if(*(palavra_str+j) != *(palavra_chave+j)) return 0; 
	}

	//Significa que a palavra da str é igual a palavra_chave
	return 1;
}

int pesquisa_palavra(char *str, char *palavra, int indice_inicial){
	int i=0;
	char str_c[200], palavra_c[20];

	str_copy(str, str_c);
	str_copy(palavra, palavra_c);
	high_to_low(str_c);
	high_to_low(palavra_c);

	for(i=indice_inicial; i<str_size(str); i++){
		if(*(str_c+i) != ' '){ //found a word!
			if(word_size(str_c+i) == word_size(palavra_c)){ //check if str word has the same size as palavra
				if(word_verification(str_c+i, palavra_c, word_size(palavra_c))){
					return i; //Encontrou a palavra
				}				
			}
			i = i + word_size(str_c+i);
		}
	}

	return -1;
}

int pesquisa_ocorrencias_palavra(char *str, char *palavra, int *indices_palavras){
	int i=0, count=0;
	
	for(i=0; i<str_size(str); i++){
		if(pesquisa_palavra(str, palavra, i) != -1){
			*(indices_palavras+count) = pesquisa_palavra(str, palavra, i);				
			count++;
			i = pesquisa_palavra(str, palavra, i);		
		}
		i = i + word_size(str+i);
	}
	
	return count;
}


























