// 函数: sub_56cbe0
// 地址: 0x56cbe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1

if (arg2 s< 0)
    return 

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, *(arg3 + 8) - *(arg3 + 4))
int32_t edx_2 = edx_1 s>> 4

if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
    return 

if (edi s< 0)
    *(*(arg3 + 4) + arg2 * 0x28) = 0
    return 

if (edi s> 0x64)
    edi = 0x64

*(*(arg3 + 4) + arg2 * 0x28) = edi
