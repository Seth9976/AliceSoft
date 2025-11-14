// 函数: sub_6691e0
// 地址: 0x6691e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != arg2)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
    char* ecx_2 = *arg1
    int32_t edx_2 = edx_1 s>> 4
    uint32_t edi_2 = edx_2 u>> 0x1f
    int32_t edi_3 = edi_2 + edx_2
    
    if (edi_2 != neg.d(edx_2))
        int32_t eax_7
        int32_t edx_6
        edx_6:eax_7 = muls.dp.d(0x2e8ba2e9, arg1[1] - ecx_2)
        int32_t edx_7 = edx_6 s>> 4
        int32_t ebx_4 = (edx_7 u>> 0x1f) + edx_7
        
        if (edi_3 u<= ebx_4)
            int32_t* var_14_2 = arg2
            int32_t* var_1c_2 = arg2
            sub_663220(sub_6695e0(*arg2, arg2, ecx_2, arg2[1]), arg1[1])
            int32_t eax_11
            int32_t edx_9
            edx_9:eax_11 = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
            int32_t edx_10 = edx_9 s>> 4
            arg1[1] = ((edx_10 u>> 0x1f) + edx_10) * 0x58 + *arg1
            return arg1
        
        int32_t eax_18
        int32_t edx_13
        edx_13:eax_18 = muls.dp.d(0x2e8ba2e9, arg1[2] - ecx_2)
        int32_t edx_14 = edx_13 s>> 4
        
        if (edi_3 u<= (edx_14 u>> 0x1f) + edx_14)
            void* eax_22 = *arg2
            void* ebx_6 = ebx_4 * 0x58 + eax_22
            int32_t* var_14_3 = arg2
            int32_t edx_16 = sub_6695e0(eax_22, arg2, ecx_2, ebx_6)
            char* eax_23 = arg1[1]
            int32_t* var_1c_3 = arg2
            arg1[1] = sub_663460(eax_23, edx_16, ebx_6, arg2[1], eax_23)
            return arg1
        
        if (ecx_2 != 0)
            int32_t* var_14_4 = arg2
            sub_663220(ecx_2, arg1[1])
            int32_t var_18_4 = *arg1
            sub_6b4d5b()
        
        int32_t eax_28
        int32_t edx_18
        edx_18:eax_28 = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
        int32_t edx_19 = edx_18 s>> 4
        
        if (sub_663420((edx_19 u>> 0x1f) + edx_19, arg1) != 0)
            char* eax_33 = *arg1
            int32_t edx_20 = arg2[1]
            int32_t* var_14_5 = arg2
            arg1[1] = sub_663460(eax_33, edx_20, *arg2, edx_20, eax_33)
    else
        void* eax_2 = arg1[1]
        
        if (ecx_2 != eax_2)
            int32_t* var_14_1 = arg2
            char* eax_3 = sub_6695e0(eax_2, arg2, ecx_2, eax_2)
            int32_t* var_1c_1 = arg2
            sub_663220(eax_3, arg1[1])
            arg1[1] = eax_3

return arg1
