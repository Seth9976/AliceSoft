// 函数: sub_6314e0
// 地址: 0x6314e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 8))
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 8)
int32_t result = *(arg1 + 0xc) + 1
*(arg1 + 0xc) = result
LeaveCriticalSection(lpCriticalSection)
return result
