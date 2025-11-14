// 函数: sub_4b2330
// 地址: 0x4b2330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t ebx = arg4[1]
int32_t ebp = *arg4
int32_t result = (ebx - ebp) s/ 0x24

if (result u> arg1)
    return sub_4b2480(arg4, &var_4, ebp + arg1 * 0x24, ebx)

if (result u< arg1)
    sub_4b2500(arg4, arg1 - result)
    int32_t ebx_1 = arg4[1]
    int32_t* var_14_3 = var_4
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x38e38e39, ebx_1 - *arg4)
    int32_t edx_5 = edx_4 s>> 3
    sub_4b27d0(ebx_1, arg1 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t ebx_2 = arg4[1]
    int32_t eax_9
    int32_t edx_8
    edx_8:eax_9 = muls.dp.d(0x38e38e39, ebx_2 - *arg4)
    int32_t edx_9 = edx_8 s>> 3
    result = (edx_9 u>> 0x1f) + edx_9
    arg4[1] = ebx_2 + (arg1 - result) * 0x24

return result
