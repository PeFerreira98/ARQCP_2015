#include <stdlib.h>
#include <stdio.h>

int str_size(char *str){
	int size=0;

	while(*(str + size) != 0) size++;

	size--;

	return size;
}

int ver_vogal(char *str){ //verifica se todas as letras da palavra são vogais
	int i=0;

	while(('A' <= *(str+i) && *(str+i) <= 'Z') || ('a' <= *(str+i) && *(str+i) <= 'z') ){ 
	//Enquanto for uma letra (maj ou min), entra no ciclo
		
		if(*(str+i) != 'A' && *(str+i) != 'E' && *(str+i) != 'I' && *(str+i) != 'O' && *(str+i) != 'U' && *(str+i) != 'a' && *(str+i) != 'e' && *(str+i) != 'i' && *(str+i) != 'o' && *(str+i) != 'u'){
			return 0; //Se no meio houver uma consoante, retorna logo 0
		}
		i++;
	}

	return 1; //Saiu do ciclo, significa que é composta so por vogais
}

int ver_crescente(char *str){
	int i=1;

	while(('A' <= *(str+i) && *(str+i) <= 'Z') || ('a' <= *(str+i) && *(str+i) <= 'z') ){ 
	//Enquanto for uma letra (maj ou min), entra no ciclo
		
		if(*(str+i) <= *(str+(i-1))){
			return 0; //Se houver uma letra cujo codigo seja menor que o anterior, retorna 0;
		}
		i++;
	}

	return 1; //Saiu do ciclo, significa que é crescente

}

int word_size(char *str){
	int size=0;

	while(('A' <= *(str+size) && *(str+size) <= 'Z') || ('a' <= *(str+size) && *(str+size) <= 'z') ){
		size++;
	}

	return size;
}

int palavras_vogais_crescentes(char *str, int *inicio_palavra, int *fim_palavra){
	int found=0, i=0;	
	
	for(i=0; i<str_size(str); i++){
		if(*(str+i) != ' ' && *(str+i+1) != ' '){
		//isto evita que letras contem como palavras
			if(ver_vogal(str+i) && ver_crescente(str+i)){
				//encontrou uma palavra, update dos vetores 
				*(inicio_palavra + found) = i;
				*(fim_palavra + found) = i + word_size(str+i);
				found++;
			}
			i = i + word_size(str+i);
			//caso encontre uma palavra, o indice aumenta até o final dessa palavra		
		}	
	}	

	return found;
}





