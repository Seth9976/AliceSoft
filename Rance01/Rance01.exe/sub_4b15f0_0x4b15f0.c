// 函数: sub_4b15f0
// 地址: 0x4b15f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3

if (sub_4b1850(ebx, arg1, arg5) == 0 || sub_4b1e60(arg1, ebx, arg4, arg2, arg5) == 0)
    return 

arg1[0x19] = *arg2
arg1[0x1a] = arg2[1]
arg1[0x1b] = arg2[2]
int32_t edi_2 = arg1[0x15] - arg1[0x14]
int32_t ecx_6 = (ebx[1] - *ebx) s/ 0x3c
int32_t eax_4
int32_t edx_4
edx_4:eax_4 = muls.dp.d(0x92492493, edi_2)

if (edi_2 s/ 0x1c != ecx_6)
    sub_4b23d0(ecx_6, (edx_4 + edi_2) s>> 4, ecx_6, &arg1[0x14])

int32_t i = 0

if ((arg1[0x15] - arg1[0x14]) s/ 0x1c s> 0)
    long double x87_r7_1 = float.t(0)
    float ebp_1 = 0f
    long double x87_r6_1 = float.t(1)
    arg3 = 0f
    arg5 = nullptr
    
    do
        if (i s< 0)
            goto label_4b16f4
        
        int32_t ebp_2 = *ebx
        float var_8_1
        float edx_14
        float edi_7
        
        if (i s>= (ebx[1] - ebp_2) s/ 0x3c)
            ebp_1 = arg3
        label_4b16f4:
            edi_7 = fconvert.s(x87_r7_1)
            var_8_1 = fconvert.s(x87_r7_1)
            edx_14 = fconvert.s(x87_r7_1)
        else
            edi_7 = *(arg5 + ebp_2 + 0x24)
            var_8_1 = *(arg5 + ebp_2 + 0x28)
            edx_14 = *(arg5 + ebp_2 + 0x2c)
            ebp_1 = arg3
        
        int32_t* eax_18 = arg1[0x14]
        *(eax_18 i+ ebp_1) = edi_7
        *(eax_18 i+ ebp_1 + 4) = var_8_1
        *(eax_18 i+ ebp_1 + 8) = edx_14
        int32_t edx_17
        
        if (i s>= 0)
            int32_t edi_10 = ebx[1] - *ebx
            int32_t eax_19
            int32_t edx_15
            edx_15:eax_19 = muls.dp.d(0x88888889, edi_10)
            edx_17 = (edx_15 + edi_10) s>> 5
        
        if (i s< 0 || i s>= (edx_17 u>> 0x1f) + edx_17)
            arg3 = fconvert.s(x87_r6_1)
        else
            arg3 = fconvert.s(fconvert.t(*(arg5 + *ebx + 0x30)))
        
        *(arg1[0x14] i+ ebp_1 + 0xc) = fconvert.s(fconvert.t(arg3))
        int32_t edx_21
        
        if (i s>= 0)
            int32_t edi_12 = ebx[1] - *ebx
            int32_t eax_25
            int32_t edx_19
            edx_19:eax_25 = muls.dp.d(0x88888889, edi_12)
            edx_21 = (edx_19 + edi_12) s>> 5
        
        if (i s< 0 || i s>= (edx_21 u>> 0x1f) + edx_21)
            arg3 = fconvert.s(x87_r6_1)
        else
            arg3 = fconvert.s(fconvert.t(*(arg5 + *ebx + 0x34)))
        
        *(arg1[0x14] i+ ebp_1 + 0x10) = fconvert.s(fconvert.t(arg3))
        int32_t edx_25
        
        if (i s>= 0)
            int32_t edi_14 = ebx[1] - *ebx
            int32_t eax_31
            int32_t edx_23
            edx_23:eax_31 = muls.dp.d(0x88888889, edi_14)
            edx_25 = (edx_23 + edi_14) s>> 5
        
        if (i s< 0 || i s>= (edx_25 u>> 0x1f) + edx_25)
            arg3 = fconvert.s(x87_r6_1)
        else
            arg3 = fconvert.s(fconvert.t(*(arg5 + *ebx + 0x20)))
        
        *(arg1[0x14] i+ ebp_1 + 0x14) = fconvert.s(fconvert.t(arg3))
        int32_t edx_29
        
        if (i s>= 0)
            int32_t edi_16 = ebx[1] - *ebx
            int32_t eax_36
            int32_t edx_27
            edx_27:eax_36 = muls.dp.d(0x88888889, edi_16)
            edx_29 = (edx_27 + edi_16) s>> 5
        
        int32_t eax_39
        
        if (i s< 0 || i s>= (edx_29 u>> 0x1f) + edx_29)
            eax_39.b = 0
        else
            eax_39.b = *(arg5 + *ebx + 0x38)
        
        *(arg1[0x14] i+ ebp_1 + 0x18) = eax_39.b
        arg5 = &arg5[0xf]
        i += 1
        ebp_1 += 0x1c
        arg3 = ebp_1
    while (i s< (arg1[0x15] - arg1[0x14]) s/ 0x1c)

int32_t eax_12
eax_12.b = 1
