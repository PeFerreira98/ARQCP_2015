.section .data

.global res
.global n
sum:
	.int 0
i:
	.int 1

.section .text

.global soma	

soma:
	movl res, %ecx
	movl i, %ebx
	movl sum, %eax
	
	addl %ebx, %ecx
	addl %ecx, %eax
	addl $1, %ebx
	
	cmpl %ebx, n
	jne soma
	ret
