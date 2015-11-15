.section .data
.section .text
.global soma_multiplos_x_s


soma_multiplos_x_s:			#int soma_multiplos_x_s (char *vec, int x);	

#Prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi
	pushl %edi
	
	
#Body	
	movl 8(%ebp), %esi		#esi = vec
	movl 12(%ebp), %ebx		#ebx = x
	
	movl $0, %edi			#edi = count
	movb $0b00000000, %cl		#cl = MASK1 = 0x00
	
	andb %cl, %bl			#bl a 0
	andb %cl, %bh			#bh a 0
	shrl $16, %ebx			#shift lg direita 16b
	andb %cl, %bh			#bh a 0 fica só o antigo 3ºByte na pos menos significativa
	
	cmpl $0, %ebx			#if (x==0)
	jne loop
	movl $-1, %eax
	jmp fim

#ATE AQUI DA TUDO BEM (VALORES TESTADOS INDIVIDUALMENTE)
	
loop:
	movl (%esi), %eax		#eax = *vec
	cmpl $0, %eax			#if (eax == 0)
	je end_loop					
	
	divl %ebx			#edx = edx:eax % ebx 
	
	cmpl $0, %edx			#if (edx==0)
	je update_count			#count++ e vec++ basicamente
	
	movl $0, %edx			#reset edx
	incl %esi			#vec++
	jmp loop

update_count:
	addl (%esi), %edi
	incl %esi
	jmp loop

end_loop:
	movl %edi, %eax			#eax = edi (count)

fim:


#Epilogue
	popl %edi
	popl %esi
	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	
	ret
	
