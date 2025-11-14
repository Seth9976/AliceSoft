// 函数: sub_614bb0
// 地址: 0x614bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpanalysis::CTabWindow::`vftable'{for `dpanalysis::CWindow'}
HGDIOBJ ho = arg1[0x58]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x58] = 0

if (arg1[0x5f] u>= 0x10)
    int32_t var_14_2 = arg1[0x5a]
    sub_6b4d5b()

arg1[0x5f] = 0xf
arg1[0x5e] = 0
arg1[0x5a].b = 0
HGDIOBJ ho_1 = arg1[0x4d]

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x4d] = 0

if (arg1[0x54] u>= 0x10)
    int32_t var_14_4 = arg1[0x4f]
    sub_6b4d5b()

arg1[0x54] = 0xf
arg1[0x53] = 0
arg1[0x4f].b = 0
void* eax_1 = arg1[0x47]

if (eax_1 != 0)
    struct dpanalysis::CWindow::dpanalysis::CTabWindow::VTable** var_14_5 = arg1
    sub_630680(eax_1, arg1[0x48])
    int32_t var_18_1 = arg1[0x47]
    sub_6b4d5b()

arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x35] = &dpanalysis::CDIBSurface::`vftable'{for `ISurface'}
sub_60cf40(&arg1[0x35])
arg1[0x27] = &dpanalysis::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_60cf40(&arg1[0x27])
*arg1 = &dpanalysis::CWindow::`vftable'

if (arg1[0xd] u>= 0x10)
    int32_t var_14_6 = arg1[8]
    result = sub_6b4d5b()

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[6] u>= 0x10)
    int32_t var_14_7 = arg1[1]
    result = sub_6b4d5b()

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
return result
