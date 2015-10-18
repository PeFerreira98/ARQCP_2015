.section .data

.global A, B

.section .text

.global test	

test:
	movl A, %eax
	movl B, %ebx
	addl %ebx, %eax

	ret


