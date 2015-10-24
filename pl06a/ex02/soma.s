.section .data

.global ptr1, ptr2

.section .text

.global soma

soma:
	movl ptr1, %esi
	movl ptr2, %edi
	movl $0, %eax
	
loop:
	movb (%esi), %bl
	
	cmpb $'b', %bl
	je troca

	movb %bl, (%edi)

	cmpb $0, (%esi)
	je fim	

	addl $1, %esi
	addl $1, %edi
	jmp loop

troca:
	movb $'v', %bl
	movb %bl, (%edi)
	addl $1, %esi
	addl $1, %edi
	jmp loop

fim:	
	ret
	

