// 函数: sub_544f80
// 地址: 0x544f80
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
            return sub_53d1c0(eax_2, edx_3, arg1, 0x74f0cc)
        
        int32_t eax_4
        
        if (edx_3 != 0)
            eax_4 = *eax_2
        else
            eax_4 = 0
        
        int32_t ebx_2 = *(eax_4 + (esi << 2))
        *(arg1 + 0x2b0) -= 4
        int32_t esi_1 = **(arg1 + 0x2b0)
        
        if (sub_553d70(arg1 + 0x1dc, esi_1, ebx_2) != 0)
            return 1
        
        int32_t entry_ebx
        sub_53d0e0(arg1, 0x74f108, esi_1, ebx_2, arg3, arg2, entry_ebx)
        int32_t result
        result.b = 0
        return result

return sub_53d1c0(eax_2, edx_2, arg1, 0x74f090)
