// 函数: sub_52f820
// 地址: 0x52f820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != arg2)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
    void* ecx_3 = *arg1
    int32_t edx_2 = edx_1 s>> 3
    uint32_t edi_2 = edx_2 u>> 0x1f
    int32_t edi_3 = edi_2 + edx_2
    
    if (edi_2 != neg.d(edx_2))
        int32_t eax_5
        int32_t edx_6
        edx_6:eax_5 = muls.dp.d(0x2e8ba2e9, arg1[1] - ecx_3)
        int32_t edx_7 = edx_6 s>> 3
        int32_t ebx_4 = (edx_7 u>> 0x1f) + edx_7
        
        if (edi_3 u<= ebx_4)
            int32_t* var_10_2 = arg2
            sub_52f330(sub_52fc30(*arg2, edx_7, ecx_3, arg2[1]), arg1[1])
            int32_t eax_10
            int32_t edx_8
            edx_8:eax_10 = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
            int32_t edx_9 = edx_8 s>> 3
            arg1[1] = ((edx_9 u>> 0x1f) + edx_9) * 0x2c + *arg1
            return arg1
        
        int32_t eax_12
        int32_t edx_12
        edx_12:eax_12 = muls.dp.d(0x2e8ba2e9, arg1[2] - ecx_3)
        int32_t edx_13 = edx_12 s>> 3
        
        if (edi_3 u<= (edx_13 u>> 0x1f) + edx_13)
            void* eax_16 = *arg2
            void* ebx_6 = ebx_4 * 0x2c + eax_16
            int32_t* var_10_3 = arg2
            int32_t edx_15 = sub_52fc30(eax_16, arg2, ecx_3, ebx_6)
            char* eax_17 = arg1[1]
            int32_t* var_18_1 = arg2
            arg1[1] = sub_55cf10(eax_17, edx_15, ebx_6, arg2[1], eax_17)
            return arg1
        
        if (ecx_3 != 0)
            sub_52f330(ecx_3, arg1[1])
            int32_t var_10_4 = *arg1
            sub_6b4d5b()
        
        int32_t eax_21
        int32_t edx_17
        edx_17:eax_21 = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
        int32_t edx_18 = edx_17 s>> 3
        
        if (sub_52f990((edx_18 u>> 0x1f) + edx_18, arg1) != 0)
            char* eax_26 = *arg1
            int32_t edx_19 = arg2[1]
            int32_t* var_10_5 = arg2
            arg1[1] = sub_55cf10(eax_26, edx_19, *arg2, edx_19, eax_26)
    else
        void* eax_2 = arg1[1]
        
        if (ecx_3 != eax_2)
            int32_t* var_10_1 = arg2
            void* eax_3 = sub_52fc30(eax_2, arg2, ecx_3, eax_2)
            sub_52f330(eax_3, arg1[1])
            arg1[1] = eax_3

return arg1
