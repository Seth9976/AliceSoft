// 函数: sub_6281e0
// 地址: 0x6281e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = *(arg1 + 0x16c)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x16c) = 0

HGDIOBJ ho_1 = *(arg1 + 0x170)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x170) = 0

HGDIOBJ ho_2 = *(arg1 + 0x174)

if (ho_2 != 0)
    DeleteObject(ho_2)
    *(arg1 + 0x174) = 0

int32_t var_c_4 = arg4
int32_t var_10 = arg3
int32_t var_14 = arg2
sub_621dd0(arg1)
return 0
