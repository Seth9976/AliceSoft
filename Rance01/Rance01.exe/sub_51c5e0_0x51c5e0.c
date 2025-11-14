// 函数: sub_51c5e0
// 地址: 0x51c5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = arg1[1]
int32_t edx = *arg1
int32_t eax_2 = (ecx_1 - edx) s>> 4

if (eax_2 u> 6)
    eax_2 = edx + 0x60
    
    if (eax_2 != ecx_1)
        int32_t* eax_3 = sub_5c9170(eax_2, ecx_1, ecx_1, eax_2)
        arg1[1] = eax_3
        return eax_3
else if (eax_2 u< 6)
    sub_5c8ee0(arg1, 6 - eax_2)
    float* eax_4 = arg1[1]
    int32_t ecx
    int32_t var_8_2 = ecx
    int32_t edx_5 = (eax_4 - *arg1) s>> 4
    sub_51c660(eax_4, edx_5, 6 - edx_5)
    eax_2 = arg1[1]
    arg1[1] = ((6 - ((eax_2 - *arg1) s>> 4)) << 4) + eax_2

return eax_2
