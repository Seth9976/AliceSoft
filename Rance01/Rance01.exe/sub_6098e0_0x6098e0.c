// 函数: sub_6098e0
// 地址: 0x6098e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
int32_t result = (ebx - ebp) s/ 0x50
int32_t var_4

if (result u> arg1)
    return sub_609c90(arg2, &var_4, arg1 * 0x50 + ebp, ebx)

if (result u< arg1)
    sub_609d00(arg2, arg1 - result)
    struct IMemory::dpanalysis::CMemory::VTable** ebx_1 = arg2[1]
    int32_t var_18_3 = var_4
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = muls.dp.d(0x66666667, ebx_1 - *arg2)
    int32_t edx_4 = edx_3 s>> 5
    sub_60a4c0(ebx_1, arg1 - ((edx_4 u>> 0x1f) + edx_4))
    int32_t ebx_2 = arg2[1]
    int32_t eax_11
    int32_t edx_5
    edx_5:eax_11 = muls.dp.d(0x66666667, ebx_2 - *arg2)
    int32_t edx_6 = edx_5 s>> 5
    result = (edx_6 u>> 0x1f) + edx_6
    arg2[1] = (arg1 - result) * 0x50 + ebx_2

return result
