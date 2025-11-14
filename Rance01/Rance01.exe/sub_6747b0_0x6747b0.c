// 函数: sub_6747b0
// 地址: 0x6747b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return 0

if (arg4 == 0)
    return 0

if (*(arg1 + 0x10) != 0 && (*(**(arg1 + 0x10) + 0xc4))(arg2, arg3, arg4) != 0)
    return 1

if (*(arg1 + 0xc) != 0)
    return (*(**(arg1 + 0xc) + 0xc4))(arg2, arg3, arg4)

return 0
