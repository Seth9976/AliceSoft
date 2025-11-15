// 函数: ___vcrt_uninitialize_locks
// 地址: 0x10004bfa
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t i_1 = data_10016c18

if (i_1 != 0)
    CRITICAL_SECTION* lpCriticalSection = i_1 * 0x18 + 0x10016be8
    int32_t i
    
    do
        DeleteCriticalSection(lpCriticalSection)
        data_10016c18 -= 1
        lpCriticalSection -= 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
