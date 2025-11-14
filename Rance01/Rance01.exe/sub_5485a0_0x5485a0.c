// 函数: sub_5485a0
// 地址: 0x5485a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t ebp
int32_t* result = sub_5466f0("A_REVERSE", **(arg1 + 0x2b0), ebp, esi, edi, arg1, eax_1)

if (result == 0)
    result.b = 0
    return result

if (result[0x10].b != 0)
    int32_t ecx = result[1]
    uint32_t edi_3 = ecx u>> 2
    
    if (edi_3 s> 0)
        int32_t esi_2
        
        if (ecx != 0)
            esi_2 = *result
        else
            esi_2 = 0
        
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(edi_3)
        result = (eax_4 - edx_2) s>> 1
        int32_t ecx_1 = 0
        
        if (result s> 0)
            int32_t* edx_3 = esi_2 + (edi_3 << 2) - 4
            
            do
                int32_t edi_4 = *(esi_2 + (ecx_1 << 2))
                *(esi_2 + (ecx_1 << 2)) = *edx_3
                *edx_3 = edi_4
                ecx_1 += 1
                edx_3 -= 4
            while (ecx_1 s< result)

result.b = 1
return result
