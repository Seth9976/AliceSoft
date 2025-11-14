// 函数: sub_545940
// 地址: 0x545940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_11 = *(arg2 + 0x2b0)
int32_t ecx = *(eax_11 - 0xc)
int32_t ebx = *(eax_11 - 8)
int32_t edi = *(eax_11 - 4)
*(arg2 + 0x2b0) = eax_11 - 0xc
void var_8
int32_t var_4
int32_t entry_ebx

if (ecx u< (*(arg2 + 0x1e8) - *(arg2 + 0x1e4)) s>> 2)
    int32_t edx_1 = *(arg2 + 0x1e4)
    int32_t* ecx_1 = *(edx_1 + (ecx << 2))
    
    if (ecx_1 != 0)
        int32_t eax_4 = ecx_1[1]
        
        if (ebx u< eax_4 u>> 2)
            int32_t ecx_2
            
            if (eax_4 != 0)
                ecx_2 = *ecx_1
            else
                ecx_2 = 0
            
            int32_t eax_5 = *(ecx_2 + (ebx << 2))
            
            if (eax_5 == 0xffffffff)
                return sub_53d0e0(arg2, "NULL", arg3, arg1, entry_ebx, var_8, var_4)
            
            if (eax_5 u< (*(arg2 + 0x1e8) - edx_1) s>> 2)
                int32_t* ecx_8 = *(edx_1 + (eax_5 << 2))
                
                if (ecx_8 != 0)
                    if (sub_551be0(ecx_8, edi, &var_4) == 0)
                        return sub_53d0e0(arg2, 0x74f67c, arg3, arg1, entry_ebx, var_8, var_4)
                    
                    int32_t* result = *(arg2 + 0x2b0)
                    *result = var_4
                    *(arg2 + 0x2b0) += 4
                    return result
            
            return sub_53d0e0(arg2, 0x74f64c, arg3, arg1, entry_ebx, var_8, var_4)

return sub_53d0e0(arg2, 0x74f5e8, arg3, arg1, entry_ebx, var_8, var_4)
