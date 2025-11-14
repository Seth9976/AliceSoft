// 函数: sub_67a320
// 地址: 0x67a320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2

if (eax == *(*(arg1 + 0x10) + 8))
    *(arg1 + 0x1c) = arg3
    return arg3

if (eax == *(*(arg1 + 0x14) + 8))
    eax = arg3
    *(arg1 + 0x20) = eax

return eax
