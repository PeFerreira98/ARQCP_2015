.section .data

.global temp
.global temp_p
.global res

.section .text

.global soma	

aumentar_temp:
	subw %cx, %ax
	imulw $180, %ax
	
	ret
	
diminuir_temp:
	subw %ax, %cx
	imulw $120, %cx
	movw %cx, %ax
	
	ret
	
soma:
	movw temp, %cx
	movw temp_p, %ax
	
	cmpw %cx, %ax
	jg aumentar_temp
	jl diminuir_temp
	
	

