// 函数: sub_572140
// 地址: 0x572140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = arg2[1]
int32_t edx = *arg2
int32_t result = (ecx_7 - edx) s>> 4
int32_t var_4

if (result u> arg1)
    return sub_5721b0(arg2, &var_4, (arg1 << 4) + edx, ecx_7)

if (result u< arg1)
    sub_572220(arg2, arg1 - result)
    int32_t* eax_3 = arg2[1]
    int32_t var_10_2 = var_4
    int32_t edx_5 = (eax_3 - *arg2) s>> 4
    sub_5723c0(eax_3, edx_5, arg1 - edx_5, eax_3)
    result = arg2[1]
    arg2[1] = ((arg1 - ((result - *arg2) s>> 4)) << 4) + result

return result
