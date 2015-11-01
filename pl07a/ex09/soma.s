
.section .data

.global ptrvec
.global num

aux:
	.int 0
	
.section .text

.global vecsum_par

vecsum_par: 

	movl ptrvec, %ebx
	movl num, %ecx
	movl $0, %esi		#acumulador
	movl $2, %edi
	
loop:
	movl $0, %edx		#Limpamos o registo para todas as divisões
	
	cmpl aux, %ecx		#Comparação para sabermos se ja acabou o vector
	je fim
	
	incl aux
	
	movl (%ebx), %eax	#conteudo do apontador e nao o apontador
	divl %edi
	
	cmpl $0, %edx
	je soma_par
	
	addl $4, %ebx
	jmp loop

	
soma_par:
	addl (%ebx), %esi
	addl $4, %ebx
	jmp loop
	
fim:
	movl %esi, %eax
	ret
