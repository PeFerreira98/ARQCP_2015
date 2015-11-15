
int conta_bits_um_c(int x){
	
	int i, aux = 0, count = 0;
	
	for (i = 0; i < 32; i++){
		
		aux = x & 1;
		if (aux == 1){
			count++;
		}
		x = (x >> 1);		
		
	}
	return count;
}
