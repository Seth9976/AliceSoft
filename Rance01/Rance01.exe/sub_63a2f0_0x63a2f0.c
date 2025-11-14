// 函数: sub_63a2f0
// 地址: 0x63a2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = 0

if (*arg2 != 0)
    result = *(arg1 + 0x78)

if (arg2[1] != 0)
    result += *(arg1 + 0x94)

if (arg2[2] != 0)
    result += *(arg1 + 0xcc) + *(arg1 + 0xb0)

if (arg2[3] != 0)
    result += *(arg1 + 0x120) + *(arg1 + 0x104) + *(arg1 + 0xe8)

if (arg2[4] != 0)
    result += *(arg1 + 0x13c)

if (arg2[5] != 0)
    result += *(arg1 + 0x158)

if (arg2[6] != 0)
    result += *(arg1 + 0x174)

if (arg2[7] != 0)
    result += *(arg1 + 0x190)

if (arg2[8] != 0)
    result += *(arg1 + 0x1ac)

if (arg2[9] != 0)
    result += *(arg1 + 0x1c8)

if (arg2[0xa] != 0)
    result += *(arg1 + 0x1e4)

if (arg2[0xb] != 0)
    result += *(arg1 + 0x200)

if (arg2[0xc] != 0)
    result += *(arg1 + 0x21c)

if (arg2[0xd] != 0)
    result += *(arg1 + 0x238)

if (arg2[0xe] != 0)
    result += *(arg1 + 0x254)

if (arg2[0xf] != 0)
    result += *(arg1 + 0x270)

if (arg2[0x10] != 0)
    result += *(arg1 + 0x28c)

if (arg2[0x11] != 0)
    result += *(arg1 + 0x2a8)

if (arg2[0x12] != 0)
    result += *(arg1 + 0x2e0) + *(arg1 + 0x2c4)

if (arg2[0x13] == 0)
    return result

return result + *(arg1 + 0x334) + *(arg1 + 0x318) + *(arg1 + 0x2fc)
