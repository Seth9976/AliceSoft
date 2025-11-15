// 函数: __malloc_base
// 地址: 0x1000631c
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

uint32_t dwBytes = arg1

if (dwBytes u<= 0xffffffe0)
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t i
    
    do
        int32_t result = HeapAlloc(data_10017024, HEAP_NONE, dwBytes)
        
        if (result != 0)
            return result
        
        if (sub_10008455() == 0)
            break
        
        i = __callnewh(dwBytes)
    while (i != 0)

*__errno() = 0xc
return 0
