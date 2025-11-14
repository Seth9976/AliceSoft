// 函数: sub_5bee40
// 地址: 0x5bee40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* var_60
int32_t eax_1 = data_78c474 ^ &var_60
int32_t j_15 = *arg4
int32_t* eax_3 = arg4[1]
bool cond:0 = eax_3[0x7d] == 0
int32_t* edi
int32_t* var_b4 = edi
int32_t j_14

if (cond:0)
    j_14 = 0x10
else
    j_14 = eax_3[0x7f]

int32_t eax_5 = *(arg3 + ((*eax_3 * 0xf + arg2) << 2) + 0x84)
float var_94 = fconvert.s(fconvert.t(*((*(arg3 + (arg2 << 2) + 0xfc) << 3) + &data_745538)))
void* ecx_2 = *(arg3 + (arg2 << 2) + 0x138) * 4
float var_84 = fconvert.s(fconvert.t(*(ecx_2 * 2 + &data_745538)))
void* edi_3 = arg10 * 4
__alloca_probe_16(edi_3)
int32_t* var_5c = &var_b4
__alloca_probe_16(edi_3)
int32_t* var_80 = &var_b4
__alloca_probe_16(edi_3)
int32_t* var_50 = &var_b4
__alloca_probe_16(edi_3)
int32_t* var_44 = &var_b4
__alloca_probe_16(edi_3)
void* eax_13 = arg10 + *(arg5 + 0x484)
int32_t* var_7c = &var_b4
__alloca_probe_16(eax_13 * 4)
int32_t* var_78 = &var_b4

if (j_15 s> 0x3e8)
    var_84 = fconvert.s(fconvert.t(*(ecx_2 * 2 + 0x745580)))

void* edi_7 = j_14 * arg10 * 4
__alloca_probe_16(edi_7)
*var_5c = &var_b4
__alloca_probe_16(edi_7)
var_b4 = &var_b4
__alloca_probe_16(edi_7)
var_b4 = &var_b4
__alloca_probe_16(edi_7)
*var_44 = &var_b4

if (arg10 s> 1)
    int32_t eax_22 = j_14 * 4
    int32_t* edx_2 = var_5c - &var_b4
    int32_t var_48_1 = eax_22
    int32_t __saved_esi
    int32_t* ecx_7 = &__saved_esi
    int32_t* var_38_1 = edx_2
    void* var_14_1 = arg10 - 1
    
    while (true)
        *(edx_2 + ecx_7) = *var_5c + eax_22
        *ecx_7 = var_b4 + eax_22
        *ecx_7 = var_b4 + eax_22
        int32_t edx_9 = *var_44 + eax_22
        eax_22 += var_48_1
        *(var_44 - &var_b4 + ecx_7) = edx_9
        ecx_7 = &ecx_7[1]
        void* temp1_1 = var_14_1
        var_14_1 -= 1
        
        if (temp1_1 == 1)
            break
        
        edx_2 = var_38_1

if (eax_13 s> 0)
    __builtin_memset(var_78, 0, eax_13 << 2)

int32_t var_34 = 0

