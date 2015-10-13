.section .data

.global op1
.global op2
.global op3

.section .text

.global soma	

soma:
	movl op1, %ebx		#coloca o valor do op1 em ebx
	movl op2, %eax		#coloca o valor de op2 em eax
	movl op3, %edi
	addl %ebx, %eax		#soma o valor armazenado no ebx com eax e guarda o valor da soma em eax
	subl %edi, %eax
	ret
