EXTERN ExecActionButtonParamFunc :PROC
EXTERNDEF ExecuteActionButtonParamProxy :QWORD
.code
ALIGN 16

ExecActionButtonParamWrapper PROC
push rcx
push rdx
push r8
push r9
sub rsp, 58h
movaps xmmword ptr [rsp+10h],XMM0
movaps xmmword ptr [rsp+20h],XMM1
movaps xmmword ptr [rsp+30h],XMM2

mov rcx,rdx
call ExecActionButtonParamFunc
cmp al,-1
jz normal_flow
add rsp, 58h
pop r9
pop r8
pop rdx
pop rcx
ret

normal_flow:
movaps XMM0,xmmword ptr [rsp-10h]
movaps XMM1,xmmword ptr [rsp-20h]
movaps XMM2,xmmword ptr [rsp-30h]
add rsp, 58h
pop r9
pop r8
pop rdx
pop rcx
xor rax,rax
jmp [ExecuteActionButtonParamProxy]


ExecActionButtonParamWrapper ENDP

END