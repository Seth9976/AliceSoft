// 函数: sub_6a5b60
// 地址: 0x6a5b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho_3 = *(arg1 + 0x10)

if (ho_3 != 0)
    DeleteObject(ho_3)
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
int32_t eax = *(arg1 + 0xa0)

if (eax != 0)
    int32_t var_c_5 = eax
    sub_6b4d5b()

*(arg1 + 0xa0) = 0
*(arg1 + 0xa4) = 0
*(arg1 + 0xa8) = 0
HGDIOBJ ho_1 = *(arg1 + 0x58)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x58) = 0

*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0

if (*(arg1 + 0x80) u>= 0x10)
    int32_t var_c_7 = *(arg1 + 0x6c)
    sub_6b4d5b()

*(arg1 + 0x80) = 0xf
*(arg1 + 0x7c) = 0
*(arg1 + 0x6c) = 0
HGDIOBJ ho_2 = *(arg1 + 0x20)

if (ho_2 != 0)
    DeleteObject(ho_2)
    *(arg1 + 0x20) = 0

*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0

if (*(arg1 + 0x48) u>= 0x10)
    int32_t var_c_9 = *(arg1 + 0x34)
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
