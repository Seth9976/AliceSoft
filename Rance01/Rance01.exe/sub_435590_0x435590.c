// 函数: sub_435590
// 地址: 0x435590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    arg1.b = 0
    return arg1

if (*(arg3 + 0x34) == *(arg1 + 0x34) && *(arg3 + 0x38) == *(arg1 + 0x38)
        && *(arg3 + 0x3c) == *(arg1 + 0x3c) && *(arg3 + 0x40) == *(arg1 + 0x40))
    return 1

return 0
