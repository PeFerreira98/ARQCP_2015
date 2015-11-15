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
	
	movl (%edi), %eax		
	movl %eax, -4(%ebp)
	
	
#Epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
