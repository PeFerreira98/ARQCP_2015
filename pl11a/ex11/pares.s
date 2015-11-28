.section .data

aux:
	.int 0
	
.section .text
.global conta_pares


conta_pares:				

#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	#pushl %edi
	
	
#Body						
	
	movl 8(%ebp), %esi		#matrix
	movl 12(%ebp), %edx		#y
	movl 12(%ebp), %ebx		#k
	
	imull %edx, %ebx		#para sabermos o tramanho total da matriz		
	movl $0, %eax			#inicializar o contador de pares a 0

loop:
	cmpl aux, %ebx			#comparaçao com o final da matriz
	je fim

	movl (%esi), %ecx		#conteudo da matriz[y][k]

	andl $1, %ecx			#máscara lógica para descobrir se é par
	cmpl $0, %ecx
	je count
cont:
	addl $4, %esi
	incl aux
	jmp loop
	
count:
	cmpl $0, (%esi)			#para saber se o numero em questao é 0 (neutro)
	je cont
	
	addl $1, %eax
	addl $4, %esi
	incl aux
	
	jmp loop
	
fim:

#Epilogue
	#popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
