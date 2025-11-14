// 函数: sub_67a390
// 地址: 0x67a390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = arg2

if (result == *(*(arg1 + 0x10) + 8))
    *(arg1 + 0x18) += *(arg1 + 0x1c)
    *(arg1 + 0x1c) = 0xffffffff

if (result == *(*(arg1 + 0x14) + 8))
    result = *(arg1 + 0x20)
    *(arg1 + 0x18) += result
    *(arg1 + 0x20) = 0xffffffff

return result
