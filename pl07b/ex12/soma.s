.section .data

.global ptrvec

.section .text

.global vec_corta

vec_corta:
	movl ptrvec, %eax
	movl num, %ecx
	movl $1000, %esi
	movl $1, %edx
	movl count, %edi

loop:
	cmpl $0, %ecx
	je fim			#salta para o fim	
	
	cmpl %esi, (%eax)
	jge zerar
	
	cmpl %edx, 4(%eax)
	jge zerar
	
	addl $8, %eax
	decl %ecx
	jmp loop	
	
zerar:
	movl $0, (%eax)
	movl $0, 4(%eax)
	
	addl $8, %eax
	addl $1, %edi
	jmp loop

fim:	
	movl %edi, %eax
	ret
