.section .data

.global res

.global alt

.section .text

.global get_area	

get_area:
	movl res, %eax
	movl alt, %ebx	
	addl %ebx, %eax
	ret
