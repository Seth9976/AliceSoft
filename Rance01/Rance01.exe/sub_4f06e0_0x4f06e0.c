// 函数: sub_4f06e0
// 地址: 0x4f06e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0x3c)

if (result != *(arg1 + 0x40))
    int32_t result_2 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    int32_t var_c_1 = 0
    sub_4da9d0(*(arg1 + 0x3c), &result_2)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x40) - *(arg1 + 0x3c))
    int32_t edx_2 = edx_1 s>> 1
    uint32_t ecx_4 = edx_2 u>> 0x1f
    int32_t ebx_1 = 1
    
    if (edx_2 + ecx_4 - 1 s> 1)
        int32_t edi_2 = 0xc
        int32_t var_2c_1 = 0xc
        
        do
            unimplemented  {fld st0, dword [0x75bb58]}
            uint32_t var_40_1 = ecx_4
            float var_40_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            char eax_12 = sub_4f0980(arg1, result_2 + (var_24_1 - result_2) s/ 0xc * 0xc - 0xc, 
                edi_2 + *(arg1 + 0x3c) + 0xc, var_40_2)
            int16_t top = top - 1
            unimplemented  {call 0x4f0980}
            
            if (eax_12 != 0)
                sub_4da9d0(*(arg1 + 0x3c) + edi_2, &result_2)
                edi_2 = var_2c_1
            
            int32_t eax_15
            int32_t edx_7
            edx_7:eax_15 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x40) - *(arg1 + 0x3c))
            int32_t edx_8 = edx_7 s>> 1
            ebx_1 += 1
            edi_2 += 0xc
            ecx_4 = edx_8 + (edx_8 u>> 0x1f) - 1
            var_2c_1 = edi_2
        while (ebx_1 s< ecx_4)
    
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x40) - *(arg1 + 0x3c))
    int32_t edx_10 = edx_9 s>> 1
    
    if (ebx_1 s< (edx_10 u>> 0x1f) + edx_10)
        int32_t ecx_15 = ebx_1 * 0xc
        int32_t var_2c_2 = ecx_15
        
        while (true)
            sub_4da9d0(*(arg1 + 0x3c) + ecx_15, &result_2)
            var_2c_2 += 0xc
            int32_t eax_24
            int32_t edx_11
            edx_11:eax_24 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x40) - *(arg1 + 0x3c))
            int32_t edx_12 = edx_11 s>> 1
            ebx_1 += 1
            
            if (ebx_1 s>= (edx_12 u>> 0x1f) + edx_12)
                break
            
            ecx_15 = var_2c_2
    
    sub_4adaf0(arg1 + 0x3c, &result_2)
    result = result_2
    
    if (result != 0)
        int32_t result_1 = result
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
