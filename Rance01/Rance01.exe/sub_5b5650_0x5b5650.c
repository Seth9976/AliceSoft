// 函数: sub_5b5650
// 地址: 0x5b5650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 4)
int32_t* eax_1 = *(eax + 0x1c)
void* edi = *(arg1 + 0x68)
int32_t eax_2 = eax_1[0x392]

if (arg2 == 0)
    return 0xffffff7d

int32_t eax_4 = *(arg1 + 0x18)

if (*(arg1 + 0x14) s> eax_4 && eax_4 != 0xffffffff)
    return 0xffffff7d

*(arg1 + 0x24) = *(arg1 + 0x28)
int32_t ecx_1 = *(arg1 + 0x44)
*(arg1 + 0x28) = arg2[7]
int32_t eax_7 = *(arg1 + 0x40)
*(arg1 + 0x2c) = 0xffffffff

if ((eax_7 & ecx_1) == 0xffffffff || eax_7 + 1 != arg2[0xe]
        || adc.d(ecx_1, 0, eax_7 u>= 0xffffffff) != arg2[0xf])
    *(arg1 + 0x38) = 0xffffffff
    *(arg1 + 0x3c) = 0xffffffff
    *(edi + 0x80) = 0xffffffff
    *(edi + 0x84) = 0xffffffff

*(arg1 + 0x40) = arg2[0xe]
*(arg1 + 0x44) = arg2[0xf]

