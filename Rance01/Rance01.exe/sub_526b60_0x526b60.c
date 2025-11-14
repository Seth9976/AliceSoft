// 函数: sub_526b60
// 地址: 0x526b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71480b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_184 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg1 s>= 0)
    eax_3 = data_797d4c
    
    if (arg1 s< (eax_3[0x11] - eax_3[0x10]) s>> 2)
        eax_3 = *(eax_3[0x10] + (arg1 << 2))
        
        if (eax_3 != 0 && arg3 s>= 0)
            int32_t edx_4 = eax_3[4]
            
            if (arg3 s< (eax_3[5] - edx_4) s>> 2)
                void* edx_5 = *(edx_4 + (arg3 << 2))
                
                if (edx_5 != 0)
                    void* esi_2 = *(edx_5 + 0x1d0)
                    
                    if (esi_2 != 0)
                        eax_3 = sub_4b0040(arg1, arg2)
                        
                        if (eax_3 != 0)
                            int32_t var_154
                            int32_t ebx
                            
                            if (esi_2 != 0)
                                int32_t ecx_5 = (*(esi_2 + 0x44) - *(esi_2 + 0x40)) s>> 6
                                var_154 = ecx_5
                                ebx = ecx_5
                            else
                                ebx = 0
                                var_154 = 0
                            
                            void* var_174
                            sub_4c8880(&eax_3[0x9d], &var_174, eax_3[0x9d], eax_3[0x9e])
                            void** eax_8
                            
                            if (ebx s> 0)
                                void** var_c8 = nullptr
                                int32_t var_c4_1 = 0
                                int32_t var_c0_1 = 0
                                var_174 = 0xffffffff
                                sub_4257e0(&var_c8, ebx, &var_174)
                                int32_t esi_4 = 0
                                int32_t eax_9 = 0
                                int32_t var_c_1 = 0
                                
                                if (ebx s> 0)
                                    do
                                        if (eax_9 s>= 0 && eax_9
                                                s< (*(esi_2 + 0x44) - *(esi_2 + 0x40)) s>> 6)
                                            int32_t ecx_9 = *(esi_4 + *(esi_2 + 0x40) + 0x1c)
                                            
                                            if (ecx_9 s>= 0)
                                                void** edx_11 = var_c8
                                                
                                                if (ecx_9 s< (var_c4_1 - edx_11) s>> 2)
                                                    edx_11[ecx_9] = eax_9
                                        
                                        eax_9 += 1
                                        esi_4 += 0x40
                                    while (eax_9 s< ebx)
                                
                                int32_t edi_5 = 0
                                int32_t var_170_2 = 0
                                
                                if (ebx s> 0)
                                    long double x87_r7_1 = float.t(0)
                                    float var_6c = fconvert.s(x87_r7_1)
                                    float var_68_1 = fconvert.s(x87_r7_1)
                                    float var_64_1 = fconvert.s(x87_r7_1)
                                    float var_98_1 = fconvert.s(x87_r7_1)
                                    float var_94_1 = fconvert.s(x87_r7_1)
                                    float var_54 = fconvert.s(x87_r7_1)
                                    long double x87_r6_1 = float.t(1)
                                    float var_50_1 = fconvert.s(x87_r6_1)
                                    float var_7c_1 = fconvert.s(x87_r6_1)
                                    float var_4c_1 = fconvert.s(x87_r7_1)
                                    float var_84 = fconvert.s(x87_r7_1)
                                    float var_80_1 = fconvert.s(x87_r7_1)
                                    
                                    while (true)
                                        float var_16c
                                        sub_4c4980(edx_5, edi_5, &var_16c, &var_6c)
                                        void** eax_11 = var_c8
                                        var_174 = fconvert.s(fconvert.t(0.100000001f))
                                        float var_168
                                        float var_164
                                        float var_160
                                        
                                        if (eax_11[edi_5] != 0xffffffff)
                                            long double x87_r7_3 = float.t(0)
                                            int32_t eax_12 = eax_11[edi_5]
                                            float var_78 = fconvert.s(x87_r7_3)
                                            float var_74_1 = fconvert.s(x87_r7_3)
                                            float var_70_1 = fconvert.s(x87_r7_3)
                                            void var_48
                                            int32_t* eax_13 =
                                                sub_4c4980(edx_5, eax_12, &var_48, &var_78)
                                            float ecx_12 = eax_13[1]
                                            long double x87_r7_5 =
                                                fconvert.t(var_168) - fconvert.t(ecx_12)
                                            long double x87_r6_2 = fconvert.t(var_16c)
                                            var_160 = *eax_13
                                            long double x87_r6_3 = x87_r6_2 - fconvert.t(var_160)
                                            long double x87_r5_2 =
                                                fconvert.t(var_164) - fconvert.t(eax_13[2])
                                            float var_188_4 = ecx_12
                                            var_174 = fconvert.s(x87_r7_5 * x87_r7_5
                                                + x87_r6_3 * x87_r6_3 + x87_r5_2 * x87_r5_2)
                                            var_174 = fconvert.s(sub_4d9250(fconvert.s(fconvert.t(
                                                var_174))))
                                        
                                        float var_9c = fconvert.s(fconvert.t(var_174))
                                        void var_24
                                        int32_t* eax_15 = sub_4c4980(edx_5, edi_5, &var_24, &var_9c)
                                        float edx_14 = eax_15[1]
                                        float eax_16 = eax_15[2]
                                        var_160 = *eax_15
                                        int32_t ebx_2
                                        
                                        if (edi_5 != arg4)
                                            int32_t ebx_4 = edi_5 - arg5
                                            int32_t ebx_5 = neg.d(ebx_4)
                                            ebx_2 = (sbb.d(ebx_5, ebx_5, ebx_4 != 0) & 0xffc1c0c0)
                                                + 0xff0000
                                        else
                                            ebx_2 = 0xc0
                                        
                                        long double x87_r6_7 = fconvert.t(var_16c)
                                        long double x87_r5_5 = fconvert.t(var_168)
                                        long double x87_r4_4 = fconvert.t(var_164)
                                        long double x87_r3_2 = fconvert.t(0.25)
                                        float var_f8_1 = fconvert.s(x87_r6_7 + fconvert.t(fconvert
                                            .s(
                                            fconvert.t(fconvert.s(fconvert.t(var_160) - x87_r6_7))
                                            * x87_r3_2)))
                                        float var_f4_1 = fconvert.s(x87_r5_5 + fconvert.t(fconvert
                                            .s(fconvert.t(fconvert.s(fconvert.t(edx_14) - x87_r5_5))
                                            * x87_r3_2)))
                                        float var_f0_1 = fconvert.s(x87_r4_4 + fconvert.t(fconvert
                                            .s(x87_r3_2 *
                                            fconvert.t(fconvert.s(fconvert.t(eax_16) - x87_r4_4)))))
                                        float var_140
                                        sub_4c4980(edx_5, edi_5, &var_140, &var_54)
                                        float var_60 =
                                            fconvert.s(fconvert.t(var_140) - fconvert.t(var_16c))
                                        float var_13c
                                        float var_5c_1 =
                                            fconvert.s(fconvert.t(var_13c) - fconvert.t(var_168))
                                        float var_138
                                        float var_58_1 =
                                            fconvert.s(fconvert.t(var_138) - fconvert.t(var_164))
                                        float var_30
                                        float* eax_18 = sub_51e2a0(&var_60, &var_30)
                                        float ecx_16 = eax_18[1]
                                        var_140 = *eax_18
                                        var_13c = ecx_16
                                        var_138 = eax_18[2]
                                        float var_14c
                                        sub_4c4980(edx_5, var_170_2, &var_14c, &var_84)
                                        float var_90 =
                                            fconvert.s(fconvert.t(var_14c) - fconvert.t(var_16c))
                                        float var_148
                                        float var_8c_1 =
                                            fconvert.s(fconvert.t(var_148) - fconvert.t(var_168))
                                        float var_144
                                        float var_88_1 =
                                            fconvert.s(fconvert.t(var_144) - fconvert.t(var_164))
                                        float var_3c
                                        float* eax_20 = sub_51e2a0(&var_90, &var_3c)
                                        float edx_17 = eax_20[1]
                                        var_14c = *eax_20
                                        long double x87_r7_30 = fconvert.t(var_140)
                                        var_148 = edx_17
                                        long double x87_r5_11 = fconvert.t(0.0099999997764825821)
                                        var_144 = eax_20[2]
                                        long double x87_r5_13 = fconvert.t(var_13c)
                                        float var_100_1 = fconvert.s(x87_r5_13 * x87_r5_11)
                                        float var_fc_1 = fconvert.s(fconvert.t(var_138) * x87_r5_11)
                                        long double x87_r3_6 = fconvert.t(var_f8_1)
                                        float var_11c = fconvert.s(
                                            fconvert.t(fconvert.s(x87_r7_30 * x87_r5_11))
                                            + x87_r3_6)
                                        long double x87_r2_2 = fconvert.t(var_f4_1)
                                        float var_118_1 =
                                            fconvert.s(fconvert.t(var_100_1) + x87_r2_2)
                                        long double x87_r1_2 = fconvert.t(var_f0_1)
                                        float var_114_1 =
                                            fconvert.s(fconvert.t(var_fc_1) + x87_r1_2)
                                        long double x87_r1_4 = fconvert.t(-0.0099999997764825821)
                                        float var_e8_1 = fconvert.s(x87_r5_13 * x87_r1_4)
                                        float var_e4_1 = fconvert.s(fconvert.t(var_138) * x87_r1_4)
                                        float var_134 = fconvert.s(
                                            fconvert.t(fconvert.s(x87_r7_30 * x87_r1_4)) + x87_r3_6)
                                        float var_130_1 =
                                            fconvert.s(fconvert.t(var_e8_1) + x87_r2_2)
                                        float var_12c_1 =
                                            fconvert.s(fconvert.t(var_e4_1) + x87_r1_2)
                                        long double x87_r2_17 = fconvert.t(var_14c)
                                        long double x87_r1_8 = fconvert.t(var_148)
                                        float var_d0_1 = fconvert.s(x87_r1_8 * x87_r5_11)
                                        float var_cc_1 = fconvert.s(x87_r5_11 * fconvert.t(var_144))
                                        float var_128 = fconvert.s(
                                            fconvert.t(fconvert.s(x87_r2_17 * x87_r5_11))
                                            + x87_r3_6)
                                        float var_124_1 =
                                            fconvert.s(fconvert.t(var_d0_1) + x87_r2_2)
                                        float var_120_1 =
                                            fconvert.s(fconvert.t(var_cc_1) + x87_r1_2)
                                        float var_b4_1 = fconvert.s(x87_r1_8 * x87_r1_4)
                                        float var_b0_1 = fconvert.s(x87_r1_4 * fconvert.t(var_144))
                                        float var_110 = fconvert.s(x87_r3_6
                                            + fconvert.t(fconvert.s(x87_r2_17 * x87_r1_4)))
                                        float var_10c_1 =
                                            fconvert.s(x87_r2_2 + fconvert.t(var_b4_1))
                                        float var_108_1 =
                                            fconvert.s(x87_r1_2 + fconvert.t(var_b0_1))
                                        sub_4c7640(&var_11c, eax_3, ebx_2, &var_128, ebx_2)
                                        sub_4c7640(&var_11c, eax_3, ebx_2, &var_110, ebx_2)
                                        sub_4c7640(&var_134, eax_3, ebx_2, &var_128, ebx_2)
                                        sub_4c7640(&var_134, eax_3, ebx_2, &var_110, ebx_2)
                                        sub_4c7640(&var_16c, eax_3, ebx_2, &var_11c, ebx_2)
                                        sub_4c7640(&var_16c, eax_3, ebx_2, &var_134, ebx_2)
                                        sub_4c7640(&var_16c, eax_3, ebx_2, &var_128, ebx_2)
                                        sub_4c7640(&var_16c, eax_3, ebx_2, &var_110, ebx_2)
                                        sub_4c7640(&var_160, eax_3, ebx_2, &var_11c, ebx_2)
                                        sub_4c7640(&var_160, eax_3, ebx_2, &var_134, ebx_2)
                                        sub_4c7640(&var_160, eax_3, ebx_2, &var_128, ebx_2)
                                        sub_4c7640(&var_160, eax_3, ebx_2, &var_110, ebx_2)
                                        int32_t eax_23 = var_170_2 + 1
                                        var_170_2 = eax_23
                                        
                                        if (eax_23 s>= var_154)
                                            break
                                        
                                        edi_5 = var_170_2
                                
                                eax_8 = var_c8
                                
                                if (eax_8 != 0)
                                    void** var_188_21 = eax_8
                                    sub_6b4d5b()
                            
                            eax_8.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_8

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
