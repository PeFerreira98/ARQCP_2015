.section .data
.section .text
.global somatorio_n

somatorio_n:

#Prologue
	pushl %ebp
	movl %esp, %ebp

	#pushl %ebx
	#pushl %esi
	#pushl %edi
	
	
#Body	
	movl $0, %eax			#Acumulador
	movl 8(%ebp), %ebx		#n
	
loop:	
	cmpl $0, %ebx		
	je fim					
	
	addl %ebx, %eax
	
	cmpl $0, %ebx			#se n for negativo é necessario incrementar e nao decrementar
	js negative				
	
	decl %ebx			
	jmp loop
	
negative:
	incl %ebx
	jmp loop
	
fim:	


#Epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
