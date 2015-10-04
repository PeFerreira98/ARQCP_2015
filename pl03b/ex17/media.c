void swap(int *vec1, int *vec2, int tamanho){
	
	int i;
	int aux;
	
	for( i = 0; i < tamanho; i++){
		aux = *(vec1+i);
		*(vec1 + i) = *(vec2 + i);
		*(vec2 + i) = aux;
	}
	
	
}
