// 函数: sub_53ffc0
// 地址: 0x53ffc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_2 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (eax_2 u< edx_2)
    edx_2 = *(arg1 + 0x1e4)
    eax_2 = *(edx_2 + (eax_2 << 2))
    
    if (eax_2 != 0)
        int32_t edx_3 = eax_2[1]
        
        if (esi u>= edx_3 u>> 2)
            return sub_53d1c0(eax_2, edx_3, arg1, 0x74dc78)
        
        int32_t ecx
        
        if (edx_3 != 0)
            ecx = *eax_2
        else
            ecx = 0
        
        int32_t ecx_2 = *(ecx + (esi << 2)) + 1
        
        if (edx_3 != 0)
            *(*eax_2 + (esi << 2)) = ecx_2
            int32_t result
            result.b = 1
            return result
        
        *(esi << 2) = ecx_2
        int32_t eax_4
        eax_4.b = 1
        return 1

return sub_53d1c0(eax_2, edx_2, arg1, 0x74dc54)
