// 函数: sub_5445f0
// 地址: 0x5445f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
*(arg1 + 0x2b0) -= 4
*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_4 = **(arg1 + 0x2b0)

if (eax_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t ebx = *(arg1 + 0x1e4)
    int32_t* ecx_4 = *(ebx + (eax_4 << 2))
    
    if (ecx_4 != 0)
        int32_t esi = ecx_4[1]
        
        if (edx u< esi u>> 2)
            int32_t ecx_5
            
            if (esi != 0)
                ecx_5 = *ecx_4
            else
                ecx_5 = 0
            
            int32_t edx_1 = *(ecx_5 + (edx << 2))
            
            if (edx_1 u< (*(arg1 + 0x1e8) - ebx) s>> 2)
                int32_t* eax_8 = *(ebx + (edx_1 << 2))
                
                if (eax_8 != 0)
                    sub_550990(eax_8, eax_1)
                    int128_t* result
                    result.b = 1
                    return result
            
            int32_t entry_ebx
            return sub_53d0e0(arg1, 0x74ec64, edx_1, arg4, arg3, arg2, entry_ebx)

return sub_53d0e0(arg1, 0x74ec2c, eax_4, edx, arg4, arg3, arg2)
