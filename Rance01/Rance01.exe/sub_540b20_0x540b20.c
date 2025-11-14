// 函数: sub_540b20
// 地址: 0x540b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
float* eax = *(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
float var_4 = fconvert.s(fconvert.t(*eax))
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_3 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (eax_3 u< edx_2)
    edx_2 = *(arg1 + 0x1e4)
    eax_3 = *(edx_2 + (eax_3 << 2))
    
    if (eax_3 != 0)
        int32_t edx_3 = eax_3[1]
        
        if (esi u>= edx_3 u>> 2)
            return sub_53d1c0(eax_3, edx_3, arg1, 0x74de00)
        
        int32_t edi_2
        
        if (edx_3 != 0)
            edi_2 = *eax_3
        else
            edi_2 = 0
        
        long double x87_r7_3 =
            fconvert.t(fconvert.s(fconvert.t(*(edi_2 + (esi << 2))) + fconvert.t(var_4)))
        int32_t eax_5
        
        if (edx_3 != 0)
            eax_5 = *eax_3
        else
            eax_5 = 0
        
        *(eax_5 + (esi << 2)) = fconvert.s(x87_r7_3)
        **(arg1 + 0x2b0) = fconvert.s(x87_r7_3)
        *(arg1 + 0x2b0) += 4
        float* result
        result.b = 1
        return result

return sub_53d1c0(eax_3, edx_2, arg1, 0x74ddd8)
