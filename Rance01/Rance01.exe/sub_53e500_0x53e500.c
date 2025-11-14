// 函数: sub_53e500
// 地址: 0x53e500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x2b0)
int32_t ebx = *(eax - 4)
int32_t esi = *(eax - 8)
int32_t eax_1 = *(eax - 0xc)
*(arg1 + 0x2b0) = eax - 0xc

if (eax_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* ecx_4 = *(*(arg1 + 0x1e4) + (eax_1 << 2))
    
    if (ecx_4 != 0)
        int32_t edx_2 = ecx_4[1]
        
        if (esi u< edx_2 u>> 2)
            int32_t ecx_5
            
            if (edx_2 != 0)
                ecx_5 = *ecx_4
            else
                ecx_5 = 0
            
            *(ecx_5 + (esi << 2)) = ebx
            **(arg1 + 0x2b0) = ebx
            *(arg1 + 0x2b0) += 4
            int32_t* result
            result.b = 1
            return result

uint32_t ecx_21

if (eax_1 s< 0)
    ecx_21 = 0xffffffff
else
    if (eax_1 s< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        int32_t edx_3 = *(arg1 + 0x1e4)
        
        if (*(edx_3 + (eax_1 << 2)) != 0)
            void* ecx_10 = *(edx_3 + (eax_1 << 2))
            edx_3.b = *(ecx_10 + 0xc) == 3
            
            if (edx_3.b != 0)
                if (eax_1 s>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                    return sub_53d0e0(arg1, 0x74d370, eax_1, esi, ebx, 0xffffffff, arg2)
                
                return sub_53d0e0(arg1, 0x74d370, eax_1, esi, ebx, *(ecx_10 + 4) u>> 2, arg2)
    
    if (eax_1 s< 0 || eax_1 s>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        ecx_21 = 0xffffffff
    else
        int32_t edx_7 = *(arg1 + 0x1e4)
        
        if (*(edx_7 + (eax_1 << 2)) == 0)
            ecx_21 = 0xffffffff
        else
            ecx_21 = *(*(edx_7 + (eax_1 << 2)) + 4) u>> 2

return sub_53d0e0(arg1, 0x74d3c0, eax_1, esi, ebx, ecx_21, arg2)
