// 函数: sub_4cfd00
// 地址: 0x4cfd00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *arg1
int32_t eax_1 = (arg1[1] - esi) s>> 5

if (0x7ffffff - arg2 u< eax_1)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = eax_1 + arg2
int32_t edx_2 = (arg1[2] - esi) s>> 5

if (result u<= edx_2)
    return result

uint32_t esi_2 = edx_2 u>> 1
int32_t result_1

if (0x7ffffff - esi_2 u>= edx_2)
    result_1 = edx_2 + esi_2
else
    result_1 = 0

if (result_1 u< result)
    result_1 = result

return sub_4cfde0(arg1, result_1)
