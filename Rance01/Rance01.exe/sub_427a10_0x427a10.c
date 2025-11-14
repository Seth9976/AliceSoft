// 函数: sub_427a10
// 地址: 0x427a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_5 = arg1[2]

if (arg2 u> eax_5)
    int32_t lpMem = *arg1
    int32_t eax = eax_5 + arg2
    arg1[2] = eax
    
    if (lpMem != 0)
        int32_t eax_3 = HeapReAlloc(data_797df0, HEAP_NONE, lpMem, eax * 4)
        *arg1 = eax_3
        arg1[1] = arg2
        return eax_3
    
    eax_5 = HeapAlloc(data_797df0, HEAP_NONE, eax << 2)
    *arg1 = eax_5

arg1[1] = arg2
return eax_5
