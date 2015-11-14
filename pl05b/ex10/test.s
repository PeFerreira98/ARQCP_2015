.section .data

.global op1, op2, carry_fl, overflow_fl

.section .text

.global test	

test:
	movl op1, %eax
	movl op2, %ebx
	addl %ebx, %eax
	jc carry_on
	jo overflow_on
	jmp fim	
		
carry_on:
	movl $1, carry_fl
	jo overflow_on
	jmp fim

overflow_on:
	movl $1, overflow_fl	

fim:
	ret


