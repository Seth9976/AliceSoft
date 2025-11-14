// 函数: sub_4307a0
// 地址: 0x4307a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *arg1
int32_t eax_2 = (arg1[1] - edx) s>> 2

if (eax_2 u> 0x3ffffffe)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = eax_2 + 1
int32_t ecx_2 = (arg1[2] - edx) s>> 2

if (result u<= ecx_2)
    return result

uint32_t edx_2 = ecx_2 u>> 1
int32_t result_1

if (0x3fffffff - edx_2 u>= ecx_2)
    result_1 = ecx_2 + edx_2
else
    result_1 = 0

if (result_1 u< result)
    result_1 = result

return sub_6b0560(arg1, result_1)
