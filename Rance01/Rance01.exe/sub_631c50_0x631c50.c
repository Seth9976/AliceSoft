// 函数: sub_631c50
// 地址: 0x631c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715e68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void*** var_10 = arg3
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg4
int32_t* arg_c

while (edi != arg5)
    int32_t* ecx_1 = arg_c
    int32_t* eax_3 = &edi[2]
    
    if (arg7 u< 0x10)
        ecx_1 = &arg_c
    
    int32_t esi_1 = eax_3[4]
    int32_t edx = esi_1
    
    if (esi_1 u>= arg6)
        edx = arg6
    
    if (eax_3[5] u>= 0x10)
        eax_3 = *eax_3
    
    if (sub_402320(eax_3, eax_3, ecx_1, edx) == 0 && esi_1 u>= arg6)
        int32_t eax_4
        eax_4.b = esi_1 != arg6
        
        if (eax_4 == 0)
            break
    
    edi = *edi
    arg4 = edi

*arg3 = edi

if (arg7 u>= 0x10)
    int32_t* var_28_2 = arg_c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
