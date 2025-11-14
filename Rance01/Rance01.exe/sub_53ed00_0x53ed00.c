// 函数: sub_53ed00
// 地址: 0x53ed00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_3 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (eax_3 u< edx_2)
    edx_2 = *(arg1 + 0x1e4)
    eax_3 = *(edx_2 + (eax_3 << 2))
    
    if (eax_3 != 0)
        int32_t edi = eax_3[1]
        uint32_t edx_4 = edi u>> 2
        
        if (esi u>= edx_4)
            return sub_53d1c0(eax_3, edx_4, arg1, 0x74d670)
        
        int32_t edx_5
        
        if (edi != 0)
            edx_5 = *eax_3
        else
            edx_5 = 0
        
        int32_t edx_7 = *(edx_5 + (esi << 2)) & ebx
        int32_t eax_5
        
        if (edi != 0)
            eax_5 = *eax_3
        else
            eax_5 = 0
        
        *(eax_5 + (esi << 2)) = edx_7
        **(arg1 + 0x2b0) = edx_7
        *(arg1 + 0x2b0) += 4
        int32_t* result
        result.b = 1
        return result

return sub_53d1c0(eax_3, edx_2, arg1, 0x74d64c)
