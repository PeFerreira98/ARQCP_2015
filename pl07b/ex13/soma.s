.section .data

.global ptrvec
.global num

.section .text

.global preenche_vec

preenche_vec:
	movl ptrvec, %ebx
	movl num, %ecx
	movl $0, %eax		#contador
	movl $0, %edi		#incrementa +1 para o ciclo e também para se saber as posições do vector
	
	
loop:
	cmpl %edi, %ecx
	je fim			#salta para o fim	

	cmpl $0, (%ebx)
	jl troca_indice
	
	addl $4, %ebx
	incl %edi
	
	jmp loop	

troca_indice:

	movl %edi, (%ebx)
	addl $4, %ebx
	addl $1, %eax
	incl %edi
	jmp loop

fim:	
	ret
	

