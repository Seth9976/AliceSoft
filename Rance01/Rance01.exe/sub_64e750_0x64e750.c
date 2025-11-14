// 函数: sub_64e750
// 地址: 0x64e750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho_2 = *(arg1 + 0x10)

if (ho_2 != 0)
    DeleteObject(ho_2)
    HDC hdc = *(arg1 + 0xc)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0x14))
        DeleteDC(*(arg1 + 0xc))
        *(arg1 + 0xc) = 0
        *(arg1 + 0x14) = 0
    
    *(arg1 + 0x10) = 0
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0

HGDIOBJ ho = *(arg1 + 0x24)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x24) = 0

*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
int32_t eax = *(arg1 + 0x6c)

if (eax != 0)
    int32_t var_10_5 = eax
    sub_6b4d5b()

*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
HGDIOBJ ho_1 = *(arg1 + 0x24)
*(arg1 + 0x20) = &dpparts::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x24) = 0

*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0

if (*(arg1 + 0x4c) u>= 0x10)
    int32_t var_10_7 = *(arg1 + 0x38)
    sub_6b4d5b()

*(arg1 + 0x4c) = 0xf
*(arg1 + 0x48) = 0
*(arg1 + 0x38) = 0
HGDIOBJ result = *(arg1 + 0x10)

if (result != 0)
    DeleteObject(result)
    result = *(arg1 + 0xc)
    
    if (result != 0)
        SelectObject(result, *(arg1 + 0x14))
        result = DeleteDC(*(arg1 + 0xc))
        *(arg1 + 0xc) = 0
        *(arg1 + 0x14) = 0
    
    *(arg1 + 0x10) = 0
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0

return result
