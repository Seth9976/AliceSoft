// 函数: sub_592120
// 地址: 0x592120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
sub_65a090(&var_28, arg4 << 4)
int32_t var_c_1 = 0
void* ebx = var_28

if (arg4 s> 0)
    void* eax_5 = arg3 + 0x20
    void* ecx = ebx + 8
    int32_t i_1 = arg4
    int32_t i
    
    do
        ecx += 0x40
        *(ecx - 0x48) = fconvert.s(fconvert.t(*(eax_5 - 0x20)))
        eax_5 += 0x40
        i = i_1
        i_1 -= 1
        *(ecx - 0x44) = fconvert.s(fconvert.t(*(eax_5 - 0x50)))
        *(ecx - 0x40) = fconvert.s(fconvert.t(*(eax_5 - 0x40)))
        *(ecx - 0x3c) = fconvert.s(fconvert.t(*(eax_5 - 0x30)))
        *(ecx - 0x38) = fconvert.s(fconvert.t(*(eax_5 - 0x5c)))
        *(ecx - 0x34) = fconvert.s(fconvert.t(*(eax_5 - 0x4c)))
        *(ecx - 0x30) = fconvert.s(fconvert.t(*(eax_5 - 0x3c)))
        *(ecx - 0x2c) = fconvert.s(fconvert.t(*(eax_5 - 0x2c)))
        *(ebx - arg3 + eax_5 - 0x40) = fconvert.s(fconvert.t(*(eax_5 - 0x58)))
        *(ecx - 0x24) = fconvert.s(fconvert.t(*(eax_5 - 0x48)))
        *(ecx - 0x20) = fconvert.s(fconvert.t(*(eax_5 - 0x38)))
        *(ecx - 0x1c) = fconvert.s(fconvert.t(*(eax_5 - 0x28)))
        *(ecx - 0x18) = fconvert.s(fconvert.t(*(eax_5 - 0x54)))
        *(ecx - 0x14) = fconvert.s(fconvert.t(*(eax_5 - 0x44)))
        *(ecx - 0x10) = fconvert.s(fconvert.t(*(eax_5 - 0x34)))
        *(ecx - 0xc) = fconvert.s(fconvert.t(*(eax_5 - 0x24)))
    while (i != 1)

int32_t* var_40_1 = &var_28

if (sub_5923e0(arg1, arg2) != 0)
    if (ebx != 0)
        void* var_40_3 = ebx
        sub_6b4d5b()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

if (ebx != 0)
    void* var_40_2 = ebx
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
