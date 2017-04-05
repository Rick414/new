;EXPERIMENT NO	:3
;DATE		:11/01/17
;WRITTEN BY	: ASWANI C S
;ROLL NO	: 31
;PROGRAM NAME	: ADDITION

section .data
msg db 'The sum is'
len equ $-msg
num1 db '100'
num2 db '200'
sum db ''
section .text
	global main
	main:
		mov esi,2
		mov ecx,3
		clc
		add_loop:
		mov al,[num1 +esi]
		adc al,[num2 +esi]
		aaa
		pushf
		or al,30h
		popf
		mov [sum +esi],al
		dec esi
		loop add_loop

		mov edx,len
		mov ecx,msg
		mov ebx,1
		mov eax,4
		int 0x80

		mov edx,3
		mov ecx,sum
		mov ebx,1
		mov eax,4
		int 0x80

		mov eax,1
		mov ebx,0
		int 0x80
