// 函数: sub_5ec170
// 地址: 0x5ec170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
void* ebx = arg4[1]
int32_t ebp = *arg4
int32_t result = (ebx - ebp) s/ 0x6c

if (result u> arg1)
    return sub_5ec2c0(arg4, &var_4, arg1 * 0x6c + ebp, ebx)

if (result u< arg1)
    sub_5ec320(arg4, arg1 - result)
    float* ecx_6 = arg4[1]
    int32_t var_14_3 = var_4
    int32_t eax_4
    int32_t edx_5
    edx_5:eax_4 = muls.dp.d(0x4bda12f7, ecx_6 - *arg4)
    int32_t edx_6 = edx_5 s>> 5
    int32_t eax_7 = (edx_6 u>> 0x1f) + edx_6
    int32_t edx_8 = arg1 - eax_7
    sub_5ec5d0(eax_7, edx_8, ecx_6, edx_8)
    int32_t ebx_1 = arg4[1]
    int32_t eax_8
    int32_t edx_9
    edx_9:eax_8 = muls.dp.d(0x4bda12f7, ebx_1 - *arg4)
    int32_t edx_10 = edx_9 s>> 5
    result = (edx_10 u>> 0x1f) + edx_10
    arg4[1] = (arg1 - result) * 0x6c + ebx_1

return result
