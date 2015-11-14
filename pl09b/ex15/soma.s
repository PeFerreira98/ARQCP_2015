
.section .data

.section .text

.global menor_data

menor_data:
#Prologue
	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi
	#pushl %edi
	
	movl 8(%ebp), %ebx		#data 1
	movl 12(%ebp), %esi		#data 2
	

	movl $0xFFFFFFFF, %eax
	shrl $16, %eax			#mascara para o ano (32-16 = 16) tendo 16 bits ligados à direita
	movl %ebx, %edx			#mov para nao perdermos os registos
	movl %esi, %ecx
	andl %eax, %edx			#mascara para retirar o ano
	andl %eax, %ecx
	cmpl %edx, %ecx
	jne comparar_anos		#se os anos forem iguais, prossegue
	
	movl $0xFFFFFFFF, %eax
	shll $24, %eax			#queremos meter 8 bits ligados à esquerda (32-8=24)
	movl %ebx, %edx			#mov para nao perdermos os registos
	movl %esi, %ecx
	andl %eax, %edx
	andl %eax, %ecx
	cmpl %edx, %ecx
	jne comparar_mes
	
	movl $0xFFFFFFFF, %eax
	shll $24, %eax			#metemos 8 bits ligados a esquerda
	shrl $8, %eax			#desloca-se esses 8 bits de maneira a ficar 8 desligados à esquerda, 8 ligados e 16 desligados à direita
	movl %ebx, %edx
	movl %esi, %ecx
	andl %eax, %edx			#aplica-se a devida máscara
	andl %eax, %ecx
	cmpl %edx, %ecx
	jl fim
	movl %ebx, %eax
	jmp fim


comparar_anos:
	
	cmpl %edx, %ecx		#compara a 2ª data com a 1ª
	jl fim
	
	movl %ebx, %eax		#1ª data
	jmp fim
	
comparar_mes:
	
	cmpl %edx, %ecx
	jl fim
	
	movl %ebx, %eax		#1ª data
	
fim:
	movl %esi, %eax	
#Epilogue
	#popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
		
	ret
