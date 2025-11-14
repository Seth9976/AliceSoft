// 函数: sub_54fab0
// 地址: 0x54fab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s<= 0)
    arg2[9] = 0
else
    sub_427a10(&arg2[8], arg1)

uint32_t dwBytes = arg2[2]
int32_t esi_2 = arg1 << 2
arg2[1] = 0

if (esi_2 u>= dwBytes)
    uint32_t dwBytes_1 = dwBytes
    dwBytes += esi_2
    arg2[2] = dwBytes
    
    if (dwBytes_1 != neg.d(esi_2))
        int32_t lpMem = *arg2
        
        if (lpMem == 0)
            dwBytes = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
        else
            dwBytes = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
        
        *arg2 = dwBytes
        
        if (dwBytes == 0)
            dwBytes.b = 0
            return dwBytes

arg2[1] = esi_2
dwBytes.b = 1
return dwBytes
