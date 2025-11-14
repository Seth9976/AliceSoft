// 函数: sub_4d98e0
// 地址: 0x4d98e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_4d9a90(arg1, arg2) != 0 && sub_4d9c60(arg2, arg1) != 0 && sub_4d9cc0(arg1) != 0
        && sub_4d9d80(arg1) != 0)
    if (*(arg1 + 0x139) == 0)
        *(arg1 + 0xc) = 1
        return true
    
    void* eax_2 = *(arg1 + 0x10)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x2aaaaaab, *(eax_2 + 0x74) - *(eax_2 + 0x70))
    int32_t edx_2 = edx_1 s>> 2
    
    if (sub_4b8060(arg1 + 0x13c, (edx_2 u>> 0x1f) + edx_2, arg2) != 0)
        *(arg1 + 0xc) = 1
        return true

return false
