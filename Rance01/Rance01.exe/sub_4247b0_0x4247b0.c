// 函数: sub_4247b0
// 地址: 0x4247b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *arg1
int32_t eax_1 = arg1[1] - edx

if (0xffffffff - arg3 u< eax_1)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = eax_1 + arg3
int32_t ecx_1 = arg1[2] - edx

if (result u<= ecx_1)
    return result

uint32_t edx_2 = ecx_1 u>> 1
int32_t result_1

if (0xffffffff - edx_2 u>= ecx_1)
    result_1 = ecx_1 + edx_2
else
    result_1 = 0

if (result_1 u< result)
    result_1 = result

return sub_424860(arg1, result_1)
