.section .data

.section .text

.global testa_iguais

testa_iguais:

	movl 4(%esp), %esi
	movl 8(%esp), %edi
	movl $1, %eax
	
loop:
	movb (%esi), %bl
	movb (%edi), %cl	

	cmpb $0, %cl		
	je test				#end of str1
	
	cmpb %cl, %bl
	jne negative		#caracteres diferentes, string diferentes
	
	addl $1, %esi
	addl $1, %edi	
	jmp loop
	
test:
	cmpb $0, %bl
	je fim				#compara se str2 chegou ao fim

negative:
	movl $0, %eax		#str diferentes

fim:	
	ret
