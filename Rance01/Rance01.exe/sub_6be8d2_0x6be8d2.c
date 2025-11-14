// 函数: sub_6be8d2
// 地址: 0x6be8d2
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0x7ff00000)
    if (arg2 == 0xfff00000 && arg1 == 0)
        return 2
else if (arg1 == 0)
    return 1

int16_t ecx = arg2:2.w & 0x7ff8

if (ecx == 0x7ff8)
    return 3

if (ecx == 0x7ff0 && ((arg2 & 0x7ffff) != 0 || arg1 != 0))
    return 4

return 0
