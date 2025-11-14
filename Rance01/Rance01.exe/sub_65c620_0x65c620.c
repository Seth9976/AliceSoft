// 函数: sub_65c620
// 地址: 0x65c620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpparts::CViewWindow::`vftable'{for `dpparts::CWindow'}
HGDIOBJ ho = arg1[0x5e]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x5e] = 0

arg1[0x5f] = 0
arg1[0x60] = 0
HGDIOBJ ho_1 = arg1[0x6d]

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x6d] = 0

HGDIOBJ ho_2 = arg1[0x72]
arg1[0x71] = &dpparts::CBrush::`vftable'

if (ho_2 != 0)
    DeleteObject(ho_2)
    arg1[0x72] = 0

HGDIOBJ ho_3 = arg1[0x6d]
arg1[0x6c] = &dpparts::CBrush::`vftable'

if (ho_3 != 0)
    DeleteObject(ho_3)
    arg1[0x6d] = 0

HGDIOBJ ho_4 = arg1[0x5e]
arg1[0x5d] = &dpparts::CFont::`vftable'

if (ho_4 != 0)
    DeleteObject(ho_4)
    arg1[0x5e] = 0

arg1[0x5f] = 0
arg1[0x60] = 0

if (arg1[0x68] u>= 0x10)
    int32_t var_14_6 = arg1[0x63]
    sub_6b4d5b()

arg1[0x68] = 0xf
arg1[0x67] = 0
arg1[0x63].b = 0
int32_t var_14_7 = arg1[0x58]
arg1[0x52] = &dpparts::CGuiToolbar::`vftable'
sub_6b53b2()
arg1[0x58] = 0
int32_t eax_1 = arg1[0x54]

if (eax_1 != 0)
    int32_t var_14_8 = eax_1
    sub_6b4d5b()

arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56] = 0
arg1[0x4b] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x44] = &dpparts::CGuiScrollBar::`vftable'
int32_t eax_2 = arg1[0x37]

if (eax_2 != 0)
    int32_t var_14_9 = eax_2
    sub_6b4d5b()

arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39] = 0
HGDIOBJ ho_5 = arg1[0x33]

if (ho_5 != 0)
    DeleteObject(ho_5)
    HDC hdc = arg1[0x32]
    
    if (hdc != 0)
        SelectObject(hdc, arg1[0x34])
        DeleteDC(arg1[0x32])
        arg1[0x32] = 0
        arg1[0x34] = 0
    
    arg1[0x33] = 0
    arg1[0x30] = 0
    arg1[0x31] = 0

HGDIOBJ ho_6 = arg1[0x2b]

if (ho_6 != 0)
    DeleteObject(ho_6)
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
return sub_65e310(arg1) __tailcall
