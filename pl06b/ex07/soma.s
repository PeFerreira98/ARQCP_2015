.section .data

.global ptrvec, num

.section .text

.global soma

soma:
	movl ptrvec, %esi
	movl num, %edi

	movl $0, %eax
	movl $0, %ebx
#	movl $0, %ecx
	

loop:
	cmpl %ebx, %edi 
	je fim			#salta para o fim
	
	addl (%esi), %eax	

	addl $4, %esi
	addl $1, %ebx
	
	jmp loop	

fim:	
	ret
	

