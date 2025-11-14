// 函数: sub_610510
// 地址: 0x610510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hMem

if (arg2 s> 0)
    HGLOBAL hMem_1 = arg1[1]
    
    if (hMem_1 == 0)
        return (*(*arg1 + 8))(arg2) != 0
    
    if (GlobalUnlock(hMem_1) != 1)
        hMem = GlobalReAlloc(arg1[1], arg2, 2)
        arg1[1] = hMem
        
        if (hMem != 0)
            int32_t eax_3 = GlobalLock(hMem)
            arg1[2] = eax_3
            
            if (eax_3 != 0)
                arg1[3] = arg2
                eax_3.b = 1
                return eax_3
            
            GlobalFree(arg1[1])
            arg1[1] = 0
        
        arg1[2] = 0
        arg1[3] = 0

hMem.b = 0
return hMem
