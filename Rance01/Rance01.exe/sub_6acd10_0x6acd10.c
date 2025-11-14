// 函数: sub_6acd10
// 地址: 0x6acd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp = arg1
int32_t ebx_2 = (arg2 - ebp) s/ 0x28
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(ebx_2)
int128_t* result = eax_5 - edx_2
int32_t edi_1 = result s>> 1

if (edi_1 s> 0)
    void* esi_1 = ebp + edi_1 * 0x28 + 8
    
    while (true)
        int32_t edx_3 = *(esi_1 - 0x2c)
        int32_t eax_7 = *(esi_1 - 0x28)
        int32_t ecx_2 = *(esi_1 - 0x30)
        esi_1 -= 0x28
        int32_t var_34_1 = edx_3
        int32_t var_30_1 = eax_7
        int32_t var_38 = ecx_2
        edi_1 -= 1
        int32_t var_2c_1 = *(esi_1 + 4)
        int128_t* var_28
        sub_6b05e0(&var_28, esi_1 + 8)
        int32_t edx_5 = *(esi_1 + 0x1c)
        char var_18_1 = *(esi_1 + 0x18)
        int32_t var_14_1 = edx_5
        int32_t var_4 = 0
        sub_6ad8b0(arg3, edx_5, edi_1, ebp, ebx_2, &var_38, arg3)
        int32_t var_4_1 = 0xffffffff
        int128_t* ebp_1 = var_28
        int128_t* result_1
        result = result_1
        
        if (ebp_1 != result)
            result = sub_6b49d0(ebp_1, result, nullptr, eax_2)
        
        if (ebp_1 != 0)
            int128_t* var_54_3 = ebp_1
            result = sub_6b4d5b()
        
        if (edi_1 s<= 0)
            break
        
        ebp = arg1

fsbase->NtTib.ExceptionList = ExceptionList
return result
