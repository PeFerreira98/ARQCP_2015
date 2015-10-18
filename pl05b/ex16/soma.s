.section .data

.global res

.global alt

.section .text

.global mult
.global soma
.global sub
.global div

soma:
	movl op1, %eax		
	movl op2, %ebx		
	addl %ebx, %eax
	ret
	
sub:
	movl op1, %eax		#coloca o valor do op1 em ebx
	movl op2, %ebx		#coloca o valor de op2 em eax
	subl %ebx, %eax
	ret

mult:
	movl op1, %eax
	movl op2, %ebx	
	imull %ebx, %eax
	ret
	
div:
	movl op1, %eax
	movl op2, %ebx	
	movl $0, %edx
	div %ebx
	
	ret
