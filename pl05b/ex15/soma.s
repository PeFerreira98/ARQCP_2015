.section .data

.global temp
.global temp_p
.global res

.section .text

.global soma	

aumentar_temp:
	subl %ecx, %eax
	imull $180, %eax
	
	ret
	
diminuir_temp:
	subl %eax, %ecx
	imull $120, %ecx
	movl %ecx, %eax
	
	ret
	
soma:
	movl temp, %ecx
	movl temp_p, %eax
	
	cmpl %ecx, %eax
	jg aumentar_temp
	jl diminuir_temp
	
	

