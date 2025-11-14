// 函数: sub_550c40
// 地址: 0x550c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t dwBytes = arg2[2]
int32_t edi_2 = arg1 * 4
arg2[1] = 0

if (edi_2 u>= dwBytes)
    uint32_t dwBytes_1 = dwBytes
    dwBytes += edi_2
    arg2[2] = dwBytes
    
    if (dwBytes_1 != neg.d(edi_2))
        int32_t lpMem = *arg2
        
        if (lpMem == 0)
            dwBytes = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
        else
            dwBytes = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
        
        *arg2 = dwBytes
        
        if (dwBytes == 0)
            dwBytes.b = 0
            return dwBytes

arg2[1] = edi_2
dwBytes.b = 1
return dwBytes
