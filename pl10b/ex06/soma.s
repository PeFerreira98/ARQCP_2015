.section .data
.section .text
.global insere_dados


insere_dados:				#insere_dados(s1 *s, int vi, char vc, int vj, char vd);

#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	pushl %edi
	
	
#Body						#  d   c     d     c 
	movl 8(%ebp), %esi		#|0.3|4.5| |8.11|12.13|
	movl 12(%ebp), %edi		#edi = vi
	movl 16(%ebp), %ebx		#ebx = vc
	movl 20(%ebp), %ecx		#ecx = vj
	movl 24(%ebp), %edx		#edx = vd
	
	movl %edi, (%esi)		#*(esi) = edi
	
	movb %bl, 4(%esi)		#começa no 4 porque o int vai do byte 0 a 3
	
	movl %ecx, 8(%esi)		#*(esi+8) = ecx
	
	movb %dl, 12(%esi)		#*(esi+12) = dl
	
fim:


#Epilogue
	popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
