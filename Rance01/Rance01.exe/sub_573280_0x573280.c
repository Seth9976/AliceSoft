// 函数: sub_573280
// 地址: 0x573280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
int32_t var_58
int32_t var_54

if (*arg3 s< 0x100)
    int32_t eax_7 = sub_573920(arg2, arg3)
    bool cond:1_1 = arg2[4] != 0
    var_54 = eax_7
    int32_t ecx_3
    
    if (cond:1_1)
        ecx_3 = arg3[1]
    else
        ecx_3 = 0
    
    var_58 = ecx_3
    int32_t ecx_4 = edi[0x10]
    
    if (sub_573730(edi, ecx_4 * eax_7, ecx_4 * ecx_3) != 0 && sub_5739c0(edi, arg3) != 0)
        if (sub_573aa0(arg2, edi) == 0)
            return 
        
        goto label_573363
else if (sub_5734e0(edi, arg3, arg2, &var_54, &var_58) != 0)
label_573363:
    int32_t* var_88
    var_88.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg3[3]))))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 = sub_6b4ef0(mxcsr, x87control, var_88)
    int32_t eax_12 = sub_70c710(fconvert.t(fconvert.s(st0_1)))
    int32_t ecx_6 = arg3[1]
    
    if (eax_12 s>= ecx_6)
        eax_12 = ecx_6
    
    var_88.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg3[4]))))
    int32_t eax_13 = sub_70c710(fconvert.t(fconvert.s(sub_6b4ef0(mxcsr, x87control_1, var_88))))
    int32_t ecx_7 = arg3[1]
    
    if (eax_13 s< ecx_7)
        ecx_7 = eax_13
    
    long double x87_r7_10 = fconvert.t(arg3[3])
    long double x87_r6_1 = fconvert.t(fconvert.s(float.t(eax_12)))
    x87_r6_1 - x87_r7_10
    eax_13.w = (x87_r6_1 < x87_r7_10 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_10 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_10 = fconvert.t(arg3[3])
    
    float var_44_1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_10)))
    long double x87_r7_13 = fconvert.t(arg3[4])
    long double x87_r6_2 = fconvert.t(fconvert.s(float.t(ecx_7)))
    x87_r6_2 - x87_r7_13
    eax_13.w = (x87_r6_2 < x87_r7_13 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_2, x87_r7_13) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_13 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_13:1.b & 0x41) == 0)
        x87_r7_13 = fconvert.t(arg3[4])
    
    float var_50_6 = fconvert.s(fconvert.t(fconvert.s(x87_r7_13)))
    
    if (eax_12 s<= 0)
    label_573454:
        
        if (ecx_7 s<= 0)
        label_57349d:
            int32_t* eax_24 = sub_573c10(arg3, edi, var_54, var_58)
            
            if (eax_24 != 0)
                if (sub_573cc0(edi, eax_24, arg3) != 0)
                    return 
                
                (*(*eax_24 + 4))()
        else
            char eax_20
            int32_t ecx_10
            eax_20, ecx_10 = sub_572b40(ecx_7, var_54, &edi[0x25], var_58, ecx_7)
            
            if (eax_20 != 0)
                int32_t var_84_11 = ecx_10
                char eax_21
                eax_21, edi = sub_572c00(&edi[0x25], edi, &edi[2], fconvert.s(fconvert.t(var_50_6)))
                
                if (eax_21 != 0)
                    goto label_57349d
    else
        int32_t ecx_8 = var_58
        char eax_16
        int32_t ecx_9
        eax_16, ecx_9 = sub_572b40(ecx_8, var_54, &edi[0x12], ecx_8, eax_12)
        
        if (eax_16 != 0)
            int32_t var_84_8 = ecx_9
            char eax_17
            eax_17, edi = sub_572c00(&edi[0x12], edi, &edi[2], fconvert.s(fconvert.t(var_44_1)))
            
            if (eax_17 != 0)
                goto label_573454
else
    int32_t eax_1 = sub_573920(arg2, arg3)
    bool cond:2_1 = arg2[4] != 0
    var_54 = eax_1
    int32_t ecx_1
    
    if (cond:2_1)
        ecx_1 = arg3[1]
    else
        ecx_1 = 0
    
    int32_t eax_2 = edi[0x10]
    var_58 = ecx_1
    
    if (sub_573730(edi, eax_2 * eax_1, eax_2 * ecx_1) != 0 && sub_5738b0(edi) != 0)
        goto label_573363
