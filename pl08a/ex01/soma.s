
.section .data

.section .text

.global quadrado

quadrado:
	
	movl 4(%esp), %eax
	
	movl %eax, %edx
	
	imull %edx, %eax
	
	ret
	
