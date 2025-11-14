// 函数: sub_554040
// 地址: 0x554040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t dwBytes

switch (arg2[0xd] - 0x10)
    case 0, 8
        for (int32_t i = arg1 - 1; i s>= arg4; i -= 1)
            dwBytes = arg2[1]
            
            if (i u>= dwBytes u>> 2)
                goto label_55409a
            
            if (dwBytes != 0)
                dwBytes = *arg2
            
            if (sub_552880(arg3, *(dwBytes + (i << 2))).b == 0)
                goto label_55409a
    case 1, 9
        for (int32_t i_1 = arg1 - 1; i_1 s>= arg4; i_1 -= 1)
            dwBytes = arg2[1]
            
            if (i_1 u>= dwBytes u>> 2)
                goto label_55409a
            
            if (dwBytes != 0)
                dwBytes = *arg2
            
            if (sub_552880(arg3, *(dwBytes + (i_1 << 2))).b == 0)
                goto label_55409a

if (arg4 s> 0)
    dwBytes = arg2[2]
    int32_t esi_1 = arg4 << 2
    
    if (esi_1 u< dwBytes)
    label_554113:
        arg2[1] = esi_1
        dwBytes.b = 1
        return dwBytes
    
    uint32_t dwBytes_1 = dwBytes
    dwBytes += esi_1
    arg2[2] = dwBytes
    
    if (dwBytes_1 == neg.d(esi_1))
        goto label_554113
    
    int32_t lpMem = *arg2
    
    if (lpMem == 0)
        dwBytes = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
    else
        dwBytes = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
    
    *arg2 = dwBytes
    
    if (dwBytes != 0)
        goto label_554113

label_55409a:
dwBytes.b = 0
return dwBytes
