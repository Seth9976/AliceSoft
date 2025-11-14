// 函数: sub_6967d0
// 地址: 0x6967d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2

if (eax == *(*(arg1 + 0x10) + 8))
    int32_t eax_1 = *(arg1 + 0x28)
    *(arg1 + 0x24) += eax_1
    *(arg1 + 0x28) = 0xffffffff
    return eax_1

if (eax == *(*(arg1 + 0x14) + 8))
    int32_t eax_2 = *(arg1 + 0x2c)
    *(arg1 + 0x24) += eax_2
    *(arg1 + 0x2c) = 0xffffffff
    return eax_2

if (eax == *(*(arg1 + 0x18) + 8))
    int32_t eax_3 = *(arg1 + 0x30)
    *(arg1 + 0x24) += eax_3
    *(arg1 + 0x30) = 0xffffffff
    return eax_3

if (eax == *(*(arg1 + 0x1c) + 8))
    eax = *(arg1 + 0x34)
    *(arg1 + 0x24) += eax
    *(arg1 + 0x34) = 0xffffffff

return eax
