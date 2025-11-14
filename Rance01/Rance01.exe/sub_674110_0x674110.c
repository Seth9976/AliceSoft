// 函数: sub_674110
// 地址: 0x674110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return arg2

int32_t edx = *(arg1 + 4)

if (edx s<= arg2 && *(arg1 + 0x10) != 0)
    return (*(**(arg1 + 0x10) + 0x8c))(arg2 - edx, arg3, arg4)

if (*(arg1 + 0xc) != 0)
    return (*(**(arg1 + 0xc) + 0x8c))(arg2, arg3, arg4)

return 0
