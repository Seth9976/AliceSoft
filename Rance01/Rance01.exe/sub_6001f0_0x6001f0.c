// 函数: sub_6001f0
// 地址: 0x6001f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = arg1[1]
void* edi = *arg1
int32_t eax_3 = (ecx_1 - edi) s/ 0xc

if (eax_3 u> 0x400)
    int32_t* edx_4 = edi + 0x3000
    
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
        
        arg1[1] = edx_4
        return eax_4
else if (eax_3 u< 0x400)
    sub_4f5970(arg1, 0x400 - eax_3)
    float* edi_4 = arg1[1]
    int32_t ecx
    int32_t var_c_2 = ecx
    int32_t eax_5
    int32_t edx_6
    edx_6:eax_5 = muls.dp.d(0x2aaaaaab, edi_4 - *arg1)
    int32_t edx_7 = edx_6 s>> 1
    sub_6002b0(edi_4, edx_7, 0x400 - ((edx_7 u>> 0x1f) + edx_7))
    int32_t edi_5 = arg1[1]
    int32_t eax_10
    int32_t edx_8
    edx_8:eax_10 = muls.dp.d(0x2aaaaaab, edi_5 - *arg1)
    int32_t edx_9 = edx_8 s>> 1
    eax_3 = edi_5 + (0x400 - ((edx_9 u>> 0x1f) + edx_9)) * 0xc
    arg1[1] = eax_3

return eax_3
