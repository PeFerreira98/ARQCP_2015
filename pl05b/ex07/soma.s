.section .data

.global op1

CONST: 
	.int 0

.section .text

.global soma	

soma:
	movl op1, %ebx
	addl $0, %eax

	movb op1 %al
	addb %bh %al

	ret
