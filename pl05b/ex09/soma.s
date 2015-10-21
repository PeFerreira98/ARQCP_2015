.section .data

.global op1

.section .text

.global soma	

soma:
	movl op1, %eax
	
	subl $1, %eax

	imull $3, %eax

	addl $12, %eax
	
	movl $3, %ecx
	
	divl %ecx

	addl $5, %eax

	subl op1, %eax	

	ret
