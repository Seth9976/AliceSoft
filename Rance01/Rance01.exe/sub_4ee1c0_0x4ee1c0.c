// 函数: sub_4ee1c0
// 地址: 0x4ee1c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_228
int32_t eax_1 = data_78c474 ^ &var_228
float var_224 = fconvert.s(fconvert.t(arg5))
long double x87_r7_1 = float.t(0)
int32_t* ecx_2 = arg17
int32_t* var_1dc = ecx_2

if (arg3[0x57] == 1 && *(arg4 + 0x12c) != 0)
    int32_t* edx_2 = arg3[0x58]
    void* eax_6
    eax_6, ecx_2 = sub_4c5960(*edx_2, edx_2, arg4)
    
    if (eax_6 == 0)
        var_224 = fconvert.s(x87_r7_1)
    else if (*(eax_6 + 0x1a4) == 0)
        var_224 = fconvert.s(fconvert.t(*(eax_6 + 0x130)))
    else
        var_224 = fconvert.s(x87_r7_1)

long double x87_r7_3 = fconvert.t(var_224)
int32_t* var_23c = ecx_2
float var_1cc = fconvert.s(x87_r7_3 - fconvert.t(arg3[0x8a]))
float* result
int80_t st0
st0, result = sub_4ef1b0(arg3, fconvert.s(x87_r7_3))

if (arg3[0x83].b == 0)
    result.b = 1
