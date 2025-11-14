// 函数: sub_545760
// 地址: 0x545760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)

if (eax_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t ebx = *(arg1 + 0x1e4)
    int32_t* ecx_3 = *(ebx + (eax_2 << 2))
    
    if (ecx_3 != 0)
        int32_t esi = ecx_3[1]
        
        if (edx u< esi u>> 2)
            int32_t ecx_4
            
            if (esi != 0)
                ecx_4 = *ecx_3
            else
                ecx_4 = 0
            
            int32_t esi_1 = *(ecx_4 + (edx << 2))
            int32_t edx_3 = (*(arg1 + 0x1e8) - ebx) s>> 2
            
            if (esi_1 u< edx_3)
                eax_2 = *(ebx + (esi_1 << 2))
                
                if (eax_2 != 0)
                    if (sub_5514f0(eax_2) != 0)
                        return 1
                    
                    int32_t entry_ebx
                    return sub_53d0e0(arg1, 0x74f598, esi_1, arg4, arg3, arg2, entry_ebx)
            
            return sub_53d1c0(eax_2, edx_3, arg1, 0x74f560)

return sub_53d0e0(arg1, 0x74f51c, eax_2, edx, arg4, arg3, arg2)
