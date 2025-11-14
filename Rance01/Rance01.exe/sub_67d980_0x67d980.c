// 函数: sub_67d980
// 地址: 0x67d980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x2c)

if (ecx == 0)
    return arg1

if (arg2 == *(*(arg1 + 0xc) + 8))
    *(arg1 + 0x1c) = arg3
    return (*(*ecx + 0x1c))(1)

if (arg2 == *(*(arg1 + 0x10) + 8))
    *(arg1 + 0x20) = arg3
    return (*(*ecx + 0x1c))(1)

if (arg2 == *(*(arg1 + 0x14) + 8))
    *(arg1 + 0x24) = arg3

return (*(*ecx + 0x1c))(1)
