.section .data

#decl variaveis

multiplica:
	.int
soma:
	.int

.section .text

.global calcula

calcula:	
#Prologue
	pushl %ebp
	movl %esp, %ebp
	subl $8, %esp

	#pushl %ebx
	#pushl %esi
	#pushl %edi
	
	
#Body
	movl 8(%ebp), %esi		#1 parameter (a)
	movl 12(%ebp), %edi		#2 parameter (b)
	
	movl %esi, -8(%ebp)		#-8ebp = soma
	addl %edi, -8(%ebp)
	
	
	movl %esi, %ebx			#-4ebp = multiplica
	imull %edi, %ebx
	movl %ebx, -4(%ebp)
	
	pushl -8(%ebp)			#setting parameters
	pushl %edi
	pushl %esi
	pushl $'+'
	call imprime_resultado	
	addl $16, %esp			#remove old parameters da stack

	pushl -4(%ebp)			#setting parameters
	pushl %edi
	pushl %esi
	pushl $'*'
	call imprime_resultado
	addl $16, %esp			#remove old parameters da stack

	movl -4(%ebp), %eax		#eax = multiplica
	subl -8(%ebp), %eax		#eax = eax - soma
	

#Epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
