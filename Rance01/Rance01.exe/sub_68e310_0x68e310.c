// 函数: sub_68e310
// 地址: 0x68e310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2

if (eax == *(*(arg1 + 0xc) + 8))
    *(arg1 + 0x28) = arg3
    return arg3

if (eax == *(*(arg1 + 0x10) + 8))
    *(arg1 + 0x2c) = arg3
    return arg3

if (eax == *(*(arg1 + 0x14) + 8))
    *(arg1 + 0x30) = arg3
    return arg3

if (eax == *(*(arg1 + 0x18) + 8))
    *(arg1 + 0x34) = arg3
    return arg3

if (eax == *(*(arg1 + 0x1c) + 8))
    *(arg1 + 0x38) = arg3
    return arg3

if (eax == *(*(arg1 + 0x20) + 8))
    eax = arg3
    *(arg1 + 0x3c) = eax

return eax