if (*arg2 != 0)
    int32_t eax_12 = eax_1[*(arg1 + 0x28)] s>> (eax_2.b + 1)
    int32_t ebp_3 = *eax_1 s>> (eax_2.b + 1)
    int32_t edi_2 = eax_1[1] s>> (eax_2.b + 1)
    int32_t eax_14
    int32_t edx_2
    edx_2:eax_14 = sx.q(arg2[0x16])
    int32_t temp1_1 = *(arg1 + 0x48)
    *(arg1 + 0x48) += eax_14
    int32_t var_24_1 = ebp_3
    *(arg1 + 0x4c) = adc.d(*(arg1 + 0x4c), edx_2, temp1_1 + eax_14 u< temp1_1)
    int32_t eax_16
    int32_t edx_3
    edx_3:eax_16 = sx.q(arg2[0x17])
    int32_t temp2_1 = *(arg1 + 0x50)
    *(arg1 + 0x50) += eax_16
    *(arg1 + 0x54) = adc.d(*(arg1 + 0x54), edx_3, temp2_1 + eax_16 u< temp2_1)
    int32_t eax_18
    int32_t edx_4
    edx_4:eax_18 = sx.q(arg2[0x18])
    int32_t temp3_1 = *(arg1 + 0x58)
    *(arg1 + 0x58) += eax_18
    *(arg1 + 0x5c) = adc.d(*(arg1 + 0x5c), edx_4, temp3_1 + eax_18 u< temp3_1)
    int32_t eax_20
    int32_t edx_5
    edx_5:eax_20 = sx.q(arg2[0x19])
    int32_t temp4_1 = *(arg1 + 0x60)
    *(arg1 + 0x60) += eax_20
    *(arg1 + 0x64) = adc.d(*(arg1 + 0x64), edx_5, temp4_1 + eax_20 u< temp4_1)
    int32_t i = 0
    int32_t var_2c_1
    int32_t var_14_1
    
    if (*(arg1 + 0x30) == 0)
        var_14_1 = 0
        var_2c_1 = edi_2
    else
        var_14_1 = edi_2
        var_2c_1 = 0
    
    int32_t i_1 = 0
    
    if (*(eax + 4) s> 0)
        do
            if (*(arg1 + 0x24) == 0)
                if (*(arg1 + 0x28) == 0)
                    void* edi_32 = "xzs"[*(edi + 4) - eax_2]
                    void* eax_71 = *(*(arg1 + 8) + (i << 2)) + (var_2c_1 << 2)
                    int32_t eax_72 = *(*arg2 + (i << 2))
                    int32_t ecx_44 = 0
                    
                    if (ebp_3 s>= 4)
                        void* edx_43 = edi_32 + 8
                        void* esi_9 = edi_32 + (ebp_3 << 2) - 8
                        void* eax_74 = eax_71 + 4
                        float* edi_35 = eax_72 - edi_32
                        float* var_34_4 = edi_35
                        
                        while (true)
                            long double x87_r7_52 =
                                fconvert.t(*(eax_72 + (ecx_44 << 2))) * fconvert.t(*(edx_43 - 8))
                            float* ebp_14 = edi_32 - eax_71 + eax_74
                            ecx_44 += 4
                            long double x87_r6_32 =
                                fconvert.t(*(esi_9 + 4)) * fconvert.t(*(eax_74 - 4))
                            eax_74 += 0x10
                            edx_43 += 0x10
                            esi_9 -= 0x10
                            *(eax_74 - 0x14) = fconvert.s(x87_r7_52 + x87_r6_32)
                            ebp_3 = var_24_1
                            *(eax_74 - 0x10) = fconvert.s(
                                fconvert.t(*(edi_35 + ebp_14)) * fconvert.t(*ebp_14)
                                + fconvert.t(*(esi_9 + 0x10)) * fconvert.t(*(eax_74 - 0x10)))
                            *(eax_74 - 0xc) = fconvert.s(
                                fconvert.t(*(edx_43 + edi_35 - 0x10)) * fconvert.t(*(edx_43 - 0x10))
                                + fconvert.t(*(esi_9 + 0xc)) * fconvert.t(*(eax_74 - 0xc)))
                            *(eax_74 - 8) = fconvert.s(fconvert.t(*(eax_72 + (ecx_44 << 2) - 4))
                                * fconvert.t(*(edx_43 - 0xc))
                                + fconvert.t(*(esi_9 + 8)) * fconvert.t(*(eax_74 - 8)))
                            
                            if (ecx_44 s>= ebp_3 - 3)
                                break
                            
                            edi_35 = var_34_4
                        
                        i = i_1
                    
                    if (ecx_44 s< ebp_3)
                        void* eax_75 = eax_71 + (ecx_44 << 2)
                        void* var_8_5 = edi_32 + ((ebp_3 - ecx_44) << 2) - 4
                        void* edi_38 = edi_32 - eax_71
                        void* var_18_8 = edi_38
                        int32_t edx_51 = ebp_3 - ecx_44
                        
                        while (true)
                            float* ecx_45 = eax_75 + edi_38
                            eax_75 += 4
                            int32_t temp13_1 = edx_51
                            edx_51 -= 1
                            long double x87_r6_40 = fconvert.t(*(eax_75 - 4)) * fconvert.t(*var_8_5)
                            var_8_5 -= 4
                            *(eax_75 - 4) = fconvert.s(
                                fconvert.t(*(ecx_45 + eax_72 - edi_32)) * fconvert.t(*ecx_45)
                                + x87_r6_40)
                            
                            if (temp13_1 == 1)
                                break
                            
                            edi_38 = var_18_8
                else
                    void* edx_31 = "xzs"[*(edi + 4) - eax_2]
                    void* eax_43 = *(*(arg1 + 8) + (i << 2)) + (var_2c_1 << 2)
                    int32_t eax_45
                    int32_t edx_33
                    edx_33:eax_45 = sx.q(edi_2)
                    int32_t eax_48
                    int32_t edx_34
                    edx_34:eax_48 = sx.q(ebp_3)
                    int32_t ecx_30 = (eax_45 - edx_33) s>> 1
                    int32_t eax_50 = (eax_48 - edx_34) s>> 1
                    int32_t edx_37 = *(*arg2 + (i << 2)) + ((ecx_30 - eax_50) << 2)
                    int32_t edx_38 = 0
                    int32_t var_c_1 = ecx_30
                    int32_t var_8_2 = eax_50
                    
                    if (ebp_3 s>= 4)
                        void* esi_4 = edx_31 + 8
                        void* edi_24 = edx_31 + (ebp_3 << 2) - 8
                        void* ecx_32 = eax_43 + 4
                        float* eax_54 = edx_37 - edx_31
                        float* var_10_3 = eax_54
                        
                        while (true)
                            long double x87_r7_32 =
                                fconvert.t(*(edx_37 + (edx_38 << 2))) * fconvert.t(*(esi_4 - 8))
                            float* ebp_11 = edx_31 - eax_43 + ecx_32
                            edx_38 += 4
                            long double x87_r6_22 =
                                fconvert.t(*(edi_24 + 4)) * fconvert.t(*(ecx_32 - 4))
                            ecx_32 += 0x10
                            esi_4 += 0x10
                            edi_24 -= 0x10
                            *(ecx_32 - 0x14) = fconvert.s(x87_r7_32 + x87_r6_22)
                            ebp_3 = var_24_1
                            *(ecx_32 - 0x10) = fconvert.s(
                                fconvert.t(*(eax_54 + ebp_11)) * fconvert.t(*ebp_11)
                                + fconvert.t(*(edi_24 + 0x10)) * fconvert.t(*(ecx_32 - 0x10)))
                            *(ecx_32 - 0xc) = fconvert.s(
                                fconvert.t(*(eax_54 + esi_4 - 0x10)) * fconvert.t(*(esi_4 - 0x10))
                                + fconvert.t(*(edi_24 + 0xc)) * fconvert.t(*(ecx_32 - 0xc)))
                            *(ecx_32 - 8) = fconvert.s(fconvert.t(*(edx_37 + (edx_38 << 2) - 4))
                                * fconvert.t(*(esi_4 - 0xc))
                                + fconvert.t(*(edi_24 + 8)) * fconvert.t(*(ecx_32 - 8)))
                            
                            if (edx_38 s>= ebp_3 - 3)
                                break
                            
                            eax_54 = var_10_3
                        
                        eax_50 = var_8_2
                        ecx_30 = var_c_1
                        i = i_1
                    
                    if (edx_38 s< ebp_3)
                        void* var_10_4 = edx_31 + ((ebp_3 - edx_38) << 2) - 4
                        void* eax_61 = edx_31 - eax_43
                        int32_t edi_27 = ebp_3 - edx_38
                        void* ecx_34 = eax_43 + (edx_38 << 2)
                        void* var_18_6 = eax_61
                        edx_38 += edi_27
                        
                        while (true)
                            void* eax_62 = eax_61 + ecx_34
                            ecx_34 += 4
                            int32_t temp14_1 = edi_27
                            edi_27 -= 1
                            long double x87_r6_30 =
                                fconvert.t(*(ecx_34 - 4)) * fconvert.t(*var_10_4)
                            var_10_4 -= 4
                            *(ecx_34 - 4) = fconvert.s(
                                fconvert.t(*(eax_62 + edx_37 - edx_31)) * fconvert.t(*eax_62)
                                + x87_r6_30)
                            
                            if (temp14_1 == 1)
                                break
                            
                            eax_61 = var_18_6
                        
                        i = i_1
                        ecx_30 = var_c_1
                        eax_50 = var_8_2
                    
                    int32_t ecx_40 = ecx_30 + eax_50
                    
                    if (edx_38 s< ecx_40)
                        if (ecx_40 - edx_38 s>= 4)
                            void* eax_67 = eax_43 + (edx_38 << 2) + 4
                            void* edi_28 = edx_37 + (edx_38 << 2) + 0xc
                            int32_t j_5 = ((ecx_40 - edx_38 - 4) u>> 2) + 1
                            edx_38 += j_5 << 2
                            void* edi_29 = edi_28
                            int32_t j
                            
                            do
                                eax_67 += 0x10
                                *(eax_67 - 0x14) = fconvert.s(fconvert.t(*(edi_29 - 0xc)))
                                edi_29 += 0x10
                                j = j_5
                                j_5 -= 1
                                *(eax_67 - 0x10) =
                                    fconvert.s(fconvert.t(*(edx_37 - eax_43 + eax_67 - 0x10)))
                                *(eax_67 - 0xc) = fconvert.s(fconvert.t(*(edi_29 - 0x14)))
                                *(eax_67 - 8) = fconvert.s(fconvert.t(*(edi_29 - 0x10)))
                            while (j != 1)
                            i = i_1
                        
                        if (edx_38 s< ecx_40)
                            float* eax_69 = eax_43 + (edx_38 << 2)
                            int32_t j_6 = ecx_40 - edx_38
                            int32_t j_1
                            
                            do
                                long double x87_r7_50 = fconvert.t(*(eax_69 + edx_37 - eax_43))
                                eax_69 = &eax_69[1]
                                j_1 = j_6
                                j_6 -= 1
                                eax_69[-1] = fconvert.s(x87_r7_50)
                            while (j_1 != 1)
            else if (*(arg1 + 0x28) == 0)
                void* edi_13 = "xzs"[*(edi + 4) - eax_2]
                int32_t eax_30
                int32_t edx_18
                edx_18:eax_30 = sx.q(edi_2)
                int32_t eax_33
                int32_t edx_19
                edx_19:eax_33 = sx.q(ebp_3)
                void* ecx_20 = *(*(arg1 + 8) + (i << 2))
                    + ((((eax_30 - edx_18) s>> 1) - ((eax_33 - edx_19) s>> 1) + var_2c_1) << 2)
                int32_t ecx_21 = *(*arg2 + (i << 2))
                int32_t ecx_22 = 0
                
                if (ebp_3 s>= 4)
                    void* edx_22 = edi_13 + 8
                    void* esi_3 = edi_13 + (ebp_3 << 2) - 8
                    void* eax_39 = ecx_20 + 4
                    float* edi_16 = ecx_21 - edi_13
                    float* var_18_3 = edi_16
                    
                    while (true)
                        long double x87_r7_17 =
                            fconvert.t(*(ecx_21 + (ecx_22 << 2))) * fconvert.t(*(edx_22 - 8))
                        float* ebp_8 = edi_13 - ecx_20 + eax_39
                        ecx_22 += 4
                        long double x87_r6_12 = fconvert.t(*(esi_3 + 4)) * fconvert.t(*(eax_39 - 4))
                        eax_39 += 0x10
                        edx_22 += 0x10
                        esi_3 -= 0x10
                        *(eax_39 - 0x14) = fconvert.s(x87_r7_17 + x87_r6_12)
                        ebp_3 = var_24_1
                        *(eax_39 - 0x10) = fconvert.s(
                            fconvert.t(*(edi_16 + ebp_8)) * fconvert.t(*ebp_8)
                            + fconvert.t(*(esi_3 + 0x10)) * fconvert.t(*(eax_39 - 0x10)))
                        *(eax_39 - 0xc) = fconvert.s(
                            fconvert.t(*(edx_22 + edi_16 - 0x10)) * fconvert.t(*(edx_22 - 0x10))
                            + fconvert.t(*(esi_3 + 0xc)) * fconvert.t(*(eax_39 - 0xc)))
                        *(eax_39 - 8) = fconvert.s(
                            fconvert.t(*(ecx_21 + (ecx_22 << 2) - 4)) * fconvert.t(*(edx_22 - 0xc))
                            + fconvert.t(*(esi_3 + 8)) * fconvert.t(*(eax_39 - 8)))
                        
                        if (ecx_22 s>= ebp_3 - 3)
                            break
                        
                        edi_16 = var_18_3
                    
                    i = i_1
                
                if (ecx_22 s< ebp_3)
                    void* eax_40 = ecx_20 + (ecx_22 << 2)
                    void* var_10_2 = edi_13 + ((ebp_3 - ecx_22) << 2) - 4
                    void* edi_19 = edi_13 - ecx_20
                    void* var_28_4 = edi_19
                    int32_t edx_30 = ebp_3 - ecx_22
                    
                    while (true)
                        float* ecx_23 = eax_40 + edi_19
                        eax_40 += 4
                        int32_t temp15_1 = edx_30
                        edx_30 -= 1
                        long double x87_r6_20 = fconvert.t(*(eax_40 - 4)) * fconvert.t(*var_10_2)
                        var_10_2 -= 4
                        *(eax_40 - 4) = fconvert.s(
                            fconvert.t(*(ecx_23 + ecx_21 - edi_13)) * fconvert.t(*ecx_23)
                            + x87_r6_20)
                        
                        if (temp15_1 == 1)
                            break
                        
                        edi_19 = var_28_4
            else
                void* edi_3 = "xzs"[*(edi + 8) - eax_2]
                void* ecx_9 = *(*(arg1 + 8) + (i << 2)) + (var_2c_1 << 2)
                int32_t ecx_10 = *(*arg2 + (i << 2))
                int32_t j_2 = 0
                
                if (edi_2 s>= 4)
                    void* edx_9 = edi_3 + 8
                    void* esi_2 = edi_3 + (edi_2 << 2) - 8
                    void* eax_26 = ecx_9 + 4
                    void* ebp_5 = ecx_10 - edi_3
                    
                    do
                        long double x87_r7_2 =
                            fconvert.t(*(ecx_10 + (j_2 << 2))) * fconvert.t(*(edx_9 - 8))
                        float* edi_7 = edi_3 - ecx_9 + eax_26
                        j_2 += 4
                        long double x87_r6_2 = fconvert.t(*(esi_2 + 4)) * fconvert.t(*(eax_26 - 4))
                        eax_26 += 0x10
                        edx_9 += 0x10
                        esi_2 -= 0x10
                        *(eax_26 - 0x14) = fconvert.s(x87_r7_2 + x87_r6_2)
                        *(eax_26 - 0x10) = fconvert.s(
                            fconvert.t(*(edi_7 + ebp_5)) * fconvert.t(*edi_7)
                            + fconvert.t(*(esi_2 + 0x10)) * fconvert.t(*(eax_26 - 0x10)))
                        *(eax_26 - 0xc) = fconvert.s(
                            fconvert.t(*(edx_9 + ebp_5 - 0x10)) * fconvert.t(*(edx_9 - 0x10))
                            + fconvert.t(*(esi_2 + 0xc)) * fconvert.t(*(eax_26 - 0xc)))
                        *(eax_26 - 8) = fconvert.s(
                            fconvert.t(*(ecx_10 + (j_2 << 2) - 4)) * fconvert.t(*(edx_9 - 0xc))
                            + fconvert.t(*(esi_2 + 8)) * fconvert.t(*(eax_26 - 8)))
                    while (j_2 s< edi_2 - 3)
                    
                    i = i_1
                    ebp_3 = var_24_1
                
                if (j_2 s< edi_2)
                    void* eax_27 = ecx_9 + (j_2 << 2)
                    void* var_18_2 = edi_3 + ((edi_2 - j_2) << 2) - 4
                    void* edi_11 = edi_3 - ecx_9
                    void* var_28_2 = edi_11
                    int32_t edx_17 = edi_2 - j_2
                    
                    while (true)
                        void* ecx_11 = eax_27 + edi_11
                        eax_27 += 4
                        int32_t temp16_1 = edx_17
                        edx_17 -= 1
                        long double x87_r6_10 = fconvert.t(*(eax_27 - 4)) * fconvert.t(*var_18_2)
                        var_18_2 -= 4
                        *(eax_27 - 4) = fconvert.s(
                            fconvert.t(*(ecx_11 + ecx_10 - edi_3)) * fconvert.t(*ecx_11)
                            + x87_r6_10)
                        
                        if (temp16_1 == 1)
                            break
                        
                        edi_11 = var_28_2
            
            void* ecx_49 = *(*(arg1 + 8) + (i << 2)) + var_14_1 * 4
            void* edi_41 = *(*arg2 + (i << 2)) + (eax_12 << 2)
            int32_t edx_54 = 0
            
            if (eax_12 s>= 4)
                void* edx_55 = edi_41 + 0xc
                int32_t j_8 = ((eax_12 - 4) u>> 2) + 1
                int32_t esi_10 = j_8 << 2
                void* eax_82 = ecx_49 + 4
                int32_t j_3
                
                do
                    eax_82 += 0x10
                    *(eax_82 - 0x14) = fconvert.s(fconvert.t(*(edx_55 - 0xc)))
                    edx_55 += 0x10
                    j_3 = j_8
                    j_8 -= 1
                    *(eax_82 - 0x10) = fconvert.s(fconvert.t(*(edi_41 - ecx_49 + eax_82 - 0x10)))
                    *(eax_82 - 0xc) = fconvert.s(fconvert.t(*(edx_55 - 0x14)))
                    *(eax_82 - 8) = fconvert.s(fconvert.t(*(edx_55 - 0x10)))
                while (j_3 != 1)
                i = i_1
                edx_54 = esi_10
            
            if (edx_54 s< eax_12)
                float* eax_83 = ecx_49 + (edx_54 << 2)
                int32_t j_7 = eax_12 - edx_54
                int32_t j_4
                
                do
                    long double x87_r7_70 = fconvert.t(*(eax_83 + edi_41 - ecx_49))
                    eax_83 = &eax_83[1]
                    j_4 = j_7
                    j_7 -= 1
                    eax_83[-1] = fconvert.s(x87_r7_70)
                while (j_4 != 1)
            
            i += 1
            i_1 = i
        while (i s< *(eax + 4))
    
    int32_t edx_56 = *(arg1 + 0x30)
    int32_t edx_57 = neg.d(edx_56)
    bool cond:0_1 = *(arg1 + 0x18) != 0xffffffff
    *(arg1 + 0x30) = not.d(sbb.d(edx_57, edx_57, edx_56 != 0)) & edi_2
    
    if (cond:0_1)
        int32_t eax_85 = *(arg1 + 0x28)
        *(arg1 + 0x18) = var_2c_1
        int32_t eax_87
        int32_t edx_61
        edx_61:eax_87 = sx.q(eax_1[eax_85])
        int32_t eax_89
        int32_t edx_64
        edx_64:eax_89 = sx.q(eax_1[*(arg1 + 0x24)])
        *(arg1 + 0x14) = (((((edx_61 & 3) + eax_87) s>> 2) + ((eax_89 + (edx_64 & 3)) s>> 2))
            s>> eax_2.b) + var_2c_1
    else
        *(arg1 + 0x18) = var_14_1
        *(arg1 + 0x14) = var_14_1

