// 函数: sub_62f2b0
// 地址: 0x62f2b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dplogviewer::CTabWindow::`vftable'{for `win32only::CWindowCallback'}
HGDIOBJ ho = arg1[0x54]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x54] = 0

if (arg1[0x5b] u>= 0x10)
    int32_t var_14_2 = arg1[0x56]
    sub_6b4d5b()

arg1[0x5b] = 0xf
arg1[0x5a] = 0
arg1[0x56].b = 0
HGDIOBJ ho_1 = arg1[0x49]

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x49] = 0

if (arg1[0x50] u>= 0x10)
    int32_t var_14_4 = arg1[0x4b]
    sub_6b4d5b()

arg1[0x50] = 0xf
arg1[0x4f] = 0
arg1[0x4b].b = 0
void* eax_1 = arg1[0x43]

if (eax_1 != 0)
    struct win32only::CWindowCallback::dplogviewer::CTabWindow::VTable** var_14_5 = arg1
    sub_630680(eax_1, arg1[0x44])
    int32_t var_18_1 = arg1[0x43]
    sub_6b4d5b()

arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x32] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
sub_62c310(&arg1[0x32])
arg1[0x25] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
sub_62c310(&arg1[0x25])
return sub_6b37f0(&arg1[1])
