.section .data

.global ptrvec1, ptrvec2, ptrvec3, num, aux
 
.section .text

.global diferentes


diferentes:
	movl ptrvec1, %esi
	movl ptrvec3, %ebx
	movl num, %ecx
	movl $0, %eax
	subl $2, %esi			#tem-se que se subtrair senão nunca conseguia-mos ver o primeiro valor
	
loop:
	addl $2, %esi
	movl ptrvec2, %edi		#inicializa-se edi porque a cada posição de ptrvec1 queremos ler tudo de ptrvec2
	
	cmpl $0, aux		
	je fim					#salta para o fim
	
	decl aux	
	movl num, %ecx			#inicializa-se o contador do loop 2 para nao começar a zero na segunda vez do ciclo
	
loop2:	
	cmpl $0, %ecx
	je adicionar			#caso chegue ao fim sem ter encontro um valor igual, adiciona-o no 3º vector
	
	movw (%esi), %dx
	cmpw %dx, (%edi)
	je loop					#caso encontre, nao é necessario correr o resto do vector
	
	addl $2, %edi
	decl %ecx
	jmp loop2
	
adicionar:
	
	movw (%esi), %dx
	movw %dx, (%ebx)
		
	addl $4, %ebx
	addl $1, %eax			#contador de numero nao iguais
	jmp loop	
	
fim:	
	ret
