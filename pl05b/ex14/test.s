.section .data

.global A, B, n

i:
	.int 1

.section .text

.global test	

test:
	movl A, %ecx
	movl B, %esi

	movl $1, %eax #i
	movl $0, %edi #count
	movl $0, %ebx #store values
	movl $0, %edx

soma:
	imull %ecx, %eax
	div %esi

	addl $1, %edi
	
	addl %eax, %ebx
	movl $0, %eax
	addl %edi, %eax
	addl $1, %eax

	cmpl %edi, n
	jne soma

	movl $0, %eax
	addl %ebx, %eax	

	ret


