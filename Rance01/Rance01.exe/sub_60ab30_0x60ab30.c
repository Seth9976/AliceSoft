// 函数: sub_60ab30
// 地址: 0x60ab30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != arg2)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x6bca1af3, arg2[1] - *arg2)
    int32_t edx_2 = edx_1 s>> 5
    uint32_t edi_2 = edx_2 u>> 0x1f
    int32_t edi_3 = edi_2 + edx_2
    
    if (edi_2 != neg.d(edx_2))
        void* ebp_1 = *arg1
        int32_t eax_7
        int32_t edx_4
        edx_4:eax_7 = muls.dp.d(0x6bca1af3, arg1[1] - ebp_1)
        int32_t edx_5 = edx_4 s>> 5
        int32_t ecx_8 = (edx_5 u>> 0x1f) + edx_5
        
        if (edi_3 u<= ecx_8)
            int32_t* var_10_2 = arg2
            void* var_14_2 = ebp_1
            int32_t var_18_2 = arg2[1]
            int32_t* var_1c = arg2
            sub_60a6e0(sub_60b260(*arg2, edx_5, arg2), arg1[1])
            int32_t eax_11
            int32_t edx_7
            edx_7:eax_11 = muls.dp.d(0x6bca1af3, arg2[1] - *arg2)
            int32_t edx_8 = edx_7 s>> 5
            arg1[1] = ((edx_8 u>> 0x1f) + edx_8) * 0x4c + *arg1
            return arg1
        
        int32_t eax_18
        int32_t edx_11
        edx_11:eax_18 = muls.dp.d(0x6bca1af3, arg1[2] - ebp_1)
        int32_t edx_12 = edx_11 s>> 5
        
        if (edi_3 u<= (edx_12 u>> 0x1f) + edx_12)
            void* eax_22 = *arg2
            void* edi_6 = eax_22 + ecx_8 * 0x4c
            int32_t* var_10_3 = arg2
            void* var_14_3 = ebp_1
            void* var_18_3 = edi_6
            sub_60b260(eax_22, edx_12, arg2)
            int32_t* eax_23 = arg1[1]
            int32_t* var_1c_1 = arg2
            arg1[1] = sub_60b400(eax_23, arg2, edi_6, arg2[1], eax_23)
            return arg1
        
        if (ebp_1 != 0)
            int32_t* var_10_4 = arg2
            sub_60a6e0(ebp_1, arg1[1])
            int32_t var_14_4 = *arg1
            sub_6b4d5b()
        
        int32_t eax_28
        int32_t edx_14
        edx_14:eax_28 = muls.dp.d(0x6bca1af3, arg2[1] - *arg2)
        int32_t edx_15 = edx_14 s>> 5
        
        if (sub_61aa60((edx_15 u>> 0x1f) + edx_15, arg1) != 0)
            int32_t* eax_33 = *arg1
            int32_t edx_16 = arg2[1]
            int32_t* var_10_5 = arg2
            arg1[1] = sub_60b400(eax_33, edx_16, *arg2, edx_16, eax_33)
    else
        void* eax_2 = arg1[1]
        int32_t* ecx_3 = *arg1
        
        if (ecx_3 != eax_2)
            int32_t* __saved_ebp = arg2
            int32_t* var_10_1 = ecx_3
            void* var_14_1 = eax_2
            int32_t* eax_3 = sub_60b260(eax_2, arg2, ecx_3)
            int32_t* var_18_1 = arg2
            sub_60a6e0(eax_3, arg1[1])
            arg1[1] = eax_3

return arg1
