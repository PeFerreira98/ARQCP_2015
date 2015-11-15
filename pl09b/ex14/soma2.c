#include <stdio.h>

int junta_bits_c (int a, int b, int pos){
	int ret = 0, pos2 = (32 - (pos+1));
	int MASK = 0xFFFFFFFF;
	
	pos++;
	

	MASK = ((unsigned int)MASK >> pos2);
	b = b & MASK;
	
	MASK = 0xFFFFFFFF;
	
	MASK = ((unsigned int)MASK << pos);
	a = a & MASK;
	
	ret = a | b;
	
	return ret;
}
