// 函数: sub_5e82d0
// 地址: 0x5e82d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_130
int32_t eax_1 = data_78c474 ^ &var_130

if (arg2[1] != 0)
    int32_t* ecx = *arg2
    
    if (ecx != 0xffffffff)
        void* edx = data_797d2c
        int32_t* var_144_1 = ecx
        void* eax_5 = sub_40c350(*(edx + 0x30) + 0x274, edx, ecx)
        
        if (eax_5 != 0)
            int32_t edx_1 = sub_5e82a0(arg2, 1)
            int32_t eax_7 = arg13[0x10]
            int32_t ecx_1 = arg13[0x11]
            float var_a8[0x10]
            sub_6603e0(&var_a8, edx_1, arg13)
            long double x87_r7_1 = float.t(0)
            float var_e4 = fconvert.s(x87_r7_1)
            float var_e0_1 = fconvert.s(x87_r7_1)
            float var_dc_1 =
                fconvert.s((fconvert.t(arg13[0x13]) + fconvert.t(arg13[0x12])) * fconvert.t(0.5))
            float var_d8
            long double x87_r7_5 = fconvert.t(sub_51e1c0(arg13, &var_d8, arg13, &var_e4)[2])
            int32_t eax_11 = *arg6
            float var_128_1 = fconvert.s(x87_r7_5)
            int32_t ecx_3 = arg6[1]
            long double x87_r7_6 = float.t(0)
            int32_t edx_3 = *arg7
            float var_68 = fconvert.s(x87_r7_6)
            int32_t var_24[0x2]
            var_24[0] = eax_11
            float var_64_1 = fconvert.s(x87_r7_6)
            float var_60_1 = fconvert.s(x87_r7_6)
            int32_t var_18_1 = arg7[1]
            float var_5c_1 = fconvert.s(x87_r7_6)
            float var_58_1 = fconvert.s(x87_r7_6)
            var_24[1] = ecx_3
            float var_54_1 = fconvert.s(x87_r7_6)
            float var_50_1 = fconvert.s(x87_r7_6)
            int32_t var_1c_1 = edx_3
            float var_4c_1 = fconvert.s(x87_r7_6)
            float var_48_1 = fconvert.s(x87_r7_6)
            float var_44_1 = fconvert.s(x87_r7_6)
            int32_t var_14_1 = *arg8
            float var_40_1 = fconvert.s(x87_r7_6)
            int32_t ecx_5 = *arg1
            float var_3c_1 = fconvert.s(x87_r7_6)
            int32_t var_10_1 = arg8[1]
            float var_38_1 = fconvert.s(x87_r7_6)
            float var_34_1 = fconvert.s(x87_r7_6)
            int32_t var_c_1 = ecx_5
            float var_30_1 = fconvert.s(x87_r7_6)
            int32_t var_8_1 = arg1[1]
            float var_2c_1 = fconvert.s(x87_r7_6)
            int32_t i = 0
            float* edi_1 = &var_68
            float var_c4_1 = fconvert.s(fconvert.t(var_128_1))
            float var_b4_1 = fconvert.s(float.t(1))
            float var_128_2 = fconvert.s(float.t(arg3))
            long double x87_r6_1 = fconvert.t(0.5)
            int32_t* var_f0
            var_f0.q = fconvert.d(float.t(eax_7) * x87_r6_1)
            float var_12c_1 = fconvert.s(float.t(arg4))
            double var_b0_1 = fconvert.d(x87_r6_1 * float.t(ecx_1))
            
            do
                long double x87_r5_3 = fconvert.t((&var_24)[i][0])
                float* edx_6 = &var_d8
                float var_cc = fconvert.s(x87_r5_3 / x87_r5_3)
                var_20
                long double x87_r6_6 = fneg(fconvert.t(*(&var_20 + (i << 3))))
                float var_c8_1 = fconvert.s(x87_r6_6 / x87_r6_6)
                sub_51e1c0(ecx_5, edx_6, &var_a8, &var_cc)
                float var_10c = fconvert.s(fconvert.t(var_d8))
                float var_d4
                float var_108_1 = fconvert.s(fconvert.t(var_d4))
                float var_104_1 = fconvert.s(float.t(0))
                sub_51e0e0(arg5, edx_6, &var_10c)
                long double x87_r6_7 = float.t(0)
                float var_fc_1 = fconvert.s(x87_r6_7 + fconvert.t(var_108_1))
                float var_f8_1 = fconvert.s(fconvert.t(var_104_1) + fconvert.t(var_dc_1))
                float var_c0 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_10c) + x87_r6_7)))
                float var_bc_1 = fconvert.s(fconvert.t(var_fc_1))
                float var_b8_1 = fconvert.s(fconvert.t(var_f8_1))
                float var_11c
                sub_6601d0(arg13, &var_11c, &var_c0)
                int32_t var_114
                ecx_5 = var_114
                float var_110
                long double x87_r6_9 = fconvert.t(var_110)
                i += 1
                edi_1 = &edi_1[4]
                var_11c = fconvert.s(fconvert.t(var_128_2) * x87_r6_9 / fconvert.t(var_f0.q)
                    + fconvert.t(var_11c))
                edi_1[-4] = var_11c
                float var_118 = fconvert.s(fconvert.t(var_118)
                    - x87_r6_9 * fconvert.t(var_12c_1) / fconvert.t(var_b0_1))
                edi_1[-3] = var_118
                edi_1[-2] = ecx_5
                edi_1[-1] = var_110
            while (i s< 4)
            
            sub_40c8a0(eax_5, fconvert.s(fconvert.t(var_68)), fconvert.s(fconvert.t(var_64_1)), 
                fconvert.s(fconvert.t(var_60_1)), fconvert.s(fconvert.t(var_5c_1)), 
                fconvert.s(fconvert.t(*arg9)), fconvert.s(fconvert.t(arg9[1])), 
                fconvert.s(fconvert.t(var_58_1)), fconvert.s(fconvert.t(var_54_1)), 
                fconvert.s(fconvert.t(var_50_1)), fconvert.s(fconvert.t(var_4c_1)), 
                fconvert.s(fconvert.t(*arg10)), fconvert.s(fconvert.t(arg10[1])), 
                fconvert.s(fconvert.t(var_48_1)), fconvert.s(fconvert.t(var_44_1)), 
                fconvert.s(fconvert.t(var_40_1)), fconvert.s(fconvert.t(var_3c_1)), 
                fconvert.s(fconvert.t(*arg11)), fconvert.s(fconvert.t(arg11[1])), 
                fconvert.s(fconvert.t(var_38_1)), fconvert.s(fconvert.t(var_34_1)), 
                fconvert.s(fconvert.t(var_30_1)), fconvert.s(fconvert.t(var_2c_1)), 
                fconvert.s(fconvert.t(*arg12)), fconvert.s(fconvert.t(arg12[1])), eax_7, ecx_1)

sub_6b4885(eax_1 ^ &var_130)
