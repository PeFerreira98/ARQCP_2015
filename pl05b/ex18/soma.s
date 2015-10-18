.section .data

.global i

.section .text

.global soma	

par_neg:
	movl $2, %eax
	ret

par:
	
	cmpl $0, %edx
	jg par_neg
	movl $1, %eax
	ret
	
impar_neg:
	movl $4, %eax
	ret
	
soma: 
	movl i, %eax
	movl $0, %edx
	movl $2, %ecx
	
	div %ecx
	cmpl $0, %edx
	je par
	
	movl $3, %eax
	cmpl $0, %edx
	jg impar_neg
	ret
