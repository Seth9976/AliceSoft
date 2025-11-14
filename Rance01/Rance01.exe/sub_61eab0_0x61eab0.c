// 函数: sub_61eab0
// 地址: 0x61eab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL ho = *(arg1 + 4)

if (ho != 0)
    ho = DeleteObject(ho)
    *(arg1 + 4) = 0

if (*(arg1 + 0x20) u>= 0x10)
    int32_t var_4_2 = *(arg1 + 0xc)
    ho = sub_6b4d5b()

*(arg1 + 0x20) = 0xf
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
return ho
