// 函数: sub_55ed80
// 地址: 0x55ed80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[3] = *arg1
int32_t ebx = arg2[1]
int128_t* lpMem = nullptr

if (ebx != 0)
    lpMem = HeapAlloc(data_797df0, HEAP_NONE, ebx << 2)
    sub_6c02a0(lpMem, *arg2, ebx << 2)

void* ecx_3 = lpMem + (ebx << 2)
BOOL result = lpMem

if (lpMem != ecx_3)
    do
        *arg1[3] = *result
        arg1[3] += 4
        result += 4
    while (result != ecx_3)

if (lpMem == 0)
    return result

return HeapFree(data_797df0, HEAP_NONE, lpMem)
