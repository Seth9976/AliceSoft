// 函数: sub_59ac60
// 地址: 0x59ac60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = arg2[1]
int32_t edx = *arg2
int32_t result = (ecx_7 - edx) s>> 4
int32_t var_4

if (result u> arg1)
    return sub_59acd0(arg2, &var_4, (arg1 << 4) + edx, ecx_7)

if (result u< arg1)
    sub_59ad40(arg2, arg1 - result)
    int32_t* eax_3 = arg2[1]
    int32_t var_10_2 = var_4
    int32_t edx_5 = (eax_3 - *arg2) s>> 4
    sub_59ae80(eax_3, edx_5, arg1 - edx_5, eax_3)
    result = arg2[1]
    arg2[1] = ((arg1 - ((result - *arg2) s>> 4)) << 4) + result

return result
