// 函数: sub_4310f0
// 地址: 0x4310f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0 && arg2 s>= 0 && arg4 s>= 0 && arg5 s>= 0)
    *(arg3 + 0x2c) = arg4
    *(arg3 + 0x30) = arg5
    *(arg3 + 0x34) = arg1
    *(arg3 + 0x38) = arg2
    *(*(arg3 + 0x40) + 0xa0) = arg4
    *(*(arg3 + 0x40) + 0xa4) = arg5
    *(*(arg3 + 0x40) + 0xa8) = arg1
    *(*(arg3 + 0x40) + 0xac) = arg2
    *(arg3 + 0x28) = 1

return arg3
