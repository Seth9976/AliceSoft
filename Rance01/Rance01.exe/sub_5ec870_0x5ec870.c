// 函数: sub_5ec870
// 地址: 0x5ec870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t edx_1 = arg2[1]
int32_t* ecx_1 = *arg2
int32_t eax_2 = (edx_1 - ecx_1) s>> 3

if (eax_2 != 0)
    int32_t* edi_3 = *arg1
    int32_t ebp_3 = (arg1[1] - edi_3) s>> 3
    
    if (eax_2 u<= ebp_3)
        sub_5ed2a0(eax_2, edx_1, ecx_1, edi_3)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 3 << 3)
        return 
    
    if (eax_2 u<= (arg1[2] - edi_3) s>> 3)
        void* ebp_4 = &ecx_1[ebp_3 * 2]
        sub_5ed2a0(eax_2, ebp_4, ecx_1, edi_3)
        int32_t* var_18_1 = arg2
        void* var_1c = ebp_4
        arg1[1] = sub_5813a0(arg1[1], arg2[1], arg2)
        return 
    
    if (edi_3 != 0)
        int32_t* var_14_3 = edi_3
        sub_6b4d5b()
    
    if (sub_5ec970(arg1, (arg2[1] - *arg2) s>> 3) != 0)
        int32_t* var_14_4 = arg2
        int32_t var_18_2 = *arg2
        arg1[1] = sub_5813a0(*arg1, arg2[1], arg2)
else
    int32_t* ecx_2 = *arg1
    int32_t* edx_2 = arg1[1]
    
    if (ecx_2 != edx_2)
        int32_t* eax_3 = edx_2
        
        if (edx_2 != edx_2)
            do
                *ecx_2 = *eax_3
                ecx_2[1] = eax_3[1]
                eax_3 = &eax_3[2]
                ecx_2 = &ecx_2[2]
            while (eax_3 != edx_2)
        
        arg1[1] = ecx_2
