.section .data

.global ptrvec, num

.section .text

.global vec_sum

vec_sum:
	movl ptrvec, %esi
	movl num, %edi

	movl $0, %eax
	movl $0, %ebx
	

loop:
	cmpl %ebx, %edi 
	je fim			#salta para o fim
	
	addl (%esi), %eax	

	addl $4, %esi
	addl $1, %ebx
	
	jmp loop	

fim:	
	ret
	

