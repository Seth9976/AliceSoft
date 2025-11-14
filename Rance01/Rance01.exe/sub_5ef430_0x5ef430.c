// 函数: sub_5ef430
// 地址: 0x5ef430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7196b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg3
int32_t ebx_2 = (arg4 - esi) s/ 0x6c
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(ebx_2)
int32_t result = eax_7 - edx_2
int32_t edi_1 = result s>> 1
var_80 = esi

if (edi_1 s> 0)
    int32_t* ebp_3 = edi_1 * 0x6c + esi
    
    while (true)
        ebp_3 -= 0x6c
        edi_1 -= 1
        void var_7c
        int32_t* eax_8
        int32_t edx_3
        eax_8, edx_3 = sub_5ee970(ebp_3, &var_7c)
        int32_t var_4 = 0
        sub_5ef9b0(eax_8, edx_3, edi_1, esi, ebx_2, &var_7c)
        int32_t var_4_1 = 0xffffffff
        result = sub_4329b0(&var_7c)
        
        if (edi_1 s<= 0)
            break
        
        esi = var_80

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return result
