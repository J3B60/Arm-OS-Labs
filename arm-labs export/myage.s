MESSAGE:
	.asciz "I am %d years old!\n"	
.text
	.align 4
	.global	main
main:
	mov 	ip, sp			
	stmfd 	sp!,{fp, ip, lr, pc}
	sub 	fp, ip, #4		
	ldr	r0, MSG1
	mov	r1, #37
	bl	printf
	mov 	r0, #0
	sub 	sp, fp, #12
	ldmfd 	sp, {fp, sp, lr}
	bx 	lr

MSG1:
	.word MESSAGE
