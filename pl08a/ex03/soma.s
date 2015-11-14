
.section .data

.section .text

.global menor

menor:
	
	movl 4(%esp), %eax
	movl 8(%esp), %edx
	movl 12(%esp), %ecx
	
	cmpl %eax, %edx
	jle segElemento_terElemento
	
	cmpl %eax, %ecx
	jle terElemento_primElemento
	
	ret
	
segElemento_terElemento:
	cmpl %ecx, %edx
	jle fim
	
	movl %ecx, %eax
	ret

terElemento_primElemento:
	cmpl %eax, %edx
	jle fim
	
	ret
	
fim:
	movl %edx, %eax
	ret
