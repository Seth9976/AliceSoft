// 函数: sub_65bad0
// 地址: 0x65bad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpparts::CThumbnailWindow::`vftable'{for `dpparts::CWindow'}
HGDIOBJ ho = arg1[0x33]

if (ho != 0)
    DeleteObject(ho)
    HDC hdc = arg1[0x32]
    
    if (hdc != 0)
        SelectObject(hdc, arg1[0x34])
        DeleteDC(arg1[0x32])
        arg1[0x32] = 0
        arg1[0x34] = 0
    
    arg1[0x33] = 0
    arg1[0x30] = 0
    arg1[0x31] = 0

HGDIOBJ ho_1 = arg1[0x2b]

if (ho_1 != 0)
    DeleteObject(ho_1)
    HDC hdc_1 = arg1[0x2a]
    
    if (hdc_1 != 0)
        SelectObject(hdc_1, arg1[0x2c])
        DeleteDC(arg1[0x2a])
        arg1[0x2a] = 0
        arg1[0x2c] = 0
    
    arg1[0x2b] = 0
    arg1[0x28] = 0
    arg1[0x29] = 0

sub_657b90(&arg1[0x1e])
int32_t eax = arg1[0x19]

if (eax != 0)
    int32_t var_14_7 = eax
    sub_6b4d5b()

arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
return sub_65e310(arg1) __tailcall
