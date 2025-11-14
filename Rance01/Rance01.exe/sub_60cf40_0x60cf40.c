// 函数: sub_60cf40
// 地址: 0x60cf40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x20) != 0)
    HDC hdc = *(arg1 + 0x28)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0x2c))
        DeleteDC(*(arg1 + 0x28))
        *(arg1 + 0x28) = 0
        *(arg1 + 0x2c) = 0
    
    DeleteObject(*(arg1 + 0x20))
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x18) = 0

*(arg1 + 4) = 0
*(arg1 + 0x1c) = 0
