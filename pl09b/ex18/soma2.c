#include <stdio.h>
#include <string.h>

int soma_multiplos_x_c (char *vec, int x){
	int count = 0, i = 0, new_x = 0;
	int MASK = 0x00FF0000;				
	
	new_x = MASK & x;					//Mascara logica AND
	new_x = new_x >> 16;				//Shift logico 2bytes a direita
	
	if(new_x == 0){ 					//verificação se 3ºbyte = 0
		printf("3º byte esta a 0, mete um nr em condições!");
		return -1;
	}
	
	printf("%d >> ", new_x);
	
	for(i=0; i<strlen(vec); i++){
		if(*(vec+i) % new_x == 0){		//verificação se vec[i] multiplo de 3ºbyte (new_x)
			printf("%c ", *(vec+i));	
			count += *(vec+i);			//update do contador
		}
	}
	
	return count;
}
/*
 * 
#	movl %esi, -8(%ebp)		#-8ebp = soma
#	addl %edi, -8(%ebp)
#	
#	
#	movl %esi, %ebx			#-4ebp = multiplica
#	imull %edi, %ebx
#	movl %ebx, -4(%ebp)
#	
#	pushl -8(%ebp)			#setting parameters
#	pushl %edi
#	pushl %esi
#	pushl $'+'
#	call imprime_resultado	
#	addl $16, %esp			#remove old parameters da stack
#
#	pushl -4(%ebp)			#setting parameters
#	pushl %edi
#	pushl %esi
#	pushl $'*'
#	call imprime_resultado
#	addl $16, %esp			#remove old parameters da stack
#
#	movl -4(%ebp), %eax		#eax = multiplica
#	subl -8(%ebp), %eax		#eax = eax - soma
* 
* */
