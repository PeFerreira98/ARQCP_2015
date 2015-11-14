
.section .data

.global ptrvec
.global num

aux:
	.int 0
	
.section .text

.global vec_inc

vec_inc: 
	movl ptrvec, %eax
	movl num, %edx
	movl $0, %ecx
	
	
loop:
	cmpl %ecx, %edx
	je fim
	
	incl (%eax)
	
	addl $4, %eax
	incl %ecx
	jmp loop

	
fim:
	ret
