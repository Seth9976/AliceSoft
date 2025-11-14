// 函数: sub_4d3d70
// 地址: 0x4d3d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg1
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, arg1[1] - edi)
int32_t edx_2 = edx_1 s>> 3
int32_t esi_2 = (edx_2 u>> 0x1f) + edx_2

if (esi_2 u> 0xccccccb)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_1
int32_t edx_5
edx_5:eax_1 = muls.dp.d(0x66666667, arg1[2] - edi)
int32_t edx_6 = edx_5 s>> 3
int32_t result = (edx_6 u>> 0x1f) + edx_6

if (esi_2 + 1 u<= result)
    return result

uint32_t edx_8 = result u>> 1
int32_t eax_4

if (0xccccccc - edx_8 u>= result)
    eax_4 = result + edx_8
else
    eax_4 = 0

if (eax_4 u< esi_2 + 1)
    eax_4 = esi_2 + 1

return sub_4d4f80(arg1, eax_4)
