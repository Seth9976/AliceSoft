// 函数: sub_5433e0
// 地址: 0x5433e0
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
            
            int32_t ecx_5 = *(ecx_4 + (edx << 2))
            
            if (ecx_5 u< (*(arg1 + 0x1e8) - ebx) s>> 2)
                int32_t* eax_3 = *(ebx + (ecx_5 << 2))
                
                if (eax_3 != 0)
                    char* eax_6
                    
                    if (eax_3[1] != 0)
                        eax_6 = *eax_3
                    
                    void* result
                    
                    if (eax_3[1] != 0 && eax_6 != 0)
                        char i
                        
                        do
                            i = *eax_6
                            eax_6 = &eax_6[1]
                        while (i != 0)
                        result = eax_6 - &eax_6[1]
                    else
                        result = nullptr
                    
                    **(arg1 + 0x2b0) = result
                    *(arg1 + 0x2b0) += 4
                    result.b = 1
                    return result
            
            int32_t entry_ebx
            return sub_53d0e0(arg1, 0x74e7f0, ecx_5, arg4, arg3, arg2, entry_ebx)

return sub_53d0e0(arg1, 0x74e7a4, eax_2, edx, arg4, arg3, arg2)
