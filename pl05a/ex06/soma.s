.section .data

.global res

.global alt

.section .text

.global mult
.global soma
.global sub

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
	movl res, %eax
	movl op1, %ebx	
	addl %ebx, %eax
	ret
