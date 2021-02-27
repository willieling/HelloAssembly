.code
FirstAssemblyFunction proc
	mov rax, 64
	ret
FirstAssemblyFunction endp

Print proc
	mov rax, rcx
	ret
Print endp

AddTwoInts proc
	add rcx, rdx
	mov rax, rcx
	ret
AddTwoInts endp
end