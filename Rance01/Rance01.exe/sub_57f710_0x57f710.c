// 函数: sub_57f710
// 地址: 0x57f710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
int32_t esi = *(ebx + 0x50)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x66666667, *(ebx + 0x54) - esi)
int32_t edx_1 = edx s>> 3
int32_t i_1 = 0

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
    return 

arg1 = nullptr
int32_t edx_11
int32_t i

do
    int32_t* ebp_2 = arg1 + esi
    
    for (int32_t j = 0; j s< 3; )
        int32_t edx_3 = ebp_2[j] * 7
        int32_t eax_5 = *(ebx + 0x40)
        void* esi_1 = eax_5 + (edx_3 << 2)
        int32_t eax_6 = *(esi_1 + 8)
        float edx_4 = *(esi_1 + 4)
        float var_c = *(eax_5 + (edx_3 << 2))
        int32_t var_4_1 = eax_6
        sub_51e0e0(ebx + 0x88, edx_4, &var_c)
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = sx.q(*(ebx + 0x18))
        int32_t eax_13
        int32_t edx_6
        edx_6:eax_13 = sx.q(*(ebx + 0x1c))
        j += 1
        long double x87_r6_1 = fconvert.t(fconvert.s(float.t((eax_9 - edx_5) s>> 1)))
        *(esi_1 + 0xc) = fconvert.s(fconvert.t(var_c) * x87_r6_1 + x87_r6_1)
        long double x87_r5_2 = fconvert.t(fconvert.s(float.t((eax_13 - edx_6) s>> 1)))
        *(esi_1 + 0x10) =
            fconvert.s(float.t(*(ebx + 0x1c)) - (fconvert.t(edx_4) * x87_r5_2 + x87_r5_2))
    
    long double x87_r7_8 = float.t(0)
    int32_t eax_16 = *(ebx + 0x40)
    int32_t edx_8 = *ebp_2 * 7
    long double temp1_1 = fconvert.t(*(eax_16 + (edx_8 << 2) + 0xc))
    x87_r7_8 - temp1_1
    void* edx_9 = eax_16 + (edx_8 << 2)
    void* esi_4 = eax_16 + ebp_2[1] * 0x1c
    void* ecx_7 = eax_16 + ebp_2[2] * 0x1c
    eax_16.w = (x87_r7_8 < temp1_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_8, temp1_1) ? 1 : 0) << 0xa | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe
        | 0x3800
    
    if ((eax_16:1.b & 0x41) != 0)
    label_57f843:
        long double x87_r6_6 = fconvert.t(*(edx_9 + 0xc))
        long double x87_r5_3 = fconvert.t(fconvert.s(float.t(*(ebx + 0x18))))
        x87_r5_3 - x87_r6_6
        eax_16.w = (x87_r5_3 < x87_r6_6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_3, x87_r6_6) ? 1 : 0) << 0xa
            | (x87_r5_3 == x87_r6_6 ? 1 : 0) << 0xe | 0x2800
        long double x87_r7_9 = x87_r5_3
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            long double x87_r5_4 = fconvert.t(*(esi_4 + 0xc))
            x87_r5_4 - x87_r6_6
            eax_16.w = (x87_r5_4 < x87_r6_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_4, x87_r6_6) ? 1 : 0) << 0xa
                | (x87_r5_4 == x87_r6_6 ? 1 : 0) << 0xe | 0x3000
        
        if (p_1 || (eax_16:1.b & 1) != 0)
            x87_r7_9 = x87_r6_6
        label_57f877:
            long double temp4_1 = fconvert.t(*(edx_9 + 0x10))
            x87_r7_9 - temp4_1
            eax_16.w = (x87_r7_9 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp4_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_16:1.b & 0x41) != 0)
            label_57f8a4:
                long double x87_r7_11 = fconvert.t(*(edx_9 + 0x10))
                long double x87_r6_7 = fconvert.t(fconvert.s(float.t(*(ebx + 0x1c))))
                x87_r6_7 - x87_r7_11
                eax_16.w = (x87_r6_7 < x87_r7_11 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_7, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r6_7 == x87_r7_11 ? 1 : 0) << 0xe | 0x3000
                bool p_2 = unimplemented  {test ah, 0x41}
                
                if (p_2)
                    ebp_2[3].b = 1
                else
                    long double x87_r6_8 = fconvert.t(*(esi_4 + 0x10))
                    x87_r6_8 - x87_r7_11
                    eax_16.w = (x87_r6_8 < x87_r7_11 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_8, x87_r7_11) ? 1 : 0) << 0xa
                        | (x87_r6_8 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_16:1.b & 1) != 0)
                        ebp_2[3].b = 1
                    else
                        long double x87_r6_9 = fconvert.t(*(ecx_7 + 0x10))
                        x87_r6_9 - x87_r7_11
                        eax_16.w = (x87_r6_9 < x87_r7_11 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_9, x87_r7_11) ? 1 : 0) << 0xa
                            | (x87_r6_9 == x87_r7_11 ? 1 : 0) << 0xe
                        
                        if ((eax_16:1.b & 1) != 0)
                            ebp_2[3].b = 1
                        else
                            ebp_2[3].b = 0
            else
                long double temp5_1 = fconvert.t(*(esi_4 + 0x10))
                x87_r7_9 - temp5_1
                eax_16.w = (x87_r7_9 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_9, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_16:1.b & 0x41) != 0)
                    goto label_57f8a4
                
                long double temp6_1 = fconvert.t(*(ecx_7 + 0x10))
                x87_r7_9 - temp6_1
                eax_16.w = (x87_r7_9 < temp6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_9, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp6_1 ? 1 : 0) << 0xe
                
                if ((eax_16:1.b & 0x41) != 0)
                    goto label_57f8a4
                
                ebp_2[3].b = 0
        else
            long double x87_r5_5 = fconvert.t(*(ecx_7 + 0xc))
            x87_r5_5 - x87_r6_6
            eax_16.w = (x87_r5_5 < x87_r6_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_5, x87_r6_6) ? 1 : 0) << 0xa
                | (x87_r5_5 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_16:1.b & 1) != 0)
                goto label_57f877
            
            ebp_2[3].b = 0
    else
        long double temp2_1 = fconvert.t(*(esi_4 + 0xc))
        x87_r7_8 - temp2_1
        eax_16.w = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_16:1.b & 0x41) != 0)
            goto label_57f843
        
        long double temp3_1 = fconvert.t(*(ecx_7 + 0xc))
        x87_r7_8 - temp3_1
        eax_16.w = (x87_r7_8 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_16:1.b & 0x41) != 0)
            goto label_57f843
        
        ebp_2[3].b = 0
    
    esi = *(ebx + 0x50)
    arg1 += 0x14
    int32_t eax_17
    int32_t edx_10
    edx_10:eax_17 = muls.dp.d(0x66666667, *(ebx + 0x54) - esi)
    edx_11 = edx_10 s>> 3
    i = i_1 + 1
    i_1 = i
while (i s< (edx_11 u>> 0x1f) + edx_11)
