// 函数: sub_6b2880
// 地址: 0x6b2880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x1c) != 0)
    HDC hdc = *(arg1 + 0x24)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0x28))
        DeleteDC(*(arg1 + 0x24))
        *(arg1 + 0x24) = 0
        *(arg1 + 0x28) = 0
    
    DeleteObject(*(arg1 + 0x1c))
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x18) = 0

*(arg1 + 4) = 0
*(arg1 + 0x2c) = 0
