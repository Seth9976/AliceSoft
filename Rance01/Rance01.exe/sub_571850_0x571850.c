// 函数: sub_571850
// 地址: 0x571850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = arg2[1]
int32_t ebx = *arg2
int32_t eax_3 = (ecx_1 - ebx) s/ 0xc

if (eax_3 u> arg1)
    eax_3 = arg1 * 3
    int32_t* edx_4 = ebx + (eax_3 << 2)
    
    if (edx_4 != ecx_1)
        int32_t* eax_4 = ecx_1
        
        if (ecx_1 != ecx_1)
            do
                *edx_4 = *eax_4
                edx_4[1] = eax_4[1]
                edx_4[2] = eax_4[2]
                eax_4 = &eax_4[3]
                edx_4 = &edx_4[3]
            while (eax_4 != ecx_1)
        
        arg2[1] = edx_4
        return eax_4
else if (eax_3 u< arg1)
    sub_571910(arg2, arg1 - eax_3)
    int32_t* ebx_1 = arg2[1]
    int32_t ecx
    int32_t var_10_2 = ecx
    int32_t eax_5
    int32_t edx_6
    edx_6:eax_5 = muls.dp.d(0x2aaaaaab, ebx_1 - *arg2)
    int32_t edx_7 = edx_6 s>> 1
    sub_580d40(ebx_1, edx_7, arg1 - ((edx_7 u>> 0x1f) + edx_7))
    int32_t ebx_2 = arg2[1]
    int32_t eax_10
    int32_t edx_8
    edx_8:eax_10 = muls.dp.d(0x2aaaaaab, ebx_2 - *arg2)
    int32_t edx_9 = edx_8 s>> 1
    eax_3 = ebx_2 + (arg1 - ((edx_9 u>> 0x1f) + edx_9)) * 0xc
    arg2[1] = eax_3

return eax_3
