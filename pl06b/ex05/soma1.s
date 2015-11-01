
.section .data

.global ptr1

count:
	.int 0

.section .text

.global decifra

decifra: 
	movl ptr1, %esi
	
loop:
	movb (%esi), %cl
	
	cmpb $' ', %cl
	je inc
	
	cmpb $0, %cl
	je fim
	
	decb %cl			#decrementa caracter
	incl count			#incrementa count
	
	movb %cl, (%esi)
	addl $1, %esi		#prox posição da str
	
	jmp loop
	
inc:
	addl $1, %esi
	jmp loop
	
fim:
	movl count, %eax
	ret
