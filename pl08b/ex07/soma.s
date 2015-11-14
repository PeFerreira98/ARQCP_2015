
.section .data

.section .text

.global conta_pares

conta_pares:
	
	movl 4(%esp), %edx
	movl 8(%esp), %ecx
	movl $0, %eax			#Acumulador
	
loop:
	cmpl $0, %ecx
	je fim
	
	movl (%edx), %ebx		#passamos para outro registo para nao estragar o vector
	
	andl $1, %ebx			#máscara logica: se der 0 é par
	
	cmpl $0, %ebx
	je par
	
	decl %ecx
	add $4, %edx
	jmp loop
	
par:
	decl %ecx
	add $4, %edx
	
	cmpl $0, -4(%edx)		#vai verificar se o número em questão é 0(nº neutro)
	je loop
	
	addl $1, %eax
	jmp loop
	
fim:
	ret
	
