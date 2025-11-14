// 函数: sub_616c10
// 地址: 0x616c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpanalysis::CTextMemory::`vftable'{for `dpanalysis::CMemory'}
HGLOBAL hMem = arg1[0x11]
arg1[0x10] = &dpanalysis::CMemory::`vftable'{for `IMemory'}

if (hMem != 0 && GlobalUnlock(hMem) != 1)
    HGLOBAL eax_2 = GlobalFree(arg1[0x11])
    arg1[0x11] = eax_2
    
    if (eax_2 == 0)
        arg1[0x12] = 0
        arg1[0x13] = 0

if (arg1[0xe] u>= 0x10)
    int32_t var_10_3 = arg1[9]
    sub_6b4d5b()

arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0
int32_t eax_3 = arg1[4]

if (eax_3 != 0)
    int32_t var_10_4 = eax_3
    sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
BOOL hMem_1 = arg1[1]
*arg1 = &dpanalysis::CMemory::`vftable'{for `IMemory'}

if (hMem_1 != 0)
    hMem_1 = GlobalUnlock(hMem_1)
    
    if (hMem_1 != 1)
        hMem_1 = GlobalFree(arg1[1])
        arg1[1] = hMem_1
        
        if (hMem_1 == 0)
            arg1[2] = 0
            arg1[3] = 0

return hMem_1
