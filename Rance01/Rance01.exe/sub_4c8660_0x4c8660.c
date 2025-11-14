// 函数: sub_4c8660
// 地址: 0x4c8660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_4 = arg2[1]
int32_t edx = *arg2
int32_t result = (ecx_4 - edx) s>> 6
int32_t var_4

if (result u> arg1)
    return sub_4c87d0(arg2, &var_4, (arg1 << 6) + edx, ecx_4)

if (result u< arg1)
    sub_4c8820(arg2, arg1 - result)
    int32_t edx_3 = arg2[1]
    int32_t var_10_2 = var_4
    int32_t eax_6 = (edx_3 - *arg2) s>> 6
    int32_t ecx_3 = arg1 - eax_6
    int32_t var_14_2 = ecx_3
    sub_4c89e0(eax_6, edx_3, ecx_3)
    result = arg2[1]
    arg2[1] = ((arg1 - ((result - *arg2) s>> 6)) << 6) + result

return result
