.section .data

.global i
.global j
.global res

.section .text

.global f	
.global f2
.global f3
.global f4

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
	
	cmpl %ecx, %eax
	jge f2ge
	addl $1, %ecx
	imull %ecx, %eax
	ret
	
f3ge:
	addl %ecx, %eax
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

f4le:
	movl i, %eax
	imull $2, %eax
	
	ret
	
f4:
	movl i, %eax
	movl j, %ecx
	addl %ecx, %eax
	movl $0, %edx
	
	cmpl $10, %eax
	jl f4le
	
	movl j, %eax
	movl $3, %ecx
	div %ecx
	
	ret
	

