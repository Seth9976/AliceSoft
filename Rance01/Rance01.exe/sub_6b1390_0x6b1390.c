// 函数: sub_6b1390
// 地址: 0x6b1390
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

HGDIOBJ ho = *(arg1 + 0x20)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x20) = 0

*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
HGDIOBJ ho_1 = *(arg1 + 0x20)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x20) = 0

*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0

if (*(arg1 + 0x48) u>= 0x10)
    int32_t var_10_6 = *(arg1 + 0x34)
    sub_6b4d5b()

*(arg1 + 0x48) = 0xf
*(arg1 + 0x44) = 0
*(arg1 + 0x34) = 0
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
