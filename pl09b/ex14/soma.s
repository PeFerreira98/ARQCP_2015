.section .data
.section .text
.global junta_bits_s

junta_bits_s:

#Prologue
	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi
	pushl %edi


#Body
	movl 8(%ebp), %ebx			#ebx = a
	movl 12(%ebp), %esi			#esi = b
	movl 16(%ebp), %edi			#edi = pos
	
	movl $0xFFFFFFFF, %eax		#valor maximo com tudo a 1
	movl $32, %edx				#usamos 32-pos para fazermos deslocação e assim termos a mascara com "pos" bits ligados
	
	incl %edi					#edi++
	subl %edi, %edx				#edx = edx - edi
	
	movl %edx, %ecx				#ecx = edx
		
	shrl %cl, %eax				#eax >> cl
	andl %eax, %esi				#esi = esi & eax
	
	movl $0xFFFFFFFF, %eax
	
	mov %edi, %ecx				#ecx = edi
	
	shll %cl, %eax				#eax << cl
	andl %eax, %ebx				#ebx = ebx & eax
	
	orl %esi, %ebx				#Usamos o or para juntar os dois resultados ebx = ebx | esi
	movl %ebx, %eax				#eax = ebx
	

#Epilogue
	popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
		
	ret
