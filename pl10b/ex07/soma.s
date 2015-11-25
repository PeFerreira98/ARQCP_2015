.section .data
.section .text
.global insere_dados


insere_dados:				#insere_dados(s2 *s, short vw[3], int vj, char vc[3]);	

#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	pushl %edi
	
	
#Body	
	movl 8(%ebp), %esi		#|0.1|2.3|4.5| |8.11| |12|13|14|
	movl 12(%ebp), %edi		#edi = vw
	movl 16(%ebp), %ebx		#ebx = vj
	movl 20(%ebp), %ecx		#ecx = vc
	
	movw (%edi), %ax
	movw %ax, (%esi)
	addl $2, %edi
	movw (%edi), %ax
	movw %ax, 2(%esi)		#0 2 4 porque cada short ocupa 2bytes
	addl $2, %edi
	movw (%edi), %ax
	movw %ax, 4(%esi)
	
	movl %ebx, 8(%esi)		#o short acaba num endereço multiplo de 2 (6) e precisamos de um multiplo de 4 (8)

	movb (%ecx), %al
	movb %al, 12(%esi)		#começa no 12 porque o int vai do byte 8 a 11
	addl $1, %ecx
	movb (%ecx), %al
	movb %al, 13(%esi)
	addl $1, %ecx
	movb (%ecx), %al
	movb %al, 14(%esi)
	addl $1, %ecx

fim:


#Epilogue
	popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
