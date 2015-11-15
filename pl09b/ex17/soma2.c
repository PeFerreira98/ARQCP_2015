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

void somabyte2_c (char x, int *vec1, int *vec2){
	int dummy = 0, i=0;
	
	for(i=0; i<(*vec1); i++){			//vec[0] contém o size do vector
		dummy = *(vec1+i);				//move vec[i] para uma var temporaria
		dummy = c_ror(dummy, 8);		//rotação para a direita 1Byte (8b)
		dummy += x;						//soma do valor, no 1ºByte (antigo 2ºbyte)
		dummy = c_rol(dummy, 8);		//rotação para a esquerda 1Byte (8b)
		*(vec2+i) = dummy;				//move vat temp para vec2[i]
	}
}

/*
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
*/
