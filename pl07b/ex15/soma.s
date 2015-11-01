.section .data

.global ptrvec1, ptrvec2, ptrvec3, num, aux

.section .text

.global comuns

comuns:
	movl ptrvec1, %esi
	movl ptrvec3, %ebx
	movl num, %ecx
	movl $0, %eax
	
	subl $4, %esi			#tem-se que se subtrair senão nunca conseguia-mos ver o primeiro valor
	
	
loop:
	addl $4, %esi
	movl ptrvec2, %edi		#inicializa-se edi porque a cada posição de ptrvec1 queremos ler tudo de ptrvec2
	
	cmpl $0, aux		
	je fim					#salta para o fim
	
	decl aux	
	movl num, %ecx			#inicializa-se o contador do loop 2 para nao começar a zero na segunda vez do ciclo
	
	
loop2:	
	cmpl $0, %ecx
	je loop					#caso chegue ao fim
	
	movl (%esi), %edx
	cmpl %edx, (%edi)
	je found				#caso encontre
	
	addl $4, %edi
	decl %ecx
	jmp loop2
	
	
found:
	movl (%esi), %edx
	movw %dx, (%ebx)
		
	addl $4, %ebx
	addl $1, %eax			#contador de numero iguais
	jmp loop	
	
	
fim:	
	ret
