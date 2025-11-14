// 函数: sub_545c00
// 地址: 0x545c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebp = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
uint32_t edx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
int32_t var_8 = eax_2
int32_t eax_5 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (ecx_1 u< eax_5)
    eax_5 = *(arg1 + 0x1e4)
    int32_t* ecx_2 = *(eax_5 + (ecx_1 << 2))
    
    if (ecx_2 != 0)
        int32_t edx_2 = ecx_2[1]
        uint32_t eax_8 = edx_2 u>> 2
        
        if (ebx u>= eax_8)
            return sub_53d1c0(eax_8, edx_2, arg1, 0x74f78c)
        
        int32_t ecx_4
        
        if (edx_2 != 0)
            ecx_4 = *ecx_2
        else
            ecx_4 = 0
        
        int32_t ebx_1 = *(ecx_4 + (ebx << 2))
        
        if (ebx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
            eax_8 = *(arg1 + 0x1e4)
            int32_t* ebx_2 = *(eax_8 + (ebx_1 << 2))
            
            if (ebx_2 != 0)
                var_8 = var_8
                int32_t result
                int32_t edx_4
                result, edx_4 = sub_553590(edx_1, arg1 + 0x1dc, ebx_2, &var_8, ebp)
                
                if (result.b == 0)
                    return sub_53d1c0(result, edx_4, arg1, 0x74f8ac)
                
                int32_t ebx_3 = ebx_2[0xd]
                
                if (ebx_3 == 0x10)
                    int32_t edx_5
                    result, edx_5 = sub_552880(arg1 + 0x1dc, ebp)
                    
                    if (result.b == 0)
                        return sub_53d1c0(result, edx_5, arg1, 0x74f8dc)
                else if (ebx_3 == 0x11)
                    int32_t edx_6
                    result, edx_6 = sub_552880(arg1 + 0x1dc, ebp)
                    
                    if (result.b == 0)
                        return sub_53d1c0(result, edx_6, arg1, 0x74f910)
                
                **(arg1 + 0x2b0) = var_8
                *(arg1 + 0x2b0) += 4
                result.b = 1
                return result
        
        return sub_53d1c0(eax_8, edx_2, arg1, 0x74f870)

return sub_53d1c0(eax_5, edx_1, arg1, 0x74f838)
