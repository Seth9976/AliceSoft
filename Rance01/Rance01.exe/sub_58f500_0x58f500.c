// 函数: sub_58f500
// 地址: 0x58f500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg2 + 0x24)
int32_t result = *(arg2 + 0x28)

if (edx == result)
    result.b = 0
else
    int32_t ecx = *(arg1 + 8)
    
    if (ecx == 0 || *(arg1 + 4) + ecx u> result - edx || *(arg1 + 0xc) == 0 || *(arg2 + 0x44) == 0)
        result.b = 0
    else
        int128_t* var_1c
        sub_413150(&var_1c, ecx)
        int32_t var_4 = 0
        int128_t* ebx_1 = var_1c
        int32_t var_18
        void* edi_2 = var_18 - ebx_1
        sub_6c02a0(ebx_1, *(arg1 + 4) + *(arg2 + 0x24), edi_2, eax_2)
        sub_404f60(*(arg1 + 0xc), arg3)
        int32_t edx_3 = *arg3
        int32_t* esi_3 = &var_1c
        
        if ((*(**(arg2 + 0x44) + 8))(edx_3, arg3[1] - edx_3, ebx_1, edi_2) != 0)
            sub_65ab60(esi_3)
            result.b = 1
        else
            sub_65ab60(esi_3)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
