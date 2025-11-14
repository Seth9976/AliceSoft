// 函数: _realloc
// 地址: 0x6b69c5
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return sub_6b5c43(arg2)

uint32_t dwBytes = arg2

if (dwBytes == 0)
    __free_base(arg1)
    return 0

int32_t edi
int32_t var_c_1 = edi
int32_t result

while (true)
    if (dwBytes u<= 0xffffffe0)
        if (dwBytes == 0)
            dwBytes += 1
        
        int32_t result_1 = HeapReAlloc(data_797930, HEAP_NONE, arg1, dwBytes)
        
        if (result_1 != 0)
            result = result_1
            break
        
        if (data_797934 == result_1)
            void* eax_7 = __errno()
            *eax_7 = sub_6b5d5e(GetLastError())
            result = result_1
            break
        
        if (__callnewh(dwBytes) == 0)
            void* eax_4 = __errno()
            *eax_4 = sub_6b5d5e(GetLastError())
        else
            continue
    else
        __callnewh(dwBytes)
        *__errno() = 0xc
    
    result = 0
    break

return result
