.section .data

vecSize:					#-4(%ebp)
	.int

.section .text
.global somabyte2_s

somabyte2_s:				#void somabyte2_s (char x, int *vec1, int *vec2);
	
#Prologue
	pushl %ebp
	movl %esp, %ebp
	subl $4, %esp

	#pushl %ebx
	#pushl %esi
	#pushl %edi
	
	
#Body
	movl $0, %eax			#ebx = 0
	
	movb 8(%ebp), %bl		#bl = x
	movl 12(%ebp), %edi		#edi = vec1
	movl 16(%ebp), %esi		#esi = vec2
	
	movl (%edi), %eax		#eax = *vec1
	movl %eax, -4(%ebp)		#vecSize = eax
	
loop:
	cmpl $0, -4(%ebp)		#if(vecSize == 0)
	je fim
	
	addb %bl, %ah			#2ºB + x (tudo 1B)
	
	movl %eax, (%esi)		#*vec2 = eax
	
	addl $4, %edi			#vec1++
	addl $4, %esi			#vec2++
	
	movl (%edi), %eax		#eax = *vec1
	
	decl -4(%ebp)			#vecSize--
	jmp loop
	
	
fim:	
	
#Epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
