// 函数: sub_424800
// 地址: 0x424800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *arg1
int32_t eax_2 = (arg1[1] - edx) s>> 1

if (0x7fffffff - arg3 u< eax_2)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = eax_2 + arg3
int32_t ecx_2 = (arg1[2] - edx) s>> 1

if (result u<= ecx_2)
    return result

uint32_t edx_2 = ecx_2 u>> 1
int32_t result_1

if (0x7fffffff - edx_2 u>= ecx_2)
    result_1 = ecx_2 + edx_2
else
    result_1 = 0

if (result_1 u< result)
    result_1 = result

return sub_4248d0(arg1, result_1)
