// 函数: sub_5c7e00
// 地址: 0x5c7e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_4 = edx_3 s>> 3
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t eax_5 = *(arg1 + 4)
        int32_t edx_6 = arg2 * 6
        int32_t* result = eax_5 + (edx_6 << 3) + 4
        
        if (*(eax_5 + (edx_6 << 3) + 0x18) u< 0x10)
            return result
        
        return *result

return nullptr
