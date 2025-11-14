// 函数: sub_5bd0e0
// 地址: 0x5bd0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t i = *ebp
int32_t edi = 0
int32_t i_2 = i
int32_t var_14 = 0

if (i s<= 0)
    return 

long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(ebp[1] + 0x1f0)) - fconvert.t(arg6)))
int32_t ebx_1 = ebp[5]
long double x87_r4_1 = fconvert.t(0.10000000149011612)
int32_t var_4_1 = ebx_1

do
    int32_t edx_1 = *(ebx_1 + (edi << 2))
    int32_t eax_1 = edi << 2
    int32_t var_10_1 = eax_1
    int32_t eax_2 = edi + 1
    long double x87_r3_2 = fconvert.t(fconvert.s(fconvert.t(*(eax_1 + arg3))))
    
    for (; eax_2 s< i; i = i_2)
        if (*(ebx_1 + var_10_1 + 4) != edx_1)
            i = i_2
            break
        
        int32_t ecx_1 = eax_2
        int32_t edi_1 = ecx_1 << 2
        long double x87_r2_1 = fconvert.t(*(edi_1 + arg3))
        var_14 = ecx_1
        x87_r2_1 - x87_r3_2
        var_10_1 = edi_1
        eax_2.w = (x87_r2_1 < x87_r3_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_1, x87_r3_2) ? 1 : 0) << 0xa
            | (x87_r2_1 == x87_r3_2 ? 1 : 0) << 0xe | 0x1800
        
        if ((eax_2:1.b & 0x41) == 0)
            x87_r4_1 = x87_r3_2
            x87_r3_2 = fconvert.t(fconvert.s(fconvert.t(*(edi_1 + arg3))))
        
        edi = var_14
        eax_2 = ecx_1 + 1
    
    long double x87_r2_3 = x87_r3_2 + fconvert.t(6.0)
    long double x87_r1_1 = fconvert.t(*(arg4 + (edi << 2)))
    x87_r1_1 - x87_r2_3
    int32_t eax_3
    eax_3.w = (x87_r1_1 < x87_r2_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r1_1, x87_r2_3) ? 1 : 0) << 0xa
        | (x87_r1_1 == x87_r2_3 ? 1 : 0) << 0xe | 0x1800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        int32_t edx_2 = edx_1 s>> (ebp[8]).b
        
        if (edx_2 s>= 0x11)
            edx_2 = 0x10
        else if (edx_2 s< 0)
            edx_2 = 0
        
        int32_t esi_2 = *(arg2 + (edx_2 << 2))
        int32_t edx_4 = *(ebx_1 + (edi << 2)) - ebp[7]
        float edi_2 = ebp[9]
        int32_t ebx_2 = ebp[0xa]
        int32_t eax_4 = sub_70c710((x87_r3_2 + x87_r7_2 - fconvert.t(30.0)) * x87_r4_1)
        int32_t ecx_4
        ecx_4.b = eax_4 s<= 0
        int32_t eax_5 = eax_4 & (ecx_4 - 1)
        
        if (eax_5 s>= 7)
            eax_5 = 7
        
        float* esi_3 = *(esi_2 + (eax_5 << 2))
        int32_t eax_6 = sub_70c710(fconvert.t(esi_3[1]))
        int32_t esi_4 = sub_70c710((fconvert.t(*esi_3) - fconvert.t(16.0)) * float.t(edi_2)
            + float.t(edx_4) - float.t(edi_2 s>> 1))
        int32_t i_1 = sub_70c710(fconvert.t(*esi_3))
        
        if (i_1 s< eax_6)
            if (eax_6 - i_1 s>= 4)
                void* edx_9 = &esi_3[i_1 + 4]
                
                do
                    if (esi_4 s> 0)
                        long double x87_r2_17 = fconvert.t(*(arg5 + (esi_4 << 2)))
                        long double x87_r1_2 =
                            fconvert.t(fconvert.s(fconvert.t(*(edx_9 - 8)) + x87_r3_2))
                        x87_r1_2 - x87_r2_17
                        int32_t eax_11
                        eax_11.w = (x87_r1_2 < x87_r2_17 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_2, x87_r2_17) ? 1 : 0) << 0xa
                            | (x87_r1_2 == x87_r2_17 ? 1 : 0) << 0xe | 0x800
                        x87_r3_2 = x87_r1_2
                        
                        if ((eax_11:1.b & 0x41) != 0)
                            x87_r3_2 = x87_r2_17
                        else
                            *(arg5 + (esi_4 << 2)) = fconvert.s(x87_r2_17)
                    
                    int32_t esi_5 = esi_4 i+ edi_2
                    
                    if (esi_5 s>= ebx_2)
                        goto label_5bd38e
                    
                    if (esi_5 s> 0)
                        long double x87_r2_20 = fconvert.t(*(arg5 + (esi_5 << 2)))
                        long double x87_r1_3 =
                            fconvert.t(fconvert.s(fconvert.t(*(edx_9 - 4)) + x87_r3_2))
                        x87_r1_3 - x87_r2_20
                        int32_t eax_13
                        eax_13.w = (x87_r1_3 < x87_r2_20 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_3, x87_r2_20) ? 1 : 0) << 0xa
                            | (x87_r1_3 == x87_r2_20 ? 1 : 0) << 0xe | 0x800
                        x87_r3_2 = x87_r1_3
                        
                        if ((eax_13:1.b & 0x41) != 0)
                            x87_r3_2 = x87_r2_20
                        else
                            *(arg5 + (esi_5 << 2)) = fconvert.s(x87_r2_20)
                    
                    int32_t esi_6 = esi_5 i+ edi_2
                    
                    if (esi_6 s>= ebx_2)
                        goto label_5bd38e
                    
                    if (esi_6 s> 0)
                        long double x87_r2_23 = fconvert.t(*(arg5 + (esi_6 << 2)))
                        long double x87_r1_4 = fconvert.t(fconvert.s(fconvert.t(*edx_9) + x87_r3_2))
                        x87_r1_4 - x87_r2_23
                        int32_t eax_15
                        eax_15.w = (x87_r1_4 < x87_r2_23 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_4, x87_r2_23) ? 1 : 0) << 0xa
                            | (x87_r1_4 == x87_r2_23 ? 1 : 0) << 0xe | 0x800
                        x87_r3_2 = x87_r1_4
                        
                        if ((eax_15:1.b & 0x41) != 0)
                            x87_r3_2 = x87_r2_23
                        else
                            *(arg5 + (esi_6 << 2)) = fconvert.s(x87_r2_23)
                    
                    int32_t esi_7 = esi_6 i+ edi_2
                    
                    if (esi_7 s>= ebx_2)
                        goto label_5bd38e
                    
                    if (esi_7 s> 0)
                        long double x87_r2_26 = fconvert.t(*(arg5 + (esi_7 << 2)))
                        long double x87_r1_5 =
                            fconvert.t(fconvert.s(fconvert.t(*(edx_9 + 4)) + x87_r3_2))
                        x87_r1_5 - x87_r2_26
                        int32_t eax_17
                        eax_17.w = (x87_r1_5 < x87_r2_26 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_5, x87_r2_26) ? 1 : 0) << 0xa
                            | (x87_r1_5 == x87_r2_26 ? 1 : 0) << 0xe | 0x800
                        x87_r3_2 = x87_r1_5
                        
                        if ((eax_17:1.b & 0x41) != 0)
                            x87_r3_2 = x87_r2_26
                        else
                            *(arg5 + (esi_7 << 2)) = fconvert.s(x87_r2_26)
                    
                    esi_4 = esi_7 i+ edi_2
                    
                    if (esi_4 s>= ebx_2)
                        goto label_5bd38e
                    
                    i_1 += 4
                    edx_9 += 0x10
                while (i_1 s< eax_6 - 3)
            
            for (; i_1 s< eax_6; i_1 += 1)
                if (esi_4 s> 0)
                    long double x87_r2_29 = fconvert.t(*(arg5 + (esi_4 << 2)))
                    long double x87_r1_6 =
                        fconvert.t(fconvert.s(fconvert.t(esi_3[i_1 + 2]) + x87_r3_2))
                    x87_r1_6 - x87_r2_29
                    int32_t eax_9
                    eax_9.w = (x87_r1_6 < x87_r2_29 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_6, x87_r2_29) ? 1 : 0) << 0xa
                        | (x87_r1_6 == x87_r2_29 ? 1 : 0) << 0xe | 0x800
                    x87_r3_2 = x87_r1_6
                    
                    if ((eax_9:1.b & 0x41) != 0)
                        x87_r3_2 = x87_r2_29
                    else
                        *(arg5 + (esi_4 << 2)) = fconvert.s(x87_r2_29)
                
                esi_4 += edi_2
                
                if (esi_4 s>= ebx_2)
                    break
        
    label_5bd38e:
        edi = var_14
        i = i_2
        ebx_1 = var_4_1
        ebp = arg1
    
    edi += 1
    x87_r4_1 = x87_r3_2
    var_14 = edi
while (edi s< i)
