
.section .data

.global ptrvec
.global num

.section .text

.global vec_pos

vec_pos: 

	movl $0, %eax
	movl ptrvec, %ecx
	movl num, %ebx
	
loop:
	cmpl $0, %ebx
	je fim
	
	decl %ebx
	
	cmpl $10, (%ecx)
	jge count
	
	addl $4, %ecx
	jmp loop
	
count:
	addl $1, %eax
	addl $4, %ecx
	jmp loop
	
fim:
	ret