int32_t ecx_54 = *(edi + 0x80)
int32_t esi_13 = *(edi + 0x84)

if ((ecx_54 & esi_13) != 0xffffffff)
    int32_t eax_95
    int32_t edx_68
    edx_68:eax_95 = sx.q(eax_1[*(arg1 + 0x28)])
    int32_t eax_97
    int32_t edx_71
    edx_71:eax_97 = sx.q(eax_1[*(arg1 + 0x24)])
    int32_t eax_101
    int32_t edx_73
    edx_73:eax_101 = sx.q(((eax_97 + (edx_71 & 3)) s>> 2) + (((edx_68 & 3) + eax_95) s>> 2))
    *(edi + 0x80) = eax_101 + ecx_54
    *(edi + 0x84) = adc.d(edx_73, esi_13, eax_101 + ecx_54 u< eax_101)
else
    *(edi + 0x80) = 0
    *(edi + 0x84) = 0

int32_t ecx_55 = *(arg1 + 0x38)
int32_t esi_14 = *(arg1 + 0x3c)

if ((ecx_55 & esi_14) != 0xffffffff)
    int32_t eax_114
    int32_t edx_82
    edx_82:eax_114 = sx.q(eax_1[*(arg1 + 0x28)])
    int32_t eax_117
    int32_t edx_84
    edx_84:eax_117 = sx.q(eax_1[*(arg1 + 0x24)])
    int32_t eax_121
    int32_t edx_86
    edx_86:eax_121 = sx.q(((eax_117 + (edx_84 & 3)) s>> 2) + (((edx_82 & 3) + eax_114) s>> 2))
    *(arg1 + 0x3c) = adc.d(edx_86, esi_14, eax_121 + ecx_55 u< eax_121)
    *(arg1 + 0x38) = eax_121 + ecx_55
    int32_t eax_123 = arg2[0xc]
    int32_t ecx_62 = arg2[0xd]
    
    if ((eax_123 & ecx_62) != 0xffffffff)
        int32_t edx_90 = *(arg1 + 0x38)
        int32_t esi_17 = *(arg1 + 0x3c)
        
        if (edx_90 != eax_123 || esi_17 != ecx_62)
            if (esi_17 s>= ecx_62 && (esi_17 s> ecx_62 || edx_90 u> eax_123))
                int32_t eax_124 = *(arg1 + 0x38)
                int32_t eax_125 = eax_124 - arg2[0xc]
                
                if (eax_124 != arg2[0xc] && arg2[0xb] != 0)
                    int32_t esi_18 = *(arg1 + 0x14)
                    char ecx_63 = eax_2.b
                    int32_t edx_93 = (esi_18 - *(arg1 + 0x18)) << ecx_63
                    
                    if (eax_125 s> edx_93)
                        eax_125 = edx_93
                    
                    if (eax_125 s< 0)
                        eax_125 = 0
                    
                    *(arg1 + 0x14) = esi_18 - (eax_125 s>> ecx_63)
            
            *(arg1 + 0x38) = arg2[0xc]
            *(arg1 + 0x3c) = arg2[0xd]
