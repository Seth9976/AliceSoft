// 函数: sub_52cda0
// 地址: 0x52cda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = arg2[1]
int32_t edx = *arg2
int32_t eax_2 = (ecx_7 - edx) s>> 4
int32_t var_4

if (eax_2 u> arg1)
    eax_2 = edx + arg1 * 0x10
    
    if (eax_2 != ecx_7)
        int32_t var_10_1 = var_4
        int32_t* eax_3
        int32_t edx_2
        eax_3, edx_2 = sub_52d750(eax_2, var_4, ecx_7, ecx_7)
        int32_t var_18 = var_4
        int32_t var_1c = arg2[1]
        int32_t eax_6 = sub_52d870(eax_3, edx_2)
        arg2[1] = eax_3
        return eax_6
else if (eax_2 u< arg1)
    sub_52cef0(arg2, arg1 - eax_2)
    int32_t* eax_7 = arg2[1]
    int32_t var_10_2 = var_4
    int32_t edx_8 = (eax_7 - *arg2) s>> 4
    sub_52d690(eax_7, edx_8, arg1 - edx_8, eax_7)
    eax_2 = arg2[1]
    arg2[1] = ((arg1 - ((eax_2 - *arg2) s>> 4)) << 4) + eax_2
return eax_2
