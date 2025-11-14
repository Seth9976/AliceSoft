// 函数: sub_55b250
// 地址: 0x55b250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
void* ebx = arg4[1]
int32_t ebp = *arg4
int32_t result = (ebx - ebp) s/ 0x44

if (result u> arg1)
    return sub_55b300(arg4, &var_4, ebp + arg1 * 0x44, ebx)

if (result u< arg1)
    sub_55b360(arg4, arg1 - result)
    void* ecx_4 = arg4[1]
    int32_t var_14_3 = var_4
    int32_t eax_9
    int32_t edx_6
    edx_6:eax_9 = muls.dp.d(0x78787879, ecx_4 - *arg4)
    int32_t edx_7 = edx_6 s>> 5
    int32_t eax_12 = (edx_7 u>> 0x1f) + edx_7
    int32_t edx_9 = arg1 - eax_12
    sub_55b510(eax_12, edx_9, ecx_4, edx_9)
    int32_t ebx_1 = arg4[1]
    int32_t eax_13
    int32_t edx_10
    edx_10:eax_13 = muls.dp.d(0x78787879, ebx_1 - *arg4)
    int32_t edx_11 = edx_10 s>> 5
    result = (edx_11 u>> 0x1f) + edx_11
    arg4[1] = ebx_1 + (arg1 - result) * 0x44

return result
