// 函数: sub_669120
// 地址: 0x669120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x50) - *(arg1 + 0x4c))
int32_t edx_1 = edx s>> 4
int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
int32_t result = 0

if (ebx_2 s> 0)
    int32_t* ecx_2 = arg2
    int32_t eax_1 = ecx_2[5]
    int32_t ebp_1 = ecx_2[4]
    int32_t* edi_2 = *(arg1 + 0x4c) + 0x28
    
    while (true)
        if (eax_1 u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t esi_1 = *edi_2
        int32_t eax_2 = esi_1
        
        if (esi_1 u>= ebp_1)
            eax_2 = ebp_1
        
        int32_t* edx_2
        
        if (edi_2[1] u< 0x10)
            edx_2 = &edi_2[-4]
        else
            edx_2 = edi_2[-4]
        
        if (sub_402320(eax_2, edx_2, ecx_2, eax_2) == 0 && esi_1 u>= ebp_1)
            int32_t eax_3
            eax_3.b = esi_1 != ebp_1
            
            if (eax_3 == 0)
                return result
        
        int32_t result_1 = result + 1
        edi_2 = &edi_2[0x16]
        result = result_1
        
        if (result_1 s>= ebx_2)
            break
        
        ecx_2 = arg2

return 0xffffffff
