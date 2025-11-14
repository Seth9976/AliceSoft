// 函数: sub_60c040
// 地址: 0x60c040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpanalysis::CBPWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
void* result = arg1[0x30]

if (result != 0)
    int32_t ecx
    int32_t var_10_1 = ecx
    sub_535e80(result, arg1[0x31])
    int32_t var_14_1 = arg1[0x30]
    result = sub_6b4d5b()

arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
*arg1 = &dpanalysis::CWindow::`vftable'

if (arg1[0xd] u>= 0x10)
    int32_t var_10_2 = arg1[8]
    result = sub_6b4d5b()

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[6] u>= 0x10)
    int32_t var_10_3 = arg1[1]
    result = sub_6b4d5b()

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
return result
