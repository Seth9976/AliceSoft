// 函数: sub_65a530
// 地址: 0x65a530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpparts::CSplitWindowBorder::`vftable'{for `dpparts::CWindow'}
HGDIOBJ ho = arg1[0x1c]

if (ho != 0)
    DeleteObject(ho)
    HDC hdc = arg1[0x1b]
    
    if (hdc != 0)
        SelectObject(hdc, arg1[0x1d])
        DeleteDC(arg1[0x1b])
        arg1[0x1b] = 0
        arg1[0x1d] = 0
    
    arg1[0x1c] = 0
    arg1[0x19] = 0
    arg1[0x1a] = 0

HGDIOBJ ho_1 = arg1[0x1c]

if (ho_1 != 0)
    DeleteObject(ho_1)
    HDC hdc_1 = arg1[0x1b]
    
    if (hdc_1 != 0)
        SelectObject(hdc_1, arg1[0x1d])
        DeleteDC(arg1[0x1b])
        arg1[0x1b] = 0
        arg1[0x1d] = 0
    
    arg1[0x1c] = 0
    arg1[0x19] = 0
    arg1[0x1a] = 0

return sub_65e310(arg1) __tailcall
