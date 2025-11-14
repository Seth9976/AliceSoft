// 函数: sub_5da740
// 地址: 0x5da740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x18) != 0)
    HDC hdc = *(arg1 + 0x20)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0x24))
        DeleteDC(*(arg1 + 0x20))
        *(arg1 + 0x20) = 0
        *(arg1 + 0x24) = 0
    
    DeleteObject(*(arg1 + 0x18))
    __builtin_memset(&arg1[4], 0, 0x1c)

*arg1 = 0
*(arg1 + 0x28) = 0
