// 函数: sub_536780
// 地址: 0x536780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t edx_1 = arg2[1]
int32_t* ecx_1 = *arg2
int32_t eax_2 = (edx_1 - ecx_1) s>> 2

if (eax_2 != 0)
    int32_t* edi_2 = *arg1
    int32_t ebp_3 = (arg1[1] - edi_2) s>> 2
    
    if (eax_2 u<= ebp_3)
        sub_536880(eax_2, edx_1, ecx_1, edi_2)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 2 << 2)
        return 
    
    if (eax_2 u<= (arg1[2] - edi_2) s>> 2)
        void* ebp_4 = &ecx_1[ebp_3]
        sub_536880(eax_2, ebp_4, ecx_1, edi_2)
        int32_t* var_18_1 = arg2
        void* var_1c = ebp_4
        arg1[1] = sub_6582d0(arg1[1], arg2[1], arg2)
        return 
    
    if (edi_2 != 0)
        int32_t* var_14_3 = edi_2
        sub_6b4d5b()
    
    if (sub_618020(arg1, (arg2[1] - *arg2) s>> 2) != 0)
        int32_t* var_14_4 = arg2
        int32_t var_18_2 = *arg2
        arg1[1] = sub_6582d0(*arg1, arg2[1], arg2)
else
    int32_t* edx_2 = *arg1
    int32_t* ecx_2 = arg1[1]
    
    if (edx_2 != ecx_2)
        int32_t* eax_3 = ecx_2
        
        if (ecx_2 != ecx_2)
            do
                *edx_2 = *eax_3
                eax_3 = &eax_3[1]
                edx_2 = &edx_2[1]
            while (eax_3 != ecx_2)
        
        arg1[1] = edx_2
