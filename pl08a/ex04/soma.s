
.section .data

.section .text

.global soma_e_maior

soma_e_maior:
	
	movl 4(%esp), %eax
	movl 8(%esp), %edx
	movl 12(%esp), %ecx
	
	cmpl %edx, %eax
	jge prim_maior
	
	movl %edx, (%ecx)
	
fim:
	addl %edx, %eax
	ret
	
prim_maior:
	movl %eax, (%ecx)
	jmp fim
