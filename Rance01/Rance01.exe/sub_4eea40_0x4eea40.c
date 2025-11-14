// 函数: sub_4eea40
// 地址: 0x4eea40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_1f8
int32_t eax_1 = data_78c474 ^ &var_1f8
int32_t eax_3 = *(arg4 + 8)
float* var_1e0 = arg1
float eax_4

if (eax_3 == 2)
    float var_1f4_1 = fconvert.s(fconvert.t(*(arg2 + 0x130)))
    long double x87_r7_2 = float.t(0)
    
    if (*(arg4 + 0x15c) == 1 && *(arg2 + 0x12c) != eax_3 - 2)
        int32_t* edx = *(arg4 + 0x160)
        void* eax_6
        eax_6, arg1 = sub_4c5960(*edx, edx, arg2)
        
        if (eax_6 == 0)
            var_1f4_1 = fconvert.s(x87_r7_2)
        else if (*(eax_6 + 0x1a4) == 0)
            var_1f4_1 = fconvert.s(fconvert.t(*(eax_6 + 0x130)))
        else
            var_1f4_1 = fconvert.s(x87_r7_2)
    
    float* var_208_1 = arg1
    int80_t st0_1
    st0_1, eax_4 = sub_4ef1b0(arg4, fconvert.s(fconvert.t(var_1f4_1)))
    
    if (*(arg4 + 0x20c) != 0)
        void* var_208_3 = arg4
        float var_cc
        sub_5dd020(&var_cc, fconvert.s(fneg(fconvert.t(*(arg2 + 0x48)))))
        float var_10c
        sub_4b65a0(&var_10c, fconvert.s(fneg(fconvert.t(*(arg2 + 0x44)))))
        float var_4c[0x11]
        float (* eax_9)[0x11] = &var_4c
        sub_5dcfd0(eax_9, fconvert.s(fneg(fconvert.t(*(arg2 + 0x40)))))
        float var_8c[0x10]
        float* eax_10 = sub_4b65f0(eax_9, &var_4c, &var_10c, &var_8c)
        float var_1cc[0x10]
        sub_4b65f0(eax_10, eax_10, &var_cc, &var_1cc)
        sub_5dd020(&var_8c, fconvert.s(fconvert.t(*(arg2 + 0x48))))
        sub_4b65a0(&var_4c, fconvert.s(fconvert.t(*(arg2 + 0x44))))
        float* eax_13 = &var_cc
        sub_5dcfd0(eax_13, fconvert.s(fconvert.t(*(arg2 + 0x40))))
        float var_18c[0x10]
        float* eax_14 = sub_4b65f0(eax_13, &var_cc, &var_4c, &var_18c)
        float* ecx_5 = &var_8c
        sub_4b65f0(eax_14, eax_14, ecx_5, &var_10c)
        long double x87_r7_14 = float.t(1)
        var_cc = fconvert.s(x87_r7_14)
        long double x87_r6_1 = float.t(0)
        float var_c8_1 = fconvert.s(x87_r6_1)
        float var_c4_1 = fconvert.s(x87_r6_1)
        float var_c0_1 = fconvert.s(x87_r6_1)
        float var_bc_1 = fconvert.s(x87_r6_1)
        float var_b4_1 = fconvert.s(x87_r6_1)
        float var_b0_1 = fconvert.s(x87_r6_1)
        float var_ac_1 = fconvert.s(x87_r6_1)
        float var_a8_1 = fconvert.s(x87_r6_1)
        float var_a0_1 = fconvert.s(x87_r6_1)
        float var_b8_1 = fconvert.s(x87_r7_14)
        float var_a4_1 = fconvert.s(x87_r7_14)
        float var_9c_1 = fconvert.s(fconvert.t(*(arg2 + 0x28)))
        float var_98_1 = fconvert.s(fconvert.t(*(arg2 + 0x2c)))
        float var_94_1 = fconvert.s(fconvert.t(*(arg2 + 0x30)))
        float var_90_1 = fconvert.s(x87_r7_14)
        float var_1dc[0x4]
        float* edx_5 = &var_1dc
        long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x4c))))
        float var_1f0 = fconvert.s(fconvert.t(*arg5) * x87_r6_5)
        float var_1ec_1 = fconvert.s(fconvert.t(arg5[1]) * x87_r6_5)
        float var_1e8_1 = fconvert.s(x87_r6_5 * fconvert.t(arg5[2]))
        float* eax_17 = sub_51e1c0(ecx_5, edx_5, &var_10c, &var_1f0)
        long double x87_r7_20 = float.t(1)
        var_10c = fconvert.s(x87_r7_20)
        long double x87_r6_9 = float.t(0)
        float var_108_1 = fconvert.s(x87_r6_9)
        float var_104_1 = fconvert.s(x87_r6_9)
        float var_100_1 = fconvert.s(x87_r6_9)
        float var_fc_1 = fconvert.s(x87_r6_9)
        float var_f4_1 = fconvert.s(x87_r6_9)
        float var_f0_1 = fconvert.s(x87_r6_9)
        float var_ec_1 = fconvert.s(x87_r6_9)
        float var_e8_1 = fconvert.s(x87_r6_9)
        float var_e0_1 = fconvert.s(x87_r6_9)
        float var_f8_1 = fconvert.s(x87_r7_20)
        float var_e4_1 = fconvert.s(x87_r7_20)
        float var_dc_1 = fconvert.s(fconvert.t(*eax_17))
        float var_d8_1 = fconvert.s(fconvert.t(eax_17[1]))
        float (* eax_18)[0x10] = &var_18c
        float var_d4_1 = fconvert.s(fconvert.t(eax_17[2]))
        float var_d0_1 = fconvert.s(x87_r7_20)
        sub_660a50(eax_18, edx_5, var_1e0)
        float* eax_19 = sub_4b65f0(eax_18, &var_1cc, &var_18c, &var_8c)
        float var_14c[0x10]
        float* eax_20 = sub_4b65f0(eax_19, eax_19, &var_10c, &var_14c)
        sub_4b65f0(eax_20, eax_20, &var_cc, &var_10c)
        float* eax_21 = sub_529cb0(&var_1dc, &var_10c)
        float edx_9 = *eax_21
        var_1f0 = fconvert.s(fconvert.t(var_dc_1))
        *(arg3 + 4) = edx_9
        float var_1ec_2 = fconvert.s(fconvert.t(var_d8_1))
        *(arg3 + 8) = eax_21[1]
        float var_1e8_2 = fconvert.s(fconvert.t(var_d4_1))
        float ecx_12 = var_1f0
        *(arg3 + 0xc) = eax_21[2]
        *(arg3 + 0x10) = eax_21[3]
        *(arg3 + 0x14) = ecx_12
        *(arg3 + 0x18) = var_1ec_2
        *(arg3 + 0x1c) = var_1e8_2

eax_4.b = 1
sub_6b4885(eax_1 ^ &var_1f8)
