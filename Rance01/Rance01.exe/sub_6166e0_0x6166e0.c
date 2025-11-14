// 函数: sub_6166e0
// 地址: 0x6166e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HDC hdc = *(arg1 + 0xa4)

if (hdc != 0)
    HGDIOBJ h = *(arg1 + 0xa0)
    
    if (h != 0)
        SelectObject(hdc, h)
        DeleteObject(*(arg1 + 0xa0))
        *(arg1 + 0xa0) = 0
    
    SelectObject(*(arg1 + 0xa4), *(arg1 + 0xac))
    DeleteObject(*(arg1 + 0xa8))
    DeleteDC(*(arg1 + 0xa4))
    *(arg1 + 0xa4) = 0

HGDIOBJ ho = *(arg1 + 0x9c)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x9c) = 0

return 0
