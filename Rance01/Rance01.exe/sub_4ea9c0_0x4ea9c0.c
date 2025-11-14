// 函数: sub_4ea9c0
// 地址: 0x4ea9c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != arg2)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, arg2[1] - *arg2)
    int32_t edx_2 = edx_1 s>> 3
    uint32_t ecx_4 = edx_2 u>> 0x1f
    int32_t ecx_5 = ecx_4 + edx_2
    
    if (ecx_4 == neg.d(edx_2))
        sub_4eaf30(arg1)
        return arg1
    
    int32_t* edi_1 = *arg1
    int32_t eax_3
    int32_t edx_5
    edx_5:eax_3 = muls.dp.d(0x66666667, arg1[1] - edi_1)
    int32_t edx_6 = edx_5 s>> 3
    int32_t esi_4 = (edx_6 u>> 0x1f) + edx_6
    
    if (ecx_5 u<= esi_4)
        void* eax_5
        int32_t edx_7
        eax_5, edx_7 = sub_4eb0d0(edi_1, edx_6, *arg2, arg2[1])
        sub_4bd520(eax_5, edx_7, arg1[1])
        int32_t eax_6
        int32_t edx_8
        edx_8:eax_6 = muls.dp.d(0x66666667, arg2[1] - *arg2)
        int32_t edx_9 = edx_8 s>> 3
        arg1[1] = *arg1 + ((edx_9 u>> 0x1f) + edx_9) * 0x14
        return arg1
    
    int32_t eax_12
    int32_t edx_13
    edx_13:eax_12 = muls.dp.d(0x66666667, arg1[2] - edi_1)
    int32_t edx_14 = edx_13 s>> 3
    
    if (ecx_5 u> (edx_14 u>> 0x1f) + edx_14)
        if (edi_1 != 0)
            sub_4bd520(edi_1, edx_14, arg1[1])
            int32_t var_14_2 = *arg1
            sub_6b4d5b()
        
        int32_t eax_19
        int32_t edx_19
        edx_19:eax_19 = muls.dp.d(0x66666667, arg2[1] - *arg2)
        int32_t edx_20 = edx_19 s>> 3
        
        if (sub_4d5090(arg1, (edx_20 u>> 0x1f) + edx_20) != 0)
            int32_t* var_14_3 = arg2
            arg1[1] = sub_4eb430(*arg1, arg2, *arg2, arg2[1])
    else
        int32_t* ecx_11 = *arg2
        void* edx_16 = &ecx_11[esi_4 * 5]
        int32_t* edx_17 = sub_4eb0d0(edi_1, edx_16, ecx_11, edx_16)
        int32_t* var_14_1 = arg2
        arg1[1] = sub_4eb430(arg1[1], edx_17, edx_16, arg2[1])

return arg1
