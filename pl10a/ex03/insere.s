.section .data
.section .text
.global altera_morada


altera_morada:				

#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	#pushl %edi
	
	
#Body						
	
	movl 8(%ebp), %esi		#inicio da struct
	movl 12(%ebp), %ebx		#inicio do vector nova_morada
	
	addl $128, %esi
loop:
	movb (%ebx), %cl
	cmpb $0, %cl			#compara se é fim da string
	je fim
	
	movb %cl, (%esi)
	addl $1, %ebx
	addl $1, %esi
	
	jmp loop
fim:


#Epilogue
	#popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
