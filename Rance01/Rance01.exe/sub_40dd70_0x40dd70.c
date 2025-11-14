// 函数: sub_40dd70
// 地址: 0x40dd70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(*arg1 + 0x10))()
int32_t result = (*(*arg1 + 0x14))()
int32_t ecx_2 = *arg2

if (ecx_2 s< 0)
    *arg4 += ecx_2
    *arg2 = 0

int32_t ebp_1 = *arg2

if (*arg4 + ebp_1 s> eax_1)
    *arg4 = eax_1 - ebp_1

if (*arg4 s<= 0)
    result.b = 0
    return result

int32_t esi_1 = *arg3

if (esi_1 s< 0)
    *arg5 += esi_1
    *arg3 = 0

int32_t edx_3 = *arg3

if (*arg5 + edx_3 s> result)
    *arg5 = result - edx_3

result.b = *arg5 s> 0
return result
