// 函数: sub_52ef30
// 地址: 0x52ef30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = arg2[1]
int32_t edx = *arg2
int32_t eax_2 = (ecx_7 - edx) s>> 4

if (eax_2 u> arg1)
    int32_t* esi_2 = (arg1 << 4) + edx
    
    if (esi_2 != ecx_7)
        int32_t* eax_3 = sub_5c9170(eax_2, ecx_7, ecx_7, esi_2)
        arg2[1] = eax_3
        return eax_3
else if (eax_2 u< arg1)
    sub_5c8ee0(arg2, arg1 - eax_2)
    int32_t* eax_4 = arg2[1]
    int32_t var_4
    int32_t var_10_2 = var_4
    int32_t edx_6 = (eax_4 - *arg2) s>> 4
    sub_52efb0(eax_4, edx_6, arg1 - edx_6)
    eax_2 = arg2[1]
    arg2[1] = ((arg1 - ((eax_2 - *arg2) s>> 4)) << 4) + eax_2

return eax_2
