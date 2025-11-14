// 函数: sub_5dca50
// 地址: 0x5dca50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = *(arg1 + 0x34)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x34) = 0

sub_5da740(arg1)
HGDIOBJ ho_1 = *(arg1 + 0x34)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x34) = 0

if (*(arg1 + 0x50) u>= 0x10)
    int32_t var_10_3 = *(arg1 + 0x3c)
    sub_6b4d5b()

*(arg1 + 0x50) = 0xf
*(arg1 + 0x4c) = 0
arg1[0x3c] = 0
return sub_5da740(arg1)
