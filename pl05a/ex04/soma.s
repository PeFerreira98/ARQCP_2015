.section .data

.global op1
.global op2

CONST: 
	.int 10

.section .text

.global soma	

soma:
	movl op1, %eax		#coloca o valor do op1 em ebx
	movl op2, %ebx		#coloca o valor de op2 em eax
	
	subl CONST, %eax
	subl %ebx, CONST

	subl CONST, %eax

	ret
