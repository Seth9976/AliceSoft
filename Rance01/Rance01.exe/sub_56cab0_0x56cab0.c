// 函数: sub_56cab0
// 地址: 0x56cab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_4 = edx_3 s>> 4
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t eax_5 = *(arg1 + 4)
        int32_t edx_5 = arg2 * 5
        int32_t* result = eax_5 + (edx_5 << 3) + 0xc
        
        if (*(eax_5 + (edx_5 << 3) + 0x20) u< 0x10)
            return result
        
        return *result

return nullptr
