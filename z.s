	.file	"operator.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "a+b=%d\0"
LC1:
	.ascii "a+b=%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$90, 28(%esp)
	movl	$8, 24(%esp)
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	cmpl	$0, 28(%esp)
	jne	L2
	cmpl	$0, 24(%esp)
	je	L3
L2:
	movl	$1, %eax
	jmp	L4
L3:
	movl	$0, %eax
L4:
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	cmpl	$0, 28(%esp)
	je	L5
	cmpl	$0, 24(%esp)
	je	L5
	movl	$1, %eax
	jmp	L6
L5:
	movl	$0, %eax
L6:
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
