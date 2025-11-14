// 函数: sub_5c8ce0
// 地址: 0x5c8ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
char* ebx = arg4[1]
int32_t ebp = *arg4
int32_t result = (ebx - ebp) s/ 0x30

if (result u> arg1)
    return sub_5c8e00(arg4, &var_4, arg1 * 0x30 + ebp, ebx)

if (result u< arg1)
    sub_5c8e60(arg4, arg1 - result)
    void* ecx_6 = arg4[1]
    int32_t var_14_3 = var_4
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x2aaaaaab, ecx_6 - *arg4)
    int32_t edx_6 = edx_5 s>> 3
    int32_t eax_10 = (edx_6 u>> 0x1f) + edx_6
    int32_t edx_8 = arg1 - eax_10
    sub_5c91b0(eax_10, edx_8, ecx_6, edx_8)
    int32_t ebx_1 = arg4[1]
    int32_t eax_11
    int32_t edx_9
    edx_9:eax_11 = muls.dp.d(0x2aaaaaab, ebx_1 - *arg4)
    int32_t edx_10 = edx_9 s>> 3
    result = (edx_10 u>> 0x1f) + edx_10
    arg4[1] = (arg1 - result) * 0x30 + ebx_1

return result
