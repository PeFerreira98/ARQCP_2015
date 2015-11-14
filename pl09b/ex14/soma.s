
.section .data

.section .text

.global junta_bits

junta_bits:
#Prologue
	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi
	pushl %edi
	
	movl 8(%ebp), %ebx		#a
	movl 12(%ebp), %esi		#b
	movl 16(%ebp), %edi		#pos
	
	movl $0xFFFFFFFF, %eax	#valor maximo com tudo a 1
	movl $32, %edx			#usamos 32-pos para fazermos deslocação e assim termos a mascara com "pos" bits ligados
	subl %edi, %edx
		
	shrl $29, %eax			#aqui falta usar o valor dado em %edx
	andl %eax, %ebx
	
	movl $0xFFFFFFFF, %eax
	
	shll $3, %eax			#valor de pos em vez de $3
	andl %eax, %esi
	
	orl %esi, %ebx			#Usamos o or para juntar os dois resultados
	movl %ebx, %eax
	

#Epilogue
	popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
		
	ret
