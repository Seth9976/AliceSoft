// 函数: sub_610470
// 地址: 0x610470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hMem = arg1[1]
*arg1 = &dpanalysis::CMemory::`vftable'{for `IMemory'}

if (hMem != 0)
    hMem = GlobalUnlock(hMem)
    
    if (hMem != 1)
        hMem = GlobalFree(arg1[1])
        arg1[1] = hMem
        
        if (hMem == 0)
            arg1[2] = hMem
            arg1[3] = hMem

return hMem
