#include <stdio.h>
#include <string.h>

unsigned int c_rol(const unsigned int value, int shift) {
    if ((shift &= sizeof(value)*8 - 1) == 0) return value;
    return (value << shift) | (value >> (sizeof(value)*8 - shift));
}

unsigned int c_ror(const unsigned int value, int shift) {
    if ((shift &= sizeof(value)*8 - 1) == 0) return value;
    return (value >> shift) | (value << (sizeof(value)*8 - shift));
}

int activa_bit_c (int *vec, int pos){
	int old = *vec;
	int new = *vec;
	int MASK = 0x00000001;
	
	new = c_ror(new, pos);
	
	new = new | MASK;
	
	new = c_rol(new, pos);
	
	if(old == new) return 0;
	
	*vec = new;
	return 1;
}

