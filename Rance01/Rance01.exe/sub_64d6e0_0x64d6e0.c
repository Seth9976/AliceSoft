// 函数: sub_64d6e0
// 地址: 0x64d6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL ho = arg1[1]
*arg1 = &dpparts::CFont::`vftable'

if (ho != 0)
    ho = DeleteObject(ho)
    arg1[1] = 0

arg1[2] = 0
arg1[3] = 0

if (arg1[0xb] u>= 0x10)
    int32_t var_c_2 = arg1[6]
    ho = sub_6b4d5b()

arg1[0xa] = 0
arg1[0xb] = 0xf
arg1[6].b = 0
return ho
