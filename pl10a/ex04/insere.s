.section .data
.section .text
.global insere_notas


insere_notas:				

#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	#pushl %edi
	
	
#Body						
	
	movl 8(%ebp), %esi		#inicio da struct
	movl 12(%ebp), %ebx		#inicio do vector novas_notas
	movl $10, %eax
	
	addl $8, %esi
	
loop:
	cmpl $0, %eax			
	je fim
	
	movl (%ebx), %ecx
	movl %ecx, (%esi)
	
	addl $4, %ebx
	addl $4, %esi
	decl %eax
	
	jmp loop
	
fim:


#Epilogue
	#popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