else
    int32_t eax_105 = arg2[0xc]
    int32_t ecx_57 = arg2[0xd]
    
    if ((eax_105 & ecx_57) != 0xffffffff)
        *(arg1 + 0x38) = eax_105
        *(arg1 + 0x3c) = ecx_57
        int32_t ecx_58 = *(edi + 0x84)
        int32_t temp8_1 = *(arg1 + 0x3c)
        
        if (ecx_58 s>= temp8_1 && (ecx_58 s> temp8_1 || *(edi + 0x80) u> *(arg1 + 0x38)))
            int32_t eax_108 = *(edi + 0x80)
            int32_t eax_109 = eax_108 - arg2[0xc]
            
            if (eax_108 - arg2[0xc] s< 0)
                eax_109 = 0
            
            char ecx_61 = eax_2.b
            
            if (arg2[0xb] == 0)
                *(arg1 + 0x18) += eax_109 s>> ecx_61
                int32_t eax_112 = *(arg1 + 0x14)
                
                if (*(arg1 + 0x18) s> eax_112)
                    *(arg1 + 0x18) = eax_112
            else
                int32_t esi_15 = *(arg1 + 0x14)
                int32_t edx_80 = (esi_15 - *(arg1 + 0x18)) << ecx_61
                
                if (eax_109 s> edx_80)
                    eax_109 = edx_80
                
                *(arg1 + 0x14) = esi_15 - (eax_109 s>> ecx_61)

if (arg2[0xb] != 0)
    *(arg1 + 0x20) = 1

return 0
