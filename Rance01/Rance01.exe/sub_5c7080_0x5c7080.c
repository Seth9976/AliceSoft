// 函数: sub_5c7080
// 地址: 0x5c7080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 4))
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 4)
int32_t result = *(arg1 + 8) + 1
*(arg1 + 8) = result
LeaveCriticalSection(lpCriticalSection)
return result
