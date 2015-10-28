
.section .data

.global ptrvec
.global num
count:
	.int 0
	
.section .text

.global vec_pos

vec_pos: 

	movl $0, %eax
	movl ptrvec, %ecx
	movl num, %ebx
	
loop:
	cmpl $0, %ebx
	jmp fim
	
	decl %ebx
	
	cmpl $10, (%ecx)
	jge count_
	
	addl $4, %ecx
	jmp loop
	
count_:
	addl $1, %eax
	addl $4, %ecx
	jmp loop
	
fim:
	ret
