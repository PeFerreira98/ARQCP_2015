.section .data

.global ptrvec, num, x

.section .text

.global soma

soma:
	movl ptrvec, %eax
	movw num, %cx
	movw x, %bx
	
loop:
	cmpw $0, %cx
	je not_found

	cmpw (%eax), %bx
	je fim			#salta para o fim	

	addl $2, %eax
	decw %cx
	jmp loop	

not_found:
	movl $0, %eax

fim:	
	ret
	

