int comparar (int *vec){
	
	if (*vec < *(vec+1) && *(vec+1)<*(vec+2)){
		return 1;
	}
	
	return 0;
}
