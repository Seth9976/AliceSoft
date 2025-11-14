// 函数: sub_571460
// 地址: 0x571460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t* ebx = arg4[1]
int32_t ebp = *arg4
int32_t result = (ebx - ebp) s/ 0x14

if (result u> arg1)
    return sub_571500(arg4, &var_4, ebp + arg1 * 0x14, ebx)

if (result u< arg1)
    sub_571560(arg4, arg1 - result)
    int32_t* ebx_1 = arg4[1]
    int32_t var_14_3 = var_4
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x66666667, ebx_1 - *arg4)
    int32_t edx_5 = edx_4 s>> 3
    int32_t edx_6 = edx_5 + (edx_5 u>> 0x1f)
    sub_5716e0(eax_7, edx_6, arg1 - edx_6, ebx_1)
    int32_t ebx_2 = arg4[1]
    int32_t eax_8
    int32_t edx_7
    edx_7:eax_8 = muls.dp.d(0x66666667, ebx_2 - *arg4)
    int32_t edx_8 = edx_7 s>> 3
    result = (edx_8 u>> 0x1f) + edx_8
    arg4[1] = ebx_2 + (arg1 - result) * 0x14

return result
