.section .data

.global i
.global j

.section .text

.global soma	

mult:
	movl $1, %eax
	ret
	
soma: 
	movl j, %eax
	movl i, %ecx
	movl $0, %edx
	
	div %ecx
	cmpl $0, %edx
	je mult
	movl $0, %eax
	ret
