// 函数: sub_64dd60
// 地址: 0x64dd60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho_3 = arg1[0xa]

if (ho_3 != 0)
    DeleteObject(ho_3)
    HDC hdc = arg1[9]
    
    if (hdc != 0)
        SelectObject(hdc, arg1[0xb])
        DeleteDC(arg1[9])
        arg1[9] = 0
        arg1[0xb] = 0
    
    arg1[0xa] = 0
    arg1[7] = 0
    arg1[8] = 0

HGDIOBJ ho = arg1[0x11]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x11] = 0

arg1[0x12] = 0
arg1[0x13] = 0
HGDIOBJ ho_1 = arg1[0x11]
arg1[0x10] = &dpparts::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x11] = 0

arg1[0x12] = 0
arg1[0x13] = 0

if (arg1[0x1b] u>= 0x10)
    int32_t var_10_6 = arg1[0x16]
    sub_6b4d5b()

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
HGDIOBJ ho_2 = arg1[0xa]

if (ho_2 != 0)
    DeleteObject(ho_2)
    HDC hdc_1 = arg1[9]
    
    if (hdc_1 != 0)
        SelectObject(hdc_1, arg1[0xb])
        DeleteDC(arg1[9])
        arg1[9] = 0
        arg1[0xb] = 0
    
    arg1[0xa] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t* result = *arg1

if (result != 0)
    sub_6a58e0(result, arg1[1])
    int32_t var_10_10 = *arg1
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
