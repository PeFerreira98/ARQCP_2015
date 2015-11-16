.section .data
.section .text
.global quadrado

quadrado:
	
#Prologue
	pushl %ebp
	movl %esp, %ebp

	#pushl %ebx
	#pushl %esi
	#pushl %edi
	
	
#Body	
	movl 8(%ebp), %eax
	
	movl %eax, %edx
	
	imull %edx, %eax
	
#Epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
