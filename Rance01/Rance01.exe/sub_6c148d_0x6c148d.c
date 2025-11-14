// 函数: sub_6c148d
// 地址: 0x6c148d
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = data_78c474
FILETIME systemTimeAsFileTime
__builtin_memset(&systemTimeAsFileTime, 0, 8)
int32_t edi
int32_t var_1c = edi
int32_t result

if (eax == 0xbb40e64e || (0xffff0000 & eax) == 0)
    GetSystemTimeAsFileTime(&systemTimeAsFileTime)
    uint32_t esi_5 = systemTimeAsFileTime.dwHighDateTime ^ systemTimeAsFileTime.dwLowDateTime
        ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount()
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t var_10
    result = var_10 ^ performanceCount
    int32_t esi_6 = esi_5 ^ result
    
    if (esi_6 == 0xbb40e64e)
        esi_6 = 0xbb40e64f
    else if ((0xffff0000 & esi_6) == 0)
        result = (esi_6 | 0x4711) << 0x10
        esi_6 |= result
    
    data_78c474 = esi_6
    data_78c478 = not.d(esi_6)
else
    result = not.d(eax)
    data_78c478 = result

return result
