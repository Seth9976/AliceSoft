// 函数: sub_59ca00
// 地址: 0x59ca00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = arg2[1]
int32_t edx = *arg2
int32_t result = (ecx_7 - edx) s>> 5
int32_t var_4

if (result u> arg1)
    return sub_59ca70(arg2, &var_4, (arg1 << 5) + edx, ecx_7)

if (result u< arg1)
    sub_59cae0(arg2, arg1 - result)
    int32_t* eax_3 = arg2[1]
    int32_t var_10_2 = var_4
    int32_t edx_5 = (eax_3 - *arg2) s>> 5
    sub_59cc20(eax_3, edx_5, arg1 - edx_5, eax_3)
    result = arg2[1]
    arg2[1] = ((arg1 - ((result - *arg2) s>> 5)) << 5) + result

return result
