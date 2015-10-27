
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
	
	
loop:
	cmpl aux, %edx
	je fim
	
	incl aux
	incl (%eax)
	addl $4, %eax
	jmp loop

	
fim:
	
	ret
