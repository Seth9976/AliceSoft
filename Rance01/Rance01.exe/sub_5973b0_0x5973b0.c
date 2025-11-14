// 函数: sub_5973b0
// 地址: 0x5973b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 8))
*(arg1 + 4) += 1
int32_t result = *(arg1 + 4)
LeaveCriticalSection(*(arg1 + 8))
return result
