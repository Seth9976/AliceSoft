// 函数: sub_673920
// 地址: 0x673920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return arg2

if (arg3 == 0)
    return 0

if (arg4 != 0)
    int32_t edx_1 = *(arg1 + 4)
    
    if (edx_1 s<= arg2 && *(arg1 + 0x10) != 0)
        int32_t eax_3 = (*(**(arg1 + 0x10) + 0x2c))(arg2 - edx_1, arg3, arg4)
        return *(arg1 + 4) + eax_3
    
    if (*(arg1 + 0xc) != 0)
        return (*(**(arg1 + 0xc) + 0x2c))(arg2, arg3, arg4)

return 0
