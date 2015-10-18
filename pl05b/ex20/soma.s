.section .data

.global i
.global j
.global res

.section .text

.global f	
.global f2
.global f3

fequal:
	subl %ecx, %eax
	ret
	

f:
	movl i, %eax
	movl j, %ecx
	
	cmpl %ecx, %eax
	je fequal
	addl %ecx, %eax
	ret

f2ge:
	addl $1, %eax
	imull %ecx, %eax
	ret
	
f2:
	movl i, %eax
	movl j, %ecx
	
	cmpl %eax, %ecx
	jge f2ge
	addl $1, %ecx
	imull %ecx, %eax
	ret
	
f3ge:
	addl %eax, %ecx
	addl $1, %eax
	mov AX, %ecx
	mov CX, %eax
	div CX
	ret

f3:
	movl i, %eax
	movl j, %ecx
	
	cmpl %eax, %ecx
	jge f3ge
	
	imull %ecx, %eax
	movl i, %edx
	addl %edx, %ecx
	addl $2, %ecx
	
	
	
	ret
	
	

