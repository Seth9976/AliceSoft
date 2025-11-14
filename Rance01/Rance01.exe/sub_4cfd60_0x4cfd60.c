// 函数: sub_4cfd60
// 地址: 0x4cfd60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg1
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x4ec4ec4f, arg1[1] - edi)
int32_t edx_2 = edx_1 s>> 4
int32_t esi_2 = (edx_2 u>> 0x1f) + edx_2

if (0x4ec4ec4 - arg2 u< esi_2)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_2
int32_t edx_5
edx_5:eax_2 = muls.dp.d(0x4ec4ec4f, arg1[2] - edi)
int32_t edx_6 = edx_5 s>> 4
int32_t esi_3 = esi_2 + arg2
int32_t result = (edx_6 u>> 0x1f) + edx_6

if (esi_3 u<= result)
    return result

uint32_t edx_8 = result u>> 1
int32_t eax_5

if (0x4ec4ec4 - edx_8 u>= result)
    eax_5 = result + edx_8
else
    eax_5 = 0

if (eax_5 u< esi_3)
    eax_5 = esi_3

return sub_4cfed0(arg1, eax_5) __tailcall
