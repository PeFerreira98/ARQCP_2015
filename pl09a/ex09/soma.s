
.section .data

.section .text

.global calc

calc:
#Prologue
	pushl %ebp
	movl %esp, %ebp
	subl $4, %esp

	#pushl %ebx
	#pushl %esi
	#pushl %edi
	
	
#Body
	movl 8(%ebp), %ecx		#ecx = a
	movl 12(%ebp), %ebx		#ebx = b
	movl 16(%ebp), %edx		#edx = c

	movl (%ecx), %eax		#eax = *a
	
	movl %eax, -4(%ebp)		#z = *a
	subl %ebx, -4(%ebp)		#z = z - b
	
	imull -4(%ebp), %edx	#c = c * z
	
	movl %edx, %eax			#eax = c
	

#Epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
