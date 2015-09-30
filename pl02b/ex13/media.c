void ex13(char *str, char c, int *vec){
	
	int i = 0;
	
		while (*str != '\0'){
			
			if (c == *str){
				*vec=i;
				vec++;
			}
			
			i++;
			str++;
		}
}
