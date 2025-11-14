// 函数: sub_6349d0
// 地址: 0x6349d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_5 = arg2[1]
int32_t edx = *arg2
int32_t result = (ecx_5 - edx) s>> 5
int32_t var_4

if (result u> arg1)
    return sub_634a40(arg2, &var_4, (arg1 << 5) + edx, ecx_5)

if (result u< arg1)
    sub_634aa0(arg2, arg1 - result)
    int32_t* ecx_1 = arg2[1]
    int32_t var_10_2 = var_4
    int32_t eax_5 = (ecx_1 - *arg2) s>> 5
    int32_t edx_5 = arg1 - eax_5
    sub_634be0(eax_5, edx_5, ecx_1, edx_5)
    result = arg2[1]
    arg2[1] = ((arg1 - ((result - *arg2) s>> 5)) << 5) + result

return result
