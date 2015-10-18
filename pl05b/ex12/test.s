.section .data

.global A, B, C, D

.section .text

.global test	

test:
	movb A, %bl
	movw B, %cx
	movl C, %esi
	movl D, %edi
	movl $0, %eax

	movzx %bl, %ebx
	movzx %cx, %ecx

	addl %ebx, %eax
	addl %ecx, %eax
	subl %esi, %eax
	addl %edi, %eax
	
	

	ret