if (j_15 s> 0)
    int128_t* ecx_9 = *var_44
    int32_t j_13 = j_15
    int32_t* ebx_1 = &var_b4
    int32_t eax_123
    
    do
        int32_t j_10 = j_13
        
        if (j_14 s<= j_13)
            j_10 = j_14
        
        void* esi_5 = nullptr
        sub_6c02a0(var_7c, arg8, arg10 << 2)
        sub_6bc670(ecx_9, 0, edi_7)
        long double x87_r7_3
        
        if (arg10 s<= 0)
            x87_r7_3 = float.t(0)
        else
            x87_r7_3 = fconvert.t(1.00000001e-10f)
            long double x87_r6_1 = float.t(0)
            void* eax_35 = arg6 - ebx_1
            int32_t* eax_37 = var_5c - ebx_1
            int32_t* eax_39 = var_80 - ebx_1
            int32_t** eax_41 = var_44 - ebx_1
            var_60 = var_78 - ebx_1
            int32_t* esi_6 = ebx_1
            void* i_3 = arg10
            void* i
            
            do
                void* eax_47 = eax_35 + esi_6 + var_7c - arg6
                void* edi_21 = *(eax_47 + arg7 - var_7c) + var_34 * 4
                void* var_1c_1 = edi_21
                
                if (*eax_47 == 0)
                    if (j_10 s> 0)
                        void* eax_67 = *(eax_37 + esi_6)
                        float* ecx_42 = *esi_6 - eax_67
                        void* edx_31 = *(eax_39 + esi_6) - eax_67
                        void* ebx_24 = *(eax_41 + esi_6) - eax_67
                        void* edi_38 = edi_21 - eax_67
                        int32_t j_5 = j_10
                        int32_t j
                        
                        do
                            *(ecx_42 + eax_67) = fconvert.s(x87_r7_3)
                            eax_67 += 4
                            j = j_5
                            j_5 -= 1
                            *(eax_67 - 4) = fconvert.s(x87_r6_1)
                            *(edx_31 + eax_67 - 4) = fconvert.s(x87_r6_1)
                            *(ebx_24 + eax_67 - 4) = 0
                            *(edi_38 + eax_67 - 4) = 0
                        while (j != 1)
                    
                    *(var_60 + esi_6) = fconvert.s(x87_r6_1)
                else
                    int32_t ebx_2 = 0
                    
                    if (j_10 s>= 4)
                        void* ecx_21 = *esi_6
                        int32_t* eax_48 = ecx_21 + 4
                        int32_t j_6 = ((j_10 - 4) u>> 2) + 1
                        int32_t ebx_5 = j_6 << 2
                        void* edx_13 = edi_21 + 0xc
                        int32_t j_1
                        
                        do
                            eax_48[-1] =
                                fconvert.s(fconvert.t(*((*(edx_13 - 0xc) << 2) + &data_78f538)))
                            long double x87_r7_5 =
                                fconvert.t(*((*(eax_48 + edi_21 - ecx_21) << 2) + &data_78f538))
                            eax_48 = &eax_48[4]
                            eax_48[-4] = fconvert.s(x87_r7_5)
                            long double x87_r7_6 =
                                fconvert.t(*((*(edx_13 - 4) << 2) + &data_78f538))
                            edx_13 += 0x10
                            j_1 = j_6
                            j_6 -= 1
                            eax_48[-3] = fconvert.s(x87_r7_6)
                            eax_48[-2] =
                                fconvert.s(fconvert.t(*((*(edx_13 - 0x10) << 2) + &data_78f538)))
                        while (j_1 != 1)
                        ebx_2 = ebx_5
                    
                    if (ebx_2 s< j_10)
                        int32_t ecx_25 = *esi_6
                        int32_t* eax_49 = ecx_25 + (ebx_2 << 2)
                        int32_t j_7 = j_10 - ebx_2
                        int32_t j_2
                        
                        do
                            long double x87_r7_8 =
                                fconvert.t(*((*(eax_49 + edi_21 - ecx_25) << 2) + &data_78f538))
                            eax_49 = &eax_49[1]
                            j_2 = j_7
                            j_7 -= 1
                            eax_49[-1] = fconvert.s(x87_r7_8)
                        while (j_2 != 1)
                    
                    int32_t* edx_17 = eax_35 + esi_6
                    int32_t ebx_12 = var_34 << 2
                    sub_5beae0(*esi_6, eax_41, *(eax_41 + esi_6), eax_5, 
                        fconvert.s(fconvert.t(var_94)), fconvert.s(fconvert.t(var_84)), 
                        *edx_17 + ebx_12, var_34, j_10)
                    int32_t edx_21 = 0
                    long double x87_r6_2
                    long double x87_r7_11
                    
                    if (j_10 s< 4)
                        x87_r7_11 = fconvert.t(-1.0)
                        x87_r6_2 = float.t(0)
                    else
                        x87_r7_11 = fconvert.t(-1.0)
                        int32_t edi_22 = *edx_17
                        x87_r6_2 = float.t(0)
                        float* eax_52 = *(eax_39 + esi_6)
                        float* var_28_1 = ebx_12 + edi_22 + 4
                        int32_t edi_25 = *(eax_37 + esi_6)
                        float* ebx_16 = *esi_6 - edi_25
                        float* var_30_1 = eax_52
                        float* eax_53 = eax_52 - *esi_6
                        void* edx_24 = *esi_6 + 8
                        void* ecx_35 = *(eax_37 + esi_6) + 4
                        int32_t j_8 = ((j_10 - 4) u>> 2) + 1
                        int32_t eax_54 = j_8 << 2
                        void* ebx_17 = ebx_12 + edi_22 + 8
                        int32_t j_3
                        
                        do
                            long double x87_r5_1 = fconvert.t(*(ebx_17 - 8))
                            long double x87_r5_3 = fconvert.t(fconvert.s(x87_r5_1 * x87_r5_1))
                            *(ecx_35 - 4) = fconvert.s(x87_r5_3)
                            *var_30_1 = fconvert.s(x87_r5_3)
                            long double temp7_1 = fconvert.t(*(ebx_17 - 8))
                            x87_r6_2 - temp7_1
                            float* eax_55
                            eax_55.w = (x87_r6_2 < temp7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r6_2 == temp7_1 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax_55:1.b & 0x41) == 0)
                                *(ecx_35 - 4) = fconvert.s(fconvert.t(*(ecx_35 - 4)) * x87_r7_11)
                            
                            long double x87_r5_6 = fconvert.t(*(edx_24 - 8))
                            *(edx_24 - 8) = fconvert.s(x87_r5_6 * x87_r5_6)
                            long double x87_r5_8 = fconvert.t(*var_28_1)
                            long double x87_r5_10 = fconvert.t(fconvert.s(x87_r5_8 * x87_r5_8))
                            *ecx_35 = fconvert.s(x87_r5_10)
                            *(eax_52 - edi_25 + ecx_35) = fconvert.s(x87_r5_10)
                            long double temp8_1 = fconvert.t(*var_28_1)
                            x87_r6_2 - temp8_1
                            float* eax_58
                            eax_58.w = (x87_r6_2 < temp8_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r6_2 == temp8_1 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax_58:1.b & 0x41) == 0)
                                *ecx_35 = fconvert.s(fconvert.t(*ecx_35) * x87_r7_11)
                            
                            long double x87_r5_13 = fconvert.t(*(ebx_16 + ecx_35))
                            *(ebx_16 + ecx_35) = fconvert.s(x87_r5_13 * x87_r5_13)
                            long double x87_r5_15 = fconvert.t(*ebx_17)
                            long double x87_r5_17 = fconvert.t(fconvert.s(x87_r5_15 * x87_r5_15))
                            *(ecx_35 + 4) = fconvert.s(x87_r5_17)
                            *(eax_53 + edx_24) = fconvert.s(x87_r5_17)
                            long double temp10_1 = fconvert.t(*ebx_17)
                            x87_r6_2 - temp10_1
                            float* eax_60
                            eax_60.w = (x87_r6_2 < temp10_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, temp10_1) ? 1 : 0) << 0xa
                                | (x87_r6_2 == temp10_1 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax_60:1.b & 0x41) == 0)
                                *(ecx_35 + 4) = fconvert.s(fconvert.t(*(ecx_35 + 4)) * x87_r7_11)
                            
                            long double x87_r5_20 = fconvert.t(*edx_24)
                            *edx_24 = fconvert.s(x87_r5_20 * x87_r5_20)
                            long double x87_r5_22 = fconvert.t(*(ebx_17 + 4))
                            long double x87_r5_24 = fconvert.t(fconvert.s(x87_r5_22 * x87_r5_22))
                            *(ecx_35 + 8) = fconvert.s(x87_r5_24)
                            var_30_1[3] = fconvert.s(x87_r5_24)
                            long double temp12_1 = fconvert.t(*(ebx_17 + 4))
                            x87_r6_2 - temp12_1
                            float* eax_61
                            eax_61.w = (x87_r6_2 < temp12_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, temp12_1) ? 1 : 0) << 0xa
                                | (x87_r6_2 == temp12_1 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax_61:1.b & 0x41) == 0)
                                *(ecx_35 + 8) = fconvert.s(fconvert.t(*(ecx_35 + 8)) * x87_r7_11)
                            
                            long double x87_r5_27 = fconvert.t(*(edx_24 + 4))
                            var_30_1 = &var_30_1[4]
                            var_28_1 = &var_28_1[4]
                            ecx_35 += 0x10
                            ebx_17 += 0x10
                            *(edx_24 + 4) = fconvert.s(x87_r5_27 * x87_r5_27)
                            edx_24 += 0x10
                            j_3 = j_8
                            j_8 -= 1
                        while (j_3 != 1)
                        edi_21 = var_1c_1
                        edx_21 = eax_54
                    
                    if (edx_21 s< j_10)
                        int32_t eax_62 = *(eax_37 + esi_6)
                        float* edi_35 = *(eax_39 + esi_6) - eax_62
                        float* ebx_20 = *esi_6 - eax_62
                        float* ecx_37 = eax_62 + (edx_21 << 2)
                        int32_t j_9 = j_10 - edx_21
                        float* edx_25 = *(eax_35 + esi_6) + ((edx_21 + var_34) << 2)
                        int32_t j_4
                        
                        do
                            long double x87_r5_29 = fconvert.t(*edx_25)
                            long double x87_r5_31 = fconvert.t(fconvert.s(x87_r5_29 * x87_r5_29))
                            *ecx_37 = fconvert.s(x87_r5_31)
                            *(edi_35 + ecx_37) = fconvert.s(x87_r5_31)
                            long double temp9_1 = fconvert.t(*edx_25)
                            x87_r6_2 - temp9_1
                            float* eax_63
                            eax_63.w = (x87_r6_2 < temp9_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r6_2 == temp9_1 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax_63:1.b & 0x41) == 0)
                                *ecx_37 = fconvert.s(fconvert.t(*ecx_37) * x87_r7_11)
                            
                            long double x87_r5_34 = fconvert.t(*(ebx_20 + ecx_37))
                            edx_25 = &edx_25[1]
                            ecx_37 = &ecx_37[1]
                            j_4 = j_9
                            j_9 -= 1
                            *(ebx_20 + ecx_37 - 4) = fconvert.s(x87_r5_34 * x87_r5_34)
                        while (j_4 != 1)
                        edi_21 = var_1c_1
                    
                    float* ebx_21 = var_60
                    void* var_b8_3 = edi_21
                    int32_t j_11 = j_10
                    *(ebx_21 + esi_6) = fconvert.s(sub_5beb60(*(eax_39 + esi_6), arg4, eax_5, 
                        *(eax_37 + esi_6), *esi_6, 0, fconvert.s(fconvert.t(*(ebx_21 + esi_6))), 
                        var_34, j_10))
                    x87_r7_3 = fconvert.t(1.00000001e-10f)
                    x87_r6_1 = float.t(0)
                
                esi_6 = &esi_6[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
            esi_5 = arg10
            ebx_1 = var_50
        
        int32_t i_4 = 0
        
        if (*(arg5 + 0x484) s> 0)
            void* var_30_2 = &var_78[esi_5]
            int32_t* var_24_2 = arg5 + 0x888
            int32_t i_1
            
            do
                int32_t eax_70 = var_24_2[-0x100]
                int32_t ecx_46 = *var_24_2
                int32_t esi_9 = var_34 * 4
                int32_t edi_42 = *(arg7 + (eax_70 << 2)) + esi_9
                int32_t edx_35 = *(arg7 + (ecx_46 << 2)) + esi_9
                float* esi_10 = var_5c[eax_70]
                int32_t ebx_26 = var_5c[ecx_46]
                float* ebx_28 = var_80[eax_70]
                int32_t ebx_30 = var_80[ecx_46]
                int32_t ebx_32 = var_50[eax_70]
                int32_t ebx_34 = var_50[ecx_46]
                int32_t ebx_36 = var_44[eax_70]
                int32_t ebx_38 = var_44[ecx_46]
                
                if (var_7c[eax_70] != 0 || var_7c[ecx_46] != 0)
                    var_7c[ecx_46] = 1
                    var_7c[eax_70] = 1
                    int32_t var_2c_3 = 0
                    
                    if (j_10 s> 0)
                        long double x87_r6_4 = float.t(0)
                        float* eax_74 = ebx_26 - esi_10
                        float* eax_76 = ebx_30 - esi_10
                        void* eax_78 = ebx_28 - esi_10
                        int32_t* eax_80 = ebx_38 - esi_10
                        int32_t* eax_82 = ebx_36 - esi_10
                        float* eax_84 = ebx_34 - esi_10
                        int32_t* ebx_41 = edx_35 - esi_10
                        int32_t* edi_43 = edi_42 - esi_10
                        void* eax_86 = ebx_32 - esi_10
                        float* ecx_47 = esi_10
                        var_60 = ebx_41
                        int32_t* var_58_2 = edi_43
                        
                        while (true)
                            long double x87_r6_5
                            long double x87_r7_16
                            
                            if (var_2c_3 s>= arg9 - j_15 + j_13)
                                x87_r6_5 = x87_r7_3
                                x87_r7_16 = x87_r6_4
                            else if (*(eax_82 + ecx_47) != 0 || *(eax_80 + ecx_47) != 0)
                                *ecx_47 = fconvert.s(fabs(fconvert.t(*(eax_74 + ecx_47)))
                                    + fabs(fconvert.t(*ecx_47)))
                                float* eax_93 = eax_78
                                *(eax_93 + ecx_47) = fconvert.s(fconvert.t(*(eax_76 + ecx_47))
                                    + fconvert.t(*(eax_93 + ecx_47)))
                                *(eax_80 + ecx_47) = 1
                                *(eax_82 + ecx_47) = 1
                                int32_t ebx_42 = *(ebx_41 + ecx_47)
                                int32_t edi_44 = *(edi_43 + ecx_47)
                                int32_t eax_96
                                int32_t edx_42
                                edx_42:eax_96 = sx.q(ebx_42)
                                int32_t eax_98
                                int32_t edx_43
                                edx_43:eax_98 = sx.q(edi_44)
                                
                                if ((eax_98 ^ edx_43) - edx_43 s<= (eax_96 ^ edx_42) - edx_42)
                                    int32_t eax_103
                                    
                                    if (ebx_42 s<= 0)
                                        eax_103 = ebx_42 - edi_44
                                    else
                                        eax_103 = edi_44 - ebx_42
                                    
                                    ebx_41 = var_60
                                    edi_43 = var_58_2
                                    *(ebx_41 + ecx_47) = eax_103
                                    *(edi_43 + ecx_47) = ebx_42
                                else if (edi_44 s<= 0)
                                    ebx_41 = var_60
                                    *(ebx_41 + ecx_47) = ebx_42 - edi_44
                                    edi_43 = var_58_2
                                else
                                    ebx_41 = var_60
                                    *(ebx_41 + ecx_47) = edi_44 - ebx_42
                                    edi_43 = var_58_2
                                
                                int32_t edx_45 = *(ebx_41 + ecx_47)
                                x87_r6_5 = x87_r7_3
                                x87_r7_16 = x87_r6_4
                                int32_t eax_106
                                int32_t edx_46
                                edx_46:eax_106 = sx.q(*(edi_43 + ecx_47))
                                
                                if (edx_45 s>= ((eax_106 ^ edx_46) - edx_46) * 2)
                                    *(ebx_41 + ecx_47) = neg.d(edx_45)
                                    *(edi_43 + ecx_47) = neg.d(*(edi_43 + ecx_47))
                            else
                                long double x87_r5_37 =
                                    fconvert.t(*(eax_74 + ecx_47)) + fconvert.t(*ecx_47)
                                
                                if (var_2c_3 s>= eax_5 - j_15 + j_13)
                                    x87_r5_37 - x87_r6_4
                                    bool p_1 = unimplemented  {test ah, 0x5}
                                    long double x87_r5_43 = fconvert.t(fconvert.s(
                                        fabs(fconvert.t(*(eax_74 + ecx_47)))
                                        + fabs(fconvert.t(*ecx_47))))
                                    *(eax_78 + ecx_47) = fconvert.s(x87_r5_43)
                                    
                                    if (not(p_1))
                                        x87_r5_43 = fneg(x87_r5_43)
                                    
                                    *ecx_47 = fconvert.s(x87_r5_43)
                                else
                                    long double x87_r5_38 = fconvert.t(fconvert.s(x87_r5_37))
                                    *ecx_47 = fconvert.s(x87_r5_38)
                                    *(eax_78 + ecx_47) = fconvert.s(fabs(x87_r5_38))
                                
                                x87_r6_5 = x87_r7_3
                                x87_r7_16 = x87_r6_4
                                *(eax_76 + ecx_47) = fconvert.s(x87_r6_5)
                                *(eax_74 + ecx_47) = fconvert.s(x87_r6_5)
                                *(eax_80 + ecx_47) = 1
                                *(ebx_41 + ecx_47) = 0
                            
                            long double x87_r5_50 =
                                fconvert.t(*(eax_84 + ecx_47)) + fconvert.t(*(eax_86 + ecx_47))
                            ecx_47 = &ecx_47[1]
                            long double x87_r5_51 = fconvert.t(fconvert.s(x87_r5_50))
                            *(eax_84 + ecx_47 - 4) = fconvert.s(x87_r5_51)
                            int32_t eax_116 = var_2c_3 + 1
                            *(eax_86 + ecx_47 - 4) = fconvert.s(x87_r5_51)
                            var_2c_3 = eax_116
                            
                            if (eax_116 s>= j_10)
                                break
                            
                            x87_r6_4 = x87_r7_16
                            x87_r7_3 = x87_r6_5
                    
                    ebx_1 = var_50
                    int32_t var_b8_4 = edi_42
                    int32_t j_12 = j_10
                    *var_30_2 = fconvert.s(sub_5beb60(ebx_28, arg4, eax_5, esi_10, ebx_32, ebx_36, 
                        fconvert.s(fconvert.t(*var_30_2)), var_34, j_10))
                    x87_r7_3 = float.t(0)
                    var_30_2 += 4
                else
                    ebx_1 = var_50
                
                var_24_2 = &var_24_2[1]
                i_1 = i_4 + 1
                i_4 = i_1
            while (i_1 s< *(arg5 + 0x484))
        
        eax_123 = var_34 + j_14
        j_13 += neg.d(j_14)
        var_34 = eax_123
    while (eax_123 s< j_15)

int32_t i_6 = *(arg5 + 0x484)

if (i_6 s> 0)
    void* eax_125 = arg5 + 0x888
    int32_t i_5 = i_6
    int32_t i_2
    
    do
        int32_t ecx_52 = *(eax_125 - 0x400)
        
        if (*(arg8 + (ecx_52 << 2)) != 0 || *(arg8 + (*eax_125 << 2)) != 0)
            *(arg8 + (ecx_52 << 2)) = 1
            *(arg8 + (*eax_125 << 2)) = 1
        
        eax_125 += 4
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

sub_6b4885(eax_1 ^ &var_60)
