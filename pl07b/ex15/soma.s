.section .data

.global ptrvec1, ptrvec2, ptrvec3

.section .text

.global soma

soma:
	movl ptrvec1, %esi
	movl ptrvec2, %edi
	movl ptrvec3, %ebx
	movl num, %ecx
	movl $0, %eax
	movl $0, %edx
	
loop:
	cmpl $0, %ecx
	je fim			#salta para o fim	

	movl (%esi), %edx
	cmpl %edx, (%edi)
	je add_elem

	addl $4, %esi
	addl $4, %edi
	decl %ecx
	
	jmp loop	

add_elem:
	movw %dx, (%ebx)
	
	addl $4, %esi
	addl $4, %edi
	addl $4, %ebx
	decl %ecx
	incl %eax
	
	jmp loop

fim:	
	ret
	

