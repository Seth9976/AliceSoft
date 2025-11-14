// 函数: sub_6352f0
// 地址: 0x6352f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = arg1[1]
*arg1 = &dpparts::CBrush::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    struct dpparts::CBrush::VTable** var_8_2 = arg1
    sub_6b4d5b()

return arg1