else if (*(arg1 + 0x12c) != 0)
    int32_t* var_23c_2 = arg3
    long double st0_1 = sub_4ef450(arg3, fconvert.s(fconvert.t(var_224)))
    result = *(arg1 + 0x68)
    float var_1f0_1 = fconvert.s(st0_1)
    
    if (result u> 3)
        result.b = 0
    else
        float var_220
        float var_21c_1
        float var_214
        float var_204
        float var_1b4
        float var_1a8
        float var_19c
        float var_190
        float var_184
        float var_148[0x10]
        float var_c8[0x10]
        long double x87_r7_13
        
        switch (result)
            case nullptr
                float* eax_7 = sub_4ef200(arg3, &var_204, fconvert.s(fconvert.t(var_224)), 
                    fconvert.s(fconvert.t(var_1f0_1)))
                var_220 = fconvert.s(fconvert.t(*eax_7) + fconvert.t(arg3[0x84]))
                var_21c_1 = fconvert.s(fconvert.t(eax_7[1]) + fconvert.t(arg3[0x85]))
                x87_r7_13 = fconvert.t(eax_7[2]) + fconvert.t(arg3[0x86])
            label_4ee508:
                float var_218_3 = fconvert.s(x87_r7_13)
                var_214 = var_220
                float var_210_5 = var_21c_1
                float var_20c_5 = var_218_3
            case 1
                var_214 = fconvert.s(fconvert.t(*(arg2 + 4)) + fconvert.t(arg3[0x87]))
                float var_210_1 = fconvert.s(fconvert.t(*(arg2 + 8)) + fconvert.t(arg3[0x88]))
                float var_20c_1 = fconvert.s(fconvert.t(*(arg2 + 0xc)) + fconvert.t(arg3[0x89]))
                float* eax_8 = sub_4ef200(arg3, &var_184, fconvert.s(fconvert.t(var_224)), 
                    fconvert.s(fconvert.t(var_1f0_1)))
                var_220 = fconvert.s(fconvert.t(*eax_8) + fconvert.t(var_214))
                var_21c_1 = fconvert.s(fconvert.t(eax_8[1]) + fconvert.t(var_210_1))
                x87_r7_13 = fconvert.t(eax_8[2]) + fconvert.t(var_20c_1)
                goto label_4ee508
            case 2
                float* eax_9
                int32_t edx_3
                eax_9, edx_3 = sub_4ef200(arg3, &var_190, fconvert.s(fconvert.t(var_224)), 
                    fconvert.s(fconvert.t(var_1f0_1)))
                var_220 = fconvert.s(fconvert.t(*eax_9) + fconvert.t(arg3[0x87]))
                float var_21c_2 = fconvert.s(fconvert.t(eax_9[1]) + fconvert.t(arg3[0x88]))
                float* eax_10 = &var_148
                float var_218_1 = fconvert.s(fconvert.t(eax_9[2]) + fconvert.t(arg3[0x89]))
                var_214 = fconvert.s(fconvert.t(arg3[0x84]) - fconvert.t(arg3[0x87]))
                float var_210_2 = fconvert.s(fconvert.t(arg3[0x85]) - fconvert.t(arg3[0x88]))
                float var_20c_2 = fconvert.s(fconvert.t(arg3[0x86]) - fconvert.t(arg3[0x89]))
                sub_660a50(eax_10, edx_3, arg9)
                float* eax_11 = sub_51e1c0(&var_220, &var_1a8, eax_10, &var_220)
                var_220 = fconvert.s(fconvert.t(*eax_11) + fconvert.t(var_214))
                long double x87_r7_43 = fconvert.t(eax_11[1])
                var_214 = var_220
                float var_210_3 = fconvert.s(x87_r7_43 + fconvert.t(var_210_2))
                float var_20c_3 = fconvert.s(fconvert.t(eax_11[2]) + fconvert.t(var_20c_2))
            case 3
                float* eax_13
                int32_t edx_6
                eax_13, edx_6 = sub_4ef200(arg3, &var_19c, fconvert.s(fconvert.t(var_224)), 
                    fconvert.s(fconvert.t(var_1f0_1)))
                var_214 = fconvert.s(fconvert.t(*eax_13) + fconvert.t(arg3[0x87]))
                float var_210_4 = fconvert.s(fconvert.t(eax_13[1]) + fconvert.t(arg3[0x88]))
                float (* eax_14)[0x10] = &var_c8
                float var_20c_4 = fconvert.s(fconvert.t(eax_13[2]) + fconvert.t(arg3[0x89]))
                sub_660a50(eax_14, edx_6, arg9)
                float* eax_15 = sub_51e1c0(arg9, &var_1b4, eax_14, &var_214)
                var_220 = fconvert.s(fconvert.t(*(arg2 + 4)) + fconvert.t(*eax_15))
                var_21c_1 = fconvert.s(fconvert.t(eax_15[1]) + fconvert.t(*(arg2 + 8)))
                x87_r7_13 = fconvert.t(eax_15[2]) + fconvert.t(*(arg2 + 0xc))
                goto label_4ee508
        
        float* eax_17
        int32_t edx_9
        eax_17, edx_9 = sub_4c4b40(arg4, &var_c8)
        sub_51e0e0(eax_17, edx_9, &var_214)
        result = *(arg1 + 0x64)
        
        if (result u> 3)
            result.b = 0
        else
            float* eax_19
            float ecx_19
            
            switch (result)
                case nullptr
                    int32_t ecx_13 = arg11[1]
                    var_220 = *arg11
                    eax_19 = arg12
                    var_224.b = 0
                    int32_t var_21c_4 = ecx_13
                    int32_t var_218_4 = arg11[2]
                label_4ee742:
                    ecx_19 = *eax_19
                    int32_t edx_22 = eax_19[1]
                    int32_t eax_37 = eax_19[2]
                    var_204 = ecx_19
                    int32_t var_200_2 = edx_22
                    int32_t var_1fc_2 = eax_37
                case 1
                label_4ee5b6:
                    int32_t edx_12 = arg11[1]
                    int32_t var_218_5 = arg11[2]
                    eax_19 = arg12
                    var_224.b = 1
                    var_220 = *arg11
                    int32_t var_21c_5 = edx_12
                    goto label_4ee742
                case 2
                    long double x87_r7_60 = fconvert.t(arg3[0x8d])
                    long double x87_r6_2 = float.t(0)
                    x87_r6_2 - x87_r7_60
                    result.w = (x87_r6_2 < x87_r7_60 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_60) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_60 ? 1 : 0) << 0xe | 0x3000
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_1))
                        long double x87_r6_3 = fconvert.t(arg3[0x8e])
                        x87_r7_60 - x87_r6_3
                        result.w = (x87_r7_60 < x87_r6_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_60, x87_r6_3) ? 1 : 0) << 0xa
                            | (x87_r7_60 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            long double x87_r6_4 = fconvert.t(arg3[0x8f])
                            x87_r6_4 - x87_r7_60
                            result.w = (x87_r6_4 < x87_r7_60 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_4, x87_r7_60) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_60 ? 1 : 0) << 0xe
                            bool p_3 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_3))
                                goto label_4ee5b6
                    
                    float* eax_22 = sub_4c4e20(arg4, &var_c8)
                    float eax_23
                    int32_t ecx_15
                    eax_23, ecx_15 = sub_51e2a0(&arg3[0x8d], &var_1b4)
                    var_224.b = 1
                    float* eax_27 = sub_51e2a0(
                        sub_408950(sub_51e1c0(ecx_15, &var_220, eax_22, eax_23), arg13, &var_220, 
                            &var_19c), 
                        &var_1a8)
                    int32_t edx_15 = eax_27[1]
                    int32_t eax_28 = eax_27[2]
                    var_204 = *eax_27
                    int32_t var_200_1 = edx_15
                    int32_t var_1fc_1 = eax_28
                    int32_t* eax_30 =
                        sub_51e2a0(sub_408950(eax_28, &var_204, arg13, &var_190), &var_184)
                    ecx_19 = eax_30[1]
                    var_220 = *eax_30
                    float var_21c_6 = ecx_19
                    int32_t var_218_6 = eax_30[2]
                case 3
                    long double x87_r7_61 = fconvert.t(arg3[0x8d])
                    long double x87_r6_5 = float.t(0)
                    x87_r6_5 - x87_r7_61
                    result.w = (x87_r6_5 < x87_r7_61 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_5, x87_r7_61) ? 1 : 0) << 0xa
                        | (x87_r6_5 == x87_r7_61 ? 1 : 0) << 0xe | 0x3000
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        long double x87_r6_6 = fconvert.t(arg3[0x8e])
                        x87_r7_61 - x87_r6_6
                        result.w = (x87_r7_61 < x87_r6_6 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_61, x87_r6_6) ? 1 : 0) << 0xa
                            | (x87_r7_61 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_5))
                            long double x87_r6_7 = fconvert.t(arg3[0x8f])
                            x87_r6_7 - x87_r7_61
                            result.w = (x87_r6_7 < x87_r7_61 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_7, x87_r7_61) ? 1 : 0) << 0xa
                                | (x87_r6_7 == x87_r7_61 ? 1 : 0) << 0xe
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_6))
                                goto label_4ee5b6
                    
                    float* eax_31 = sub_4c4e20(arg4, &var_148)
                    float var_16c
                    float* eax_32
                    int32_t ecx_20
                    eax_32, ecx_20 = sub_51e2a0(&arg3[0x8d], &var_16c)
                    sub_51e1c0(ecx_20, &var_204, eax_31, eax_32)
                    var_224.b = 1
                    var_220 = var_204
                    int32_t var_200
                    int32_t var_21c_7 = var_200
                    int32_t var_1fc
                    int32_t var_218_7 = var_1fc
                    float var_160
                    float* eax_35 = sub_51e2a0(arg1 + 0x54, &var_160)
                    float var_178
                    float var_154
                    eax_19 = sub_51e2a0(sub_408950(eax_35, eax_35, &var_220, &var_178), &var_154)
                    goto label_4ee742
            
            float* eax_38 = arg3[0x74]
            float var_23c_18 = ecx_19
            long double x87_r6_8 = fconvert.t(var_1f0_1)
            float* eax_39 = arg3[0x78]
            float var_1f4_1 = fconvert.s((fconvert.t(eax_38[1]) - fconvert.t(*eax_38)) * x87_r6_8
                + fconvert.t(*eax_38))
            float* eax_40 = arg3[0x7c]
            float var_1f8_1 = fconvert.s((fconvert.t(eax_39[1]) - fconvert.t(*eax_39)) * x87_r6_8
                + fconvert.t(*eax_39))
            float var_1e8_1 = fconvert.s((fconvert.t(eax_40[1]) - fconvert.t(*eax_40)) * x87_r6_8
                + fconvert.t(*eax_40))
            float var_208_3 = fconvert.s((
                x87_r6_8 * (fconvert.t(arg3[0x10]) - fconvert.t(arg3[0xf])) + fconvert.t(arg3[0xf]))
                * fconvert.t(arg6) * fconvert.t(*(arg4 + 0x4c)))
            float var_1e0_1 = fconvert.s(fconvert.t(arg3[0x11]))
            float var_1c0_1 = fconvert.s(fconvert.t(arg3[0x12]))
            float var_1c8_1 = fconvert.s(fconvert.t(arg3[0x11]))
            float var_1ec_1 = fconvert.s(fconvert.t(arg3[0x13]))
            float var_1b8_1 = fconvert.s(fconvert.t(arg3[0x14]))
            float var_1bc_1 = fconvert.s(fconvert.t(arg3[0x13]))
            int32_t ecx_24
            long double st0_2
            st0_2, ecx_24 = sub_4ef4a0(arg3, fconvert.s(fconvert.t(var_1cc)))
            int32_t var_23c_20 = ecx_24
            float var_1e4_1 = fconvert.s(st0_2 * fconvert.t(arg10))
            sub_5dd020(&var_c8, fconvert.s(fconvert.t(*(arg4 + 0x48))))
            float var_88[0x10]
            sub_4b65a0(&var_88, fconvert.s(fconvert.t(*(arg4 + 0x44))))
            float var_48[0x11]
            float* eax_43 = &var_48
            sub_5dcfd0(eax_43, fconvert.s(fconvert.t(*(arg4 + 0x40))))
            float var_108[0x10]
            float* eax_44 = sub_4b65f0(eax_43, &var_48, &var_88, &var_108)
            sub_4b65f0(eax_44, eax_44, &var_c8, &var_148)
            int32_t eax_45 = arg3[2]
            
            if (eax_45 == 0)
                int32_t var_23c_27 = arg16
                long double x87_r6_20 = fconvert.t(var_1f0_1)
                long double x87_r5_10 = fconvert.t(var_208_3)
                float* var_280_1 = &var_214
                result = sub_4db780(&arg3[0x91], fconvert.s(fconvert.t(var_1cc)), &var_214, 
                    &var_148, var_224.b, &var_220, &var_204, arg13, 
                    fconvert.s(fconvert.t(fconvert.s(x87_r5_10 * fconvert.t(fconvert.s((
                        x87_r6_20 * (fconvert.t(var_1c0_1) - fconvert.t(var_1c8_1))
                        + fconvert.t(var_1e0_1)) * fconvert.t(arg7)))))), 
                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s((
                    (fconvert.t(var_1b8_1) - fconvert.t(var_1bc_1)) * x87_r6_20
                    + fconvert.t(var_1ec_1)) * fconvert.t(arg8))) * x87_r5_10))), 
                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3[0x31])))), 
                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3[0x32])))), 
                    fconvert.s(fconvert.t(var_1f4_1)), fconvert.s(fconvert.t(var_1f8_1)), 
                    fconvert.s(fconvert.t(var_1e8_1)), fconvert.s(fconvert.t(var_1e4_1)), 
                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0x284))))), *arg3)
            label_4ee9f4:
                
                if (result.b != 0)
                    result.b = 1
                else
                    result.b = 0
            else
                if (eax_45 == 1)
                    int80_t st0_3
                    st0_3, result = sub_4eedc0(&var_214, &var_148, arg3, arg4, 
                        fconvert.s(fconvert.t(var_208_3)), fconvert.s(fconvert.t(var_1f4_1)), 
                        fconvert.s(fconvert.t(var_1f8_1)), fconvert.s(fconvert.t(var_1e8_1)), 
                        fconvert.s(fconvert.t(var_1e4_1)), arg14, arg15, var_1dc)
                    goto label_4ee9f4
                
                result.b = 1
else
    arg3[0x83].b = 0
    result.b = 1

sub_6b4885(eax_1 ^ &var_228)
return result
