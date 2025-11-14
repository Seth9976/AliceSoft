// 函数: sub_53dcb0
// 地址: 0x53dcb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)

if (eax_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* ecx_3 = *(*(arg1 + 0x1e4) + (eax_2 << 2))
    
    if (ecx_3 != 0)
        int32_t edx_2 = ecx_3[1]
        
        if (esi u< edx_2 u>> 2)
            int32_t ecx_4
            
            if (edx_2 != 0)
                ecx_4 = *ecx_3
            else
                ecx_4 = 0
            
            **(arg1 + 0x2b0) = *(ecx_4 + (esi << 2))
            *(arg1 + 0x2b0) += 4
            int32_t result
            result.b = 1
            return result

uint32_t ecx_19

if (eax_2 s< 0)
    ecx_19 = 0xffffffff
else
    if (eax_2 s< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        int32_t ecx_6 = *(arg1 + 0x1e4)
        
        if (*(ecx_6 + (eax_2 << 2)) != 0)
            void* ecx_8 = *(ecx_6 + (eax_2 << 2))
            int32_t edx_5
            edx_5.b = *(ecx_8 + 0xc) == 3
            
            if (edx_5.b != 0)
                if (eax_2 s>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                    return sub_53d0e0(arg1, 0x74d190, eax_2, esi, 0xffffffff, arg3, arg2)
                
                return sub_53d0e0(arg1, 0x74d190, eax_2, esi, *(ecx_8 + 4) u>> 2, arg3, arg2)
    
    if (eax_2 s< 0 || eax_2 s>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        ecx_19 = 0xffffffff
    else
        int32_t edx_9 = *(arg1 + 0x1e4)
        
        if (*(edx_9 + (eax_2 << 2)) == 0)
            ecx_19 = 0xffffffff
        else
            ecx_19 = *(*(edx_9 + (eax_2 << 2)) + 4) u>> 2

return sub_53d0e0(arg1, 0x74d1d4, eax_2, esi, ecx_19, arg3, arg2)
