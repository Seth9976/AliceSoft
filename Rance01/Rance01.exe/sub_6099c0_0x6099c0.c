// 函数: sub_6099c0
// 地址: 0x6099c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
int32_t result = (ebx - ebp) s/ 0x18
int32_t var_4

if (result u> arg1)
    return sub_609dd0(arg2, &var_4, ebp + arg1 * 0x18, ebx)

if (result u< arg1)
    sub_609e30(arg2, arg1 - result)
    int32_t* ebx_1 = arg2[1]
    int32_t var_18_3 = var_4
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x2aaaaaab, ebx_1 - *arg2)
    int32_t edx_5 = edx_4 s>> 2
    int32_t edx_6 = edx_5 + (edx_5 u>> 0x1f)
    sub_60a5b0(eax_7, edx_6, arg1 - edx_6, ebx_1)
    int32_t ebx_2 = arg2[1]
    int32_t eax_8
    int32_t edx_7
    edx_7:eax_8 = muls.dp.d(0x2aaaaaab, ebx_2 - *arg2)
    int32_t edx_8 = edx_7 s>> 2
    result = (edx_8 u>> 0x1f) + edx_8
    arg2[1] = ebx_2 + (arg1 - result) * 0x18

return result
