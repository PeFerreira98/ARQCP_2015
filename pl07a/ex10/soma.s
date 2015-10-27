.section .data

.global ptrvec, num, x

.section .text

.global soma

soma:
	movl ptrvec, %esi
	movl num, %edi
	movl x, %ebx
	
loop:
	cmpl %ebx, %edi 
	je fim			#salta para o fim
	
	addl (%esi), %eax	

	addl $4, %esi
	addl $1, %ebx
	
	jmp loop	

fim:	
	ret
	

