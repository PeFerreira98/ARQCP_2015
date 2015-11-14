
.section .data

.section .text

.global conta_bits_um

conta_bits_um:
#Prologue
	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi
	#pushl %edi
	
	movl $0, %eax		#zerar o contador de 1
	movl 8(%ebp), %ebx
	movl $32, %esi		#controlador do ciclo (32 bits)
	
ciclo:
	
	cmpl $0, %esi
	je fim
	
	movl %ebx, %edi
	andl $1, %edi		#mascara logica para saber se o bit é 1 ou 0
	
	cmpl $1, %edi
	je incrementa
	
	decl %esi
	shrl %ebx
	jmp ciclo
	
incrementa:
	addl $1, %eax
	decl %esi
	shrl %ebx
	jmp ciclo
	
fim:
#Epilogue
	#popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
		
	ret
