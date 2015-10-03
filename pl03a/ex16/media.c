#include <stdlib.h>

int str_size(char *str){
	int size=0;

	while(*(str + size) != 0) size++;

	size--;

	return size;
}

char* str_verification(char *str1, char *str2, int size){
	//recebe a posição atual da str2 e a 1 pos da str1 e o tamanho da str pequena (1)	
	int j=0;
	
	for(j=0; j<size; j++){
		//Se encontrar um caracter diferente na string grande, retorna null
		if(*(str2+j) != *(str1+j)) return NULL; 
	}

	//Significa que a str2 esta contida na string grande
	return str2;
}

char* onde_existe(char *str1, char *str2){
	char *res;
	int i=0, size1=str_size(str1), size2=str_size(str2);
	
	res = NULL;	

	//Não é necessario percorrer a str gr toda logo o sz2-sz1+1
	for(i=0; i<(size2-size1+1); i++){
		if(*(str2+i) == *str1){ //um valor da string grande corresponde ao 1 valor da str pequena
			
			res = str_verification(str1, str2+i, size1);
			//Se for != null significa que a str pequena esta contida na grande e retorna o apontador
			if(res != NULL) return res;


/*
*			res = (str2+i);
*			for(j=0; j<size1; j++){
*				if(*(str2+i+j) != *(str1+j)){
*					res = NULL;
*					break;
*				}
*			}
*			if(j == size1) return res;
*/


		}
	}	
	
	return res;
}





