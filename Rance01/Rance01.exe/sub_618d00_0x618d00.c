// 函数: sub_618d00
// 地址: 0x618d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg2 + 0x7c) = *arg1
arg1[1] = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(arg2 + 0x28) - *(arg2 + 0x24))
int32_t edx_1 = edx s>> 5
int32_t i = 0

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t ebx_1 = 0
    int32_t edx_3
    
    do
        if (sub_618d80(*(arg2 + 0x24) + ebx_1, arg2) == 0)
            return 0
        
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = muls.dp.d(0x6bca1af3, *(arg2 + 0x28) - *(arg2 + 0x24))
        edx_3 = edx_2 s>> 5
        i += 1
        ebx_1 += 0x4c
    while (i s< (edx_3 u>> 0x1f) + edx_3)

sub_61a0c0(arg2 + 0x7c)
LRESULT result
result.b = 1
return result
