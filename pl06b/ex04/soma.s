
.section .data

.global ptr1

.section .text

.global encripta	

encripta: 

	movl ptr1, %esi
	
	
loop:
	movb (%esi), %cl
	
	cmpb $' ', %cl
	je inc
	
	cmpb $0, %cl
	je fim
	
	incb %cl
	movb %cl, (%esi)
	addl $1, %esi
	jmp loop
	
inc:
	addl $1, %esi
	jmp loop
	
fim:
 ret
