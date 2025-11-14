// 函数: sub_5d3660
// 地址: 0x5d3660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
CRITICAL_SECTION* lpCriticalSection = *(arg2 + 0xa4)
var_4 = 0
EnterCriticalSection(lpCriticalSection)
int32_t* eax = *(arg2 + 0x1c)
int32_t eax_2 = (*(*eax + 0x10))(eax, &var_4, 0)
CRITICAL_SECTION* lpCriticalSection_1 = *(arg2 + 0xa4)

if (eax_2 != 0)
    LeaveCriticalSection(lpCriticalSection_1)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

*arg3 = var_4
LeaveCriticalSection(lpCriticalSection_1)
int32_t eax_5
eax_5.b = 1
return eax_5
