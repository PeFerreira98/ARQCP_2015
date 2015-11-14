.section .data

.global A, B, C, D

.section .text

.global test	

test:
	movl A, %ebx
	movl B, %ecx
	movl C, %esi
	movl D, %edi
	movl $0, %eax
	movl $0, %edx

	imull %esi, %ecx

	addl %ecx, %eax
	div %edi

	addl %edi, %eax
	ret


