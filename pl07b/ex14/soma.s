.section .data

.global ptrvec1, ptrvec2, ptrvec3, num

.section .text

.global soma

soma:
	movl ptrvec1, %esi
	movl ptrvec2, %edi
	movl ptrvec3, %ebx
	movl num, %ecx
	movl $0, %eax
	movl $0, %edx
	
loop:
	cmpl $0, %ecx		#caso contador 0,
	je fim				#salta para o fim	

	pushl %ecx			#guarda o 1ºcontador na stack (supostamente)

	movw (%esi), %dx	
	movl num, %ecx		#inicia o 2ºcontador
	
loop2:
	cmpl $0, %ecx		#caso contador 0,
	je not_found		#sig nr não foi encontrado no 2 array

	cmpw %dx, (%edi)
	je found_elem

	addl $2, %edi		#prox posição do 2º array
	decl %ecx
	jmp loop2


found_elem:
	addl $2, %esi		#prox posição do 1º array
	
	popl %ecx			#ecx volta a ter o valor do 1ºcontador (supostamente)
	decl %ecx
	
	jmp loop
	
not_found:
	movw %dx, (%ebx)	#Guarda nr nao encontrado, no 3º array
	incl %eax
	
	addl $2, %esi		#prox posição do 1º array
	addl $4, %ebx		#prox posição do 2º array

	popl %ecx			#ecx volta a ter o valor do 1ºcontador (supostamente)
	decl %ecx		
	
	jmp loop	
	
fim:	
	ret
