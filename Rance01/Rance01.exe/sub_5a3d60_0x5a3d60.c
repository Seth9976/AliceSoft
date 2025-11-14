// 函数: sub_5a3d60
// 地址: 0x5a3d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = *(arg1 + 0x16bc)

if (ecx_2 s> 8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    *(arg1 + 0x14) += 1
else if (ecx_2 s> 0)
    uint32_t ebx
    ebx.b = *(arg1 + 0x16b8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = ebx.b
    *(arg1 + 0x14) += 1

*(arg1 + 0x16b8) = 0
*(arg1 + 0x16bc) = 0
