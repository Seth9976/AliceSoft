// 函数: sub_5596c0
// 地址: 0x5596c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_2 = sub_5604b0(arg1, arg2[1])

if (eax_2.b == 0)
    return eax_2

int32_t i = 0

if (arg2[1] u> 0)
    do
        int32_t* ecx_1 = *(*arg2 + (i << 2))
        int32_t eax_4 = arg1[1]
        
        if (eax_4 s< arg1[3] + 4)
            int32_t eax_5 = arg1[2]
            
            if (eax_4 + 0x40004 u>= eax_5)
                uint32_t dwBytes = eax_5 + eax_4 + 0x40004
                arg1[2] = dwBytes
                
                if (eax_5 != neg.d(eax_4 + 0x40004))
                    int32_t lpMem = *arg1
                    int32_t eax_7
                    
                    if (lpMem == 0)
                        eax_7 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                    else
                        eax_7 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
                    
                    *arg1 = eax_7
                    
                    if (eax_7 == 0)
                        eax_7.b = 0
                        return eax_7
            
            arg1[1] = eax_4 + 0x40004
        
        int32_t eax_8
        
        if (arg1[1] != 0)
            eax_8 = *arg1
        else
            eax_8 = 0
        
        *(arg1[3] + eax_8) = ecx_1
        arg1[3] += 4
        i += 1
    while (i u< arg2[1])

eax_2.b = 1
return eax_2
