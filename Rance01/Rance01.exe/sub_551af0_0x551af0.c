// 函数: sub_551af0
// 地址: 0x551af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t dwBytes

switch (arg2[0xd] - 0x10)
    case 0, 8
        for (int32_t i = arg1 - 1; i s>= arg3; i -= 1)
            dwBytes = arg2[1]
            
            if (i u>= dwBytes u>> 2)
                goto label_551b40
            
            if (dwBytes != 0)
                dwBytes = *arg2
            
            if (sub_552880(arg2[5], *(dwBytes + (i << 2))).b == 0)
                goto label_551b40
    case 1, 9
        for (int32_t i_1 = arg1 - 1; i_1 s>= arg3; i_1 -= 1)
            dwBytes = arg2[1]
            
            if (i_1 u>= dwBytes u>> 2)
                goto label_551b40
            
            if (dwBytes != 0)
                dwBytes = *arg2
            
            if (sub_552880(arg2[5], *(dwBytes + (i_1 << 2))).b == 0)
                goto label_551b40

if (arg3 s> 0)
    dwBytes = arg2[2]
    int32_t edi_1 = arg3 << 2
    
    if (edi_1 u< dwBytes)
    label_551bbd:
        arg2[1] = edi_1
        dwBytes.b = 1
        return dwBytes
    
    uint32_t dwBytes_1 = dwBytes
    dwBytes += edi_1
    arg2[2] = dwBytes
    
    if (dwBytes_1 == neg.d(edi_1))
        goto label_551bbd
    
    int32_t lpMem = *arg2
    
    if (lpMem == 0)
        dwBytes = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
    else
        dwBytes = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
    
    *arg2 = dwBytes
    
    if (dwBytes != 0)
        goto label_551bbd

label_551b40:
dwBytes.b = 0
return dwBytes
