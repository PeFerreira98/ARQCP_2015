
.section .data

.global ptr1

.section .text

.global space_count	

space_count: 

	movl ptr1, %esi
	movl $0, %eax
	
	
ciclo:

	movb (%esi), %cl #queremos só 1byte e não os 4Bytes apontados por %esi
	cmpb $' ', %cl
	je count
	
	cmpb $0, %cl
	je fim
	
	addl $1, %esi
	jmp ciclo
	
count:
	incl %eax
	addl $1, %esi
	jmp ciclo
	
fim:
 ret
