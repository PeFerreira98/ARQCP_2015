.section .data

.section .text

.global activa_bit

activa_bit:
	
	movl 4(%esp), %ecx
	movl 8(%esp), %ebx
	
	movl (%ecx), %eax
	ror $2, %eax		#roda pos-1 bits para a direita (Falta alterar o $2 por pos)
	andl $1, %eax		#verifica se o ultimo bit é 1 ou 0
	cmpl $1, %eax		
	jne troca_bit		#dá jump caso seja 0
	
	movl $0, %eax
	
	ret

troca_bit:
	ror $2, (%ecx)
	orl $1, (%ecx)
	movl $1, %eax
	ret
