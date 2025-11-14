// 函数: sub_621dd0
// 地址: 0x621dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HDC hdc = *(arg1 + 0xc8)

if (hdc != 0)
    HGDIOBJ h = *(arg1 + 0xb4)
    
    if (h != 0)
        SelectObject(hdc, h)
        DeleteObject(*(arg1 + 0xb4))
        *(arg1 + 0xb4) = 0
    
    SelectObject(*(arg1 + 0xc8), *(arg1 + 0xbc))
    DeleteObject(*(arg1 + 0xb8))
    DeleteDC(*(arg1 + 0xc8))
    *(arg1 + 0xc8) = 0

HGDIOBJ ho = *(arg1 + 0xb0)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0xb0) = 0

return 0
