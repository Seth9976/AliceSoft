// 函数: sub_620050
// 地址: 0x620050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpvariable::CTabWindow::`vftable'{for `dpvariable::CWindow'}
HGDIOBJ ho = arg1[0x5d]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x5d] = 0

if (arg1[0x64] u>= 0x10)
    int32_t var_14_2 = arg1[0x5f]
    sub_6b4d5b()

arg1[0x64] = 0xf
arg1[0x63] = 0
arg1[0x5f].b = 0
HGDIOBJ ho_1 = arg1[0x52]

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x52] = 0

if (arg1[0x59] u>= 0x10)
    int32_t var_14_4 = arg1[0x54]
    sub_6b4d5b()

arg1[0x59] = 0xf
arg1[0x58] = 0
arg1[0x54].b = 0
void* eax_1 = arg1[0x4c]

if (eax_1 != 0)
    struct dpvariable::CWindow::dpvariable::CTabWindow::VTable** var_14_5 = arg1
    sub_630680(eax_1, arg1[0x4d])
    int32_t var_18_1 = arg1[0x4c]
    sub_6b4d5b()

arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x3a] = &dpvariable::CDIBSurface::`vftable'{for `ISurface'}
sub_6b2880(&arg1[0x3a])
arg1[0x2c] = &dpvariable::CDIBSurface::`vftable'{for `ISurface'}
sub_6b2880(&arg1[0x2c])
return sub_62a7c0(arg1)
