// 函数: sub_434f80
// 地址: 0x434f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_58
int32_t eax_1 = data_78c474 ^ &var_58
int32_t* eax_2 = arg3
int32_t i = 0
int32_t* var_34 = eax_2

if (*(arg1 + 0x54) != 0 && *(arg1 + 0x1c) s> 0)
    eax_2 = *(arg1 + 0xd0)
    
    if (eax_2 != 0)
        int32_t* ecx_1 = *(arg1 + 4)
        
        if (ecx_1 != 0)
            int32_t ebx_1 = eax_2[2]
            int32_t eax_3 = eax_2[3]
            
            if (*(arg1 + 0x58) == 1)
                long double x87_r6_1 = fconvert.t(0.5)
                int32_t var_1c = 0
                int32_t var_18
                __builtin_memcpy(&var_18, 
                    "\x01\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00", 
                    0x14)
                float var_3c_1 = fconvert.s(float.t(arg7) * x87_r6_1)
                float var_38_1 = fconvert.s(float.t(arg4))
                float var_40_1 = fconvert.s(float.t(arg5))
                float var_44_1 = fconvert.s(fneg(fconvert.t(var_3c_1)))
                float var_48_1 = fconvert.s(float.t(ebx_1))
                float var_50_2 = fconvert.s(float.t(eax_3))
                long double x87_r6_11 = fconvert.t(fconvert.s(float.t(arg6) * x87_r6_1))
                long double x87_r5_1 = float.t(0)
                
                do
                    int32_t ecx_2 = (&var_1c)[i]
                    int32_t eax_5 = ecx_2 * 2
                    float ebp_3 = *(arg1 + (eax_5 << 3) + 0x64)
                    long double x87_r2_1 = fconvert.t(*(arg1 + (eax_5 << 3) + 0x68))
                    void* eax_9 = *arg2 + 0x1c
                    i += 1
                    long double x87_r3_9 = x87_r2_1 * x87_r6_1
                    long double x87_r2_8 = fconvert.t(fconvert.s((fconvert.t(var_38_1) * x87_r2_1
                        + fconvert.t(fconvert.s(float.t(*(arg1 + 0xbc)) * x87_r6_1))
                        * fconvert.t(*(arg1 + (eax_5 << 3) + 0x5c))) / x87_r6_11 - x87_r2_1))
                        - x87_r3_9 / x87_r6_11
                    float var_30_3 = fconvert.s(x87_r2_8)
                    long double x87_r3_11 = fconvert.t(fconvert.s(x87_r2_1 - (
                        fconvert.t(var_40_1) * x87_r2_1
                        - fconvert.t(fconvert.s(float.t(*(arg1 + 0xc0)) * x87_r6_1))
                        * fconvert.t(*(arg1 + (eax_5 << 3) + 0x60))) / fconvert.t(var_3c_1)))
                        - x87_r3_9 / fconvert.t(var_44_1)
                    float var_2c_3 = fconvert.s(x87_r3_11)
                    float var_54_4 = fconvert.s((fconvert.t(*(arg1 + (ecx_2 << 3) + 0x9c))
                        + x87_r5_1) / fconvert.t(var_48_1))
                    long double x87_r3_16 = fconvert.t(*(arg1 + (ecx_2 << 3) + 0xa0)) + x87_r5_1
                    *arg2 = eax_9
                    float var_4c_2 = fconvert.s(x87_r3_16 / fconvert.t(var_50_2))
                    *(eax_9 - 0x1c) = fconvert.s(fconvert.t(var_30_3))
                    *(eax_9 - 0x18) = fconvert.s(fconvert.t(var_2c_3))
                    *(eax_9 - 0x14) = fconvert.s(fconvert.t(ebp_3))
                    *(eax_9 - 0x10) = fconvert.s(fconvert.t(var_54_4))
                    *(eax_9 - 0xc) = fconvert.s(fconvert.t(var_4c_2))
                    *(eax_9 - 8) = fconvert.s(x87_r2_1)
                    *(eax_9 - 4) = fconvert.s(float.t(0))
                while (i s< 6)
                
                *(arg1 + 0xcc) = *var_34
                *var_34 += 6
                sub_6b4885(eax_1 ^ &var_58)
                return var_34
            
            float eax_11 = *(arg1 + 0x4c)
            float var_54_9
            float var_4c_3
            float var_48_3
            float var_44_2
            float var_40_2
            float var_3c_2
            float var_38_2
            long double x87_r7_13
            
            if (eax_11 s> 0 || *(arg1 + 0x50) s> 0)
                void* eax_19 = arg1 + 0x14
                var_58 = eax_11
                
                if (eax_11 s< *eax_19)
                    eax_19 = &var_58
                
                int32_t ebx_3 = *eax_19
                float ecx_10 = *(arg1 + 0x50)
                void* eax_20 = arg1 + 0x18
                var_58 = ecx_10
                
                if (ecx_10 s< *eax_20)
                    eax_20 = &var_58
                
                int32_t eax_21 = *eax_20
                int32_t ecx_11 = *(arg1 + 8)
                var_58 = arg4 + ecx_11
                int32_t edx_8 = *(arg1 + 0xc)
                var_38_2 = fconvert.s(float.t(var_58))
                var_58 = arg5 + edx_8
                long double x87_r7_15 = float.t(var_58)
                var_58 = ecx_11 + ebx_3 + arg4
                float ecx_14 = *(arg1 + 0x44)
                var_3c_2 = fconvert.s(x87_r7_15)
                long double x87_r7_16 = float.t(var_58)
                var_58 = edx_8 + eax_21 + arg5
                var_40_2 = fconvert.s(x87_r7_16)
                float edx_11 = *(arg1 + 0x48)
                long double x87_r7_17 = float.t(var_58)
                var_58 = ecx_14
                var_44_2 = fconvert.s(x87_r7_17)
                float var_48_4 = fconvert.s(float.t(ebx_1))
                long double x87_r7_19 = float.t(var_58)
                var_58 = edx_11
                var_48_3 = fconvert.s(x87_r7_19 / fconvert.t(var_48_4))
                float var_50_4 = fconvert.s(float.t(eax_3))
                long double x87_r6_21 = float.t(var_58)
                var_58 = ecx_14 i+ ebx_3
                long double x87_r5_9 = fconvert.t(var_50_4)
                var_54_9 = fconvert.s(x87_r6_21 / x87_r5_9)
                long double x87_r5_11 = float.t(var_58)
                var_58 = edx_11 i+ eax_21
                var_4c_3 = fconvert.s(x87_r5_11 / x87_r5_11)
                x87_r7_13 = float.t(var_58) / x87_r5_9
            else
                int32_t eax_13 = (*(*ecx_1 + 0x10))()
                var_58 = (*(**(arg1 + 4) + 0x14))()
                int32_t eax_16 = *(arg1 + 8)
                int32_t ecx_8 = *(arg1 + 0xc)
                var_38_2 = fconvert.s(float.t(eax_16 + arg4))
                var_3c_2 = fconvert.s(float.t(ecx_8 + arg5))
                var_40_2 = fconvert.s(float.t(eax_16 + arg4 + *(arg1 + 0x14)))
                var_44_2 = fconvert.s(float.t(*(arg1 + 0x18) + ecx_8 + arg5))
                long double x87_r5_2 = float.t(0)
                var_48_3 = fconvert.s(x87_r5_2 / x87_r5_2)
                long double x87_r5_5 = fconvert.t(fconvert.s(float.t(eax_3)))
                var_54_9 = fconvert.s(x87_r5_2 / x87_r5_5)
                long double x87_r5_7 = float.t(eax_13)
                var_4c_3 = fconvert.s(x87_r5_7 / x87_r5_7)
                x87_r7_13 = float.t(var_58) / x87_r5_5
            
            float var_50_5 = fconvert.s(x87_r7_13)
            float* eax_22 = *arg2
            var_58 = fconvert.s(float.t(arg6))
            long double x87_r5_12 = float.t(1)
            long double x87_r6_26 = x87_r5_12 / x87_r5_12
            long double x87_r3_23 = fconvert.t(2.0)
            var_58 = fconvert.s(fconvert.t(var_38_2) * x87_r3_23 / fconvert.t(var_58) - x87_r5_12)
            float var_38_3 = fconvert.s(fconvert.t(var_58) - x87_r6_26)
            long double x87_r3_29 = fconvert.t(var_40_2) * x87_r3_23
            var_58 = fconvert.s(x87_r3_29 / x87_r3_29 - x87_r5_12)
            float var_40_3 = fconvert.s(fconvert.t(var_58) - x87_r6_26)
            var_58 = fconvert.s(float.t(arg7))
            long double x87_r5_15 = fconvert.t(var_58)
            long double x87_r4_19 = x87_r5_12 / x87_r5_15
            var_58 = fconvert.s(x87_r5_12 - fconvert.t(var_3c_2) * x87_r3_23 / x87_r5_15)
            float var_3c_3 = fconvert.s(fconvert.t(var_58) + x87_r4_19)
            long double x87_r7_28 = x87_r3_23 * fconvert.t(var_44_2)
            var_58 = fconvert.s(x87_r5_12 - x87_r7_28 / x87_r7_28)
            float var_44_3 = fconvert.s(x87_r4_19 + fconvert.t(var_58))
            long double x87_r7_31 = fconvert.t(var_38_3)
            *eax_22 = fconvert.s(x87_r7_31)
            long double x87_r6_30 = fconvert.t(var_3c_3)
            eax_22[1] = fconvert.s(x87_r6_30)
            long double x87_r5_17 = fconvert.t(0.5f)
            eax_22[2] = fconvert.s(x87_r5_17)
            long double x87_r4_21 = fconvert.t(var_48_3)
            eax_22[3] = fconvert.s(x87_r4_21)
            long double x87_r3_37 = fconvert.t(var_54_9)
            eax_22[4] = fconvert.s(x87_r3_37)
            long double x87_r2_11 = float.t(1)
            eax_22[5] = fconvert.s(x87_r2_11)
            long double x87_r1_8 = float.t(0)
            eax_22[6] = fconvert.s(x87_r1_8)
            eax_22[7] = fconvert.s(fconvert.t(var_40_3))
            eax_22[8] = fconvert.s(x87_r6_30)
            eax_22[9] = fconvert.s(x87_r5_17)
            eax_22[0xa] = fconvert.s(fconvert.t(var_4c_3))
            eax_22[0xb] = fconvert.s(x87_r3_37)
            eax_22[0xc] = fconvert.s(x87_r2_11)
            eax_22[0xd] = fconvert.s(x87_r1_8)
            eax_22[0xe] = fconvert.s(x87_r7_31)
            *arg2 = &eax_22[0x2a]
            eax_22[0xf] = fconvert.s(fconvert.t(var_44_3))
            eax_22[0x10] = fconvert.s(x87_r5_17)
            eax_22[0x11] = fconvert.s(x87_r4_21)
            eax_22[0x12] = fconvert.s(fconvert.t(var_50_5))
            eax_22[0x13] = fconvert.s(x87_r2_11)
            eax_22[0x14] = fconvert.s(x87_r1_8)
            eax_22[0x15] = fconvert.s(x87_r7_31)
            long double x87_r1_20 = fconvert.t(var_44_3)
            eax_22[0x16] = fconvert.s(x87_r1_20)
            eax_22[0x17] = fconvert.s(x87_r5_17)
            eax_22[0x18] = fconvert.s(x87_r4_21)
            eax_22[0x19] = fconvert.s(fconvert.t(var_50_5))
            eax_22[0x1a] = fconvert.s(x87_r2_11)
            eax_22[0x1b] = fconvert.s(x87_r1_8)
            long double x87_r1_24 = fconvert.t(var_40_3)
            eax_22[0x1c] = fconvert.s(x87_r1_24)
            eax_22[0x1d] = fconvert.s(x87_r6_30)
            eax_22[0x1e] = fconvert.s(x87_r5_17)
            long double x87_r1_26 = fconvert.t(var_4c_3)
            eax_22[0x1f] = fconvert.s(x87_r1_26)
            eax_22[0x20] = fconvert.s(x87_r3_37)
            eax_22[0x21] = fconvert.s(x87_r2_11)
            eax_22[0x22] = fconvert.s(x87_r1_8)
            eax_22[0x23] = fconvert.s(x87_r1_24)
            eax_22[0x24] = fconvert.s(x87_r1_20)
            eax_22[0x25] = fconvert.s(x87_r5_17)
            eax_22[0x26] = fconvert.s(x87_r1_26)
            eax_22[0x27] = fconvert.s(fconvert.t(var_50_5))
            eax_22[0x28] = fconvert.s(x87_r2_11)
            eax_22[0x29] = fconvert.s(x87_r1_8)
            eax_2 = *var_34
            *(arg1 + 0xcc) = eax_2
            *var_34 += 6

sub_6b4885(eax_1 ^ &var_58)
return eax_2
