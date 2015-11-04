.section .data

.section .text

.global somatorio_n

somatorio_n:

	movl $0, %eax
	movl 4(%esp), %ebx
	
loop:	
	cmpl $0, %ebx		
	je fim					
	
	addl %ebx, %eax
	
	cmpl $0, %ebx
	js negative
	
	decl %ebx			
	jmp loop
	
negative:
	incl %ebx
	jmp loop
	
fim:	
	ret
