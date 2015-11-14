.section .data

.section .text

.global somatorio_n

somatorio_n:

	movl $0, %eax			#Acumulador
	movl 4(%esp), %ebx		#n
	
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
	ret
