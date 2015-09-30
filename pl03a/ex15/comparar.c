void comparar (int *vec){
	
	int i;
	
	for(i = 0; i < 98; i++){
		
		if (*vec < *(vec+i) && *(vec+i)<*(vec+i+1)){
			contabilizar();
		}
		
	}
	
}
