// 函数: sub_562770
// 地址: 0x562770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_6 = arg1[1]
void* edx = *arg1
int32_t eax_2 = (ecx_6 - edx) s>> 3

if (eax_2 u> 0xa)
    int32_t* edx_1 = edx + 0x50
    
    if (edx_1 != ecx_6)
        int32_t* eax_3 = ecx_6
        
        if (ecx_6 != ecx_6)
            do
                *edx_1 = *eax_3
                edx_1[1] = eax_3[1]
                eax_3 = &eax_3[2]
                edx_1 = &edx_1[2]
            while (eax_3 != ecx_6)
        
        arg1[1] = edx_1
        return eax_3
else if (eax_2 u< 0xa)
    sub_562800(arg1, 0xa - eax_2)
    int32_t* eax_4 = arg1[1]
    int32_t var_4
    int32_t var_10_1 = var_4
    int32_t edx_5 = (eax_4 - *arg1) s>> 3
    sub_562930(eax_4, edx_5, 0xa - edx_5)
    int32_t eax_5 = arg1[1]
    eax_2 = eax_5 + ((0xa - ((eax_5 - *arg1) s>> 3)) << 3)
    arg1[1] = eax_2

return eax_2
