// 函数: sub_5ff490
// 地址: 0x5ff490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg5 + 0x40) != arg1 || *(arg5 + 0x44) != arg4 || *(arg5 + 0x48) != arg3
        || *(arg5 + 0x4c) != arg2)
    *(arg5 + 0x40) = arg1
    *(arg5 + 0x44) = arg4
    *(arg5 + 0x48) = arg3
    *(arg5 + 0x4c) = arg2
    *(arg5 + 0x50) = 1

return arg5
