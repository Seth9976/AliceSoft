// 函数: sub_579f90
// 地址: 0x579f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 4) = arg3
*(arg1 + 8) = arg4
char result = sub_586680(arg1 + 0x14, arg2, arg4 * 0x12)

if (result == 0)
    return result

return sub_586680(arg1 + 0x28, arg2, *(arg1 + 8) * 0x12) != 0
