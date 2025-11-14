// 函数: sub_6104b0
// 地址: 0x6104b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGLOBAL hMem

if (arg2 s> 0)
    (*(*arg1 + 0x10))()
    hMem = GlobalAlloc(GMEM_MOVEABLE, arg2)
    arg1[1] = hMem
    
    if (hMem != 0)
        int32_t eax_1 = GlobalLock(hMem)
        arg1[2] = eax_1
        
        if (eax_1 != 0)
            arg1[3] = arg2
            eax_1.b = 1
            return eax_1
        
        GlobalFree(arg1[1])
        arg1[1] = 0
        arg1[2] = 0

hMem.b = 0
return hMem
