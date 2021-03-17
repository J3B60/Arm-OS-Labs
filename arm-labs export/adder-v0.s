MESSAGE:
	.asciz "%d + %d = %d\n"	
.text
	.align 4
	.global	main
main:
	mov 	ip, sp			
	stmfd 	sp!,{fp, ip, lr, pc}
	sub 	fp, ip, #4		
	ldr	r0, MSG1
	mov	r1, #2 @first constant
	mov	r2, #3 @second constant
	add	r3, r1, r2
	bl	printf
	mov 	r0, #0
	sub 	sp, fp, #12
	ldmfd 	sp, {fp, sp, lr}
	bx 	lr

MSG1:
	.word MESSAGE
