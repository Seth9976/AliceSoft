// 函数: sub_6374b0
// 地址: 0x6374b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

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
