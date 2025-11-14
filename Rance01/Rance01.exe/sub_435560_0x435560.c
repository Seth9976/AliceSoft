// 函数: sub_435560
// 地址: 0x435560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    arg1.b = 0
    return arg1

if (*(arg3 + 0x24) == *(arg1 + 0x24) && *(arg3 + 0x28) == *(arg1 + 0x28)
        && *(arg3 + 0x2c) == *(arg1 + 0x2c) && *(arg3 + 0x30) == *(arg1 + 0x30))
    return 1

return 0
