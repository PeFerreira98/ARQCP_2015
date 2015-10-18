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
	imull %ecx, %eax
	movl $0, %edx
	movl i, %ebx
	addl $1, %ebx
	
	div %ebx
	
	ret

f3:
	movl i, %eax
	movl j, %ecx
	
	cmpl %ecx, %eax
	jge f3ge
	
	imull %ecx, %eax
	movl $0, %edx
	movl i, %ebx
	addl %ebx, %ecx
	addl $2, %ecx
	
	div  %ecx
	
	
	
	ret
	
	

