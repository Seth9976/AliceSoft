// 函数: sub_5424d0
// 地址: 0x5424d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebp = **(arg1 + 0x2b0)
int32_t entry_ebx

if (ebx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t eax_5 = *(arg1 + 0x1e4)
    char** ecx_1 = *(eax_5 + (ebx << 2))
    
    if (ecx_1 != 0)
        int32_t edx_2 = (*(arg1 + 0x1e8) - eax_5) s>> 2
        
        if (ebp u< edx_2)
            int32_t* eax_7 = *(eax_5 + (ebp << 2))
            
            if (eax_7 != 0)
                char* ecx_4
                
                if (ecx_1[1] != 0)
                    ecx_4 = *ecx_1
                else
                    ecx_4 = nullptr
                
                **(arg1 + 0x2b0) = zx.d(sub_550810(eax_7, edx_2.b, ecx_4))
                *(arg1 + 0x2b0) += 4
                sub_552880(arg1 + 0x1dc, ebp)
                sub_552880(arg1 + 0x1dc, ebx)
                int32_t result
                result.b = 1
                return result
        
        return sub_53d0e0(arg1, 0x74e5e4, ebp, arg4, arg3, arg2, entry_ebx)

return sub_53d0e0(arg1, 0x74e5b8, ebx, arg4, arg3, arg2, entry_ebx)
