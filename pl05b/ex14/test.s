.section .data

.global A, B, n

i:
	.int 1

.section .text

.global test	

test:
	movl A, %ecx
	movl B, %esi

	movl $0, %eax
	movl $1, %edi

soma:
	imull %ecx, %eax
	div %esi

	addl $1, %edi

	cmpl %edi, n
	jne soma
	ret


