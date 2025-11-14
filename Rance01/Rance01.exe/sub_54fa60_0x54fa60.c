// 函数: sub_54fa60
// 地址: 0x54fa60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t dwBytes = arg1[2]
arg1[1] = 0

if (arg2 u>= dwBytes)
    uint32_t dwBytes_1 = dwBytes
    dwBytes += arg2
    arg1[2] = dwBytes
    
    if (dwBytes_1 != neg.d(arg2))
        int32_t lpMem = *arg1
        
        if (lpMem == 0)
            dwBytes = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
        else
            dwBytes = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
        
        *arg1 = dwBytes
        
        if (dwBytes == 0)
            dwBytes.b = 0
            return dwBytes

arg1[1] = arg2
dwBytes.b = 1
return dwBytes
