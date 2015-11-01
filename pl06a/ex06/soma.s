.section .data

.global ptr1, ptr2, ptr3

.section .text

.global soma

soma:
	movl ptr1, %esi
	movl ptr2, %edi
	movl ptr3, %ecx
	movl $0, %eax
	

loop_1:
	movb (%esi), %bl
	movb %bl, (%ecx)	

	cmpb $0, (%esi)
	je loop_2			#salta para o loop2

	addl $1, %esi
	addl $1, %ecx
	jmp loop_1


loop_2:
	movb (%edi), %bl
	movb %bl, (%ecx)	

	cmpb $0, (%edi)
	je fim				#salta para o fim

	addl $1, %edi
	addl $1, %ecx
	jmp loop_2
	

fim:	
	ret
	

