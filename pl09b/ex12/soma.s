.section .data
.section .text
.global activa_bit_s

activa_bit_s:				#int activa_bit_s (int *vec, int pos);
	
#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	#pushl %edi
	
	
#Body
	movl 8(%ebp), %esi		#esi = vec
	movb 12(%ebp), %cl		#cl = pos
	
	movb $0x01, %ch			#ch = MASK = 0x01
	
	movl (%esi), %ebx		#ebx = *vec
	movl (%esi), %edx		#edx = *vec
	
	movl $0, %eax			#eax = 0
	
	rorl %cl, %ebx			#roda pos (cl) bits para a direita
	orb %ch, %bl			#altera o bit menos significativo para 1
	roll %cl, %ebx			#roda pos (cl) bits para a esquerda (voltando a rotação original)
	
	cmpl %ebx, %edx			#verifica se houve alteração do nr original
	je fim					#se sim result = 0
	
	movl $1, %eax 			#caso valor alterado, result = 1
	movl %ebx, (%esi)		#*vec = ebx

fim:

	
#Epilogue
	#popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
