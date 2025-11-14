// 函数: sub_67d880
// 地址: 0x67d880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = arg2

if (result == *(*(arg1 + 0xc) + 8))
    result = *(arg1 + 0x1c)
    *(arg1 + 0x1c) = 0xffffffff
    *(arg1 + 0x18) += result
else if (result == *(*(arg1 + 0x10) + 8))
    result = *(arg1 + 0x20)
    *(arg1 + 0x20) = 0xffffffff
    *(arg1 + 0x18) += result
else if (result == *(*(arg1 + 0x14) + 8))
    result = *(arg1 + 0x24)
    *(arg1 + 0x24) = 0xffffffff
    *(arg1 + 0x18) += result

int32_t* ecx = *(arg1 + 0x2c)

if (ecx == 0)
    return result

return (*(*ecx + 0x1c))(1)
