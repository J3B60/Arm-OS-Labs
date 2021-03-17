fib:
	cmp	r0, #1
	ble 	fin
	stmfd	sp!, {r4, r5, r6, lr}
	mov	r6, r0
	mov	r5, #0
	ble	.L3
	mov	r4, r0
	mov	r5, #0
.L4:
	sub	r0, r4, #1
	bl	fib
	sub	r4, r4, #2
	cmp	r4, #1
	add	r5, r5, r0
	bgt	.L4
	and	r6, r6, #1
.L3:
	add	r0, r5, r6
	ldmfd	sp!, {r4, r5, r6, lr}
fin:
	bx	lr
