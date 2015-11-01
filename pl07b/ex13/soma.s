.section .data

.global ptrvec1

.section .text

.global vec_corta

vec_corta:
	movl ptrvec1, %ebx
	movl num, %ecx
	movl $0, %eax		#contador
	movl $0, %edi		#incrementa +1 para o ciclo e também para se saber as posições do vector
	movl $0, %esi		#é o termo de comparação
	
loop:
	cmpl %edi, %ecx
	je fim			#salta para o fim	

	cmpl %esi, (%ebx)
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
	

