// 函数: sub_53ec40
// 地址: 0x53ec40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_3 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (eax_3 u< edx_2)
    edx_2 = *(arg1 + 0x1e4)
    int32_t* esi_1 = *(edx_2 + (eax_3 << 2))
    
    if (esi_1 != 0)
        int32_t ebp = esi_1[1]
        uint32_t eax_6 = ebp u>> 2
        
        if (edi u>= eax_6)
            return sub_53d1c0(eax_6, edx_2, arg1, 0x74d604)
        
        int32_t eax_7
        
        if (ebp != 0)
            eax_7 = *esi_1
        else
            eax_7 = 0
        
        int32_t edx_3
        
        if (ebx != 0)
            edx_3 = mods.dp.d(sx.q(*(eax_7 + (edi << 2))), ebx)
        else
            edx_3 = 0
        
        int32_t eax_12
        
        if (ebp != 0)
            eax_12 = *esi_1
        else
            eax_12 = 0
        
        *(eax_12 + (edi << 2)) = edx_3
        **(arg1 + 0x2b0) = edx_3
        *(arg1 + 0x2b0) += 4
        int32_t* result
        result.b = 1
        return result

return sub_53d1c0(eax_3, edx_2, arg1, 0x74d5e0)
