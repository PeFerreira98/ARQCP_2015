
.section .data

.section .text

.global incrementa_e_quadrado

incrementa_e_quadrado:
	
	movl 4(%esp), %edx
	movl 8(%esp), %eax
	
	imull %eax, %eax
	addl $1, (%edx)
	
	ret
	
