.section .data

.global ptrvec, count, num

.section .text

.global vec_corta

vec_corta:
	movl ptrvec, %eax
	movl num, %ecx
	movl $1000, %esi
	movl $1, %edx
	movl $0, %edi

loop:
	cmpl $0, %ecx
	je fim			#salta para o fim	
	
	cmpl %esi, (%eax)
	jge zerar
	
	movl 4(%eax), %ebx
	
	cmpl %edx, %ebx
	jge zerar
	
	addl $8, %eax
	decl %ecx
	jmp loop	
	
zerar:
	movl $0, (%eax)
	movl $0, 4(%eax)
	
	addl $8, %eax
	addl $1, %edi
	decl %ecx
	jmp loop

fim:	
	movl %edi, %eax
	ret
