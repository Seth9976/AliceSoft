// 函数: sub_542af0
// 地址: 0x542af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebp = **(arg1 + 0x2b0)
int32_t entry_ebx

if (ebx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t ecx_1 = *(arg1 + 0x1e4)
    int32_t* eax_5 = *(ecx_1 + (ebx << 2))
    
    if (eax_5 != 0)
        if (ebp u< (*(arg1 + 0x1e8) - ecx_1) s>> 2)
            void** edx_3 = *(ecx_1 + (ebp << 2))
            
            if (edx_3 != 0)
                **(arg1 + 0x2b0) = zx.d(sub_550860(eax_5, edx_3))
                *(arg1 + 0x2b0) += 4
                sub_552880(arg1 + 0x1dc, ebp)
                sub_552880(arg1 + 0x1dc, ebx)
                int32_t result
                result.b = 1
                return result
        
        return sub_53d0e0(arg1, 0x74e63c, ebp, arg4, arg3, arg2, entry_ebx)

return sub_53d0e0(arg1, 0x74e610, ebx, arg4, arg3, arg2, entry_ebx)
