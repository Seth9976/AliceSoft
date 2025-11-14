// 函数: sub_610590
// 地址: 0x610590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hMem = *(arg1 + 4)

if (hMem != 0)
    hMem = GlobalUnlock(hMem)
    
    if (hMem != 1)
        hMem = GlobalFree(*(arg1 + 4))
        *(arg1 + 4) = hMem
        
        if (hMem == 0)
            *(arg1 + 8) = hMem
            *(arg1 + 0xc) = hMem

return hMem
