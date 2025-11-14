// 函数: sub_4f0e80
// 地址: 0x4f0e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712d72
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_d8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* edi = arg2
char var_c1 = 0
long double x87_r6 = fconvert.t(arg3)
int32_t eax_3 = sub_70c710(fconvert.t(*edi) - x87_r6)
int32_t var_98 = eax_3 - 1
int32_t var_b8 = sub_70c710(fconvert.t(*edi) + x87_r6) + 1
int32_t ebx = sub_70c710(fconvert.t(edi[2]) - x87_r6) - 1
int32_t eax_7 = sub_70c710(x87_r6 + fconvert.t(edi[2]))
int32_t ecx = *(arg1 + 0x28)
int32_t var_a4 = eax_7 + 1
int32_t edx_1

if (eax_3 - 1 s<= ecx)
    edx_1 = *(arg1 + 0x24)

int32_t eax_8

if (eax_3 - 1 s> ecx || var_b8 s< edx_1 || ebx s> *(arg1 + 0x30) || eax_7 + 1 s< *(arg1 + 0x2c))
    eax_8.b = 0
else
    if (eax_3 - 1 s< edx_1)
        var_98 = edx_1
    
    if (var_b8 s> ecx)
        var_b8 = ecx
    
    int32_t ecx_1 = *(arg1 + 0x2c)
    
    if (ebx s< ecx_1)
        ebx = ecx_1
    
    int32_t ecx_2 = *(arg1 + 0x30)
    
    if (eax_7 + 1 s> ecx_2)
        var_a4 = ecx_2
    
    void var_68
    sub_4167e0(&var_68)
    int32_t var_4 = 0
    int32_t var_a8_1 = ebx
    float var_b4
    
    if (ebx s<= var_a4)
        int32_t eax_18
        
        do
            int32_t edx_2 = var_98
            int32_t var_9c_1 = edx_2
            
            while (edx_2 s<= var_b8)
                int32_t eax_12 = (var_a8_1 - *(arg1 + 0x2c)) * *(arg1 + 0x34) - *(arg1 + 0x24)
                int32_t eax_13 = eax_12 + edx_2
                
                if (eax_12 + edx_2 s>= 0)
                    int32_t* ecx_3 = *(arg1 + 0x14)
                    
                    if (eax_13 s< (*(arg1 + 0x18) - ecx_3) s>> 4)
                        int32_t* i = ecx_3[eax_13 * 4]
                        
                        if (i != ecx_3[eax_13 * 4 + 1])
                            do
                                sub_4c33d0(&var_68, i, &var_b4)
                                i = &i[1]
                            while (i != *(*(arg1 + 0x14) + (eax_13 << 4) + 4))
                            
                            edx_2 = var_9c_1
                
                edx_2 += 1
                var_9c_1 = edx_2
            
            eax_18 = var_a8_1 + 1
            var_a8_1 = eax_18
        while (eax_18 s<= var_a4)
    
    long double x87_r7_4 = fconvert.t(arg3)
    int32_t* var_64
    int32_t* ecx_6 = var_64
    int32_t* i_2 = *ecx_6
    int32_t* i_1 = i_2
    float var_a4_1 = fconvert.s(x87_r7_4 * x87_r7_4)
    
    if (i_2 != ecx_6)
        long double x87_r7_6 = float.t(0)
        
        do
            void* eax_19 = i_2[3]
            float* ebx_2 = nullptr
            void* var_6c_1 = eax_19
            int32_t var_9c_2 = 0
            void* var_98_1 = eax_19 + 0x20
            
            while (true)
                if (*var_98_1 == 0)
                    int32_t ebp_1 = *(eax_19 + 4)
                    float* ecx_8 = ebx_2 + ebp_1 + 8
                    float* var_a0_1 = ecx_8
                    int32_t edx_6 = mods.dp.d(sx.q(var_9c_2 + 1), 3) * 3
                    float* edx_7 = ebp_1 + (edx_6 << 2)
                    long double x87_r6_7 =
                        fconvert.t(*(ebp_1 + (edx_6 << 2))) - fconvert.t(*(ebx_2 + ebp_1))
                    float* var_a8_2 = edx_7
                    long double x87_r4_2 = fconvert.t(edx_7[2]) - fconvert.t(*ecx_8)
                    long double x87_r4_4 =
                        fconvert.t(fconvert.s(x87_r6_7 * x87_r6_7 + x87_r4_2 * x87_r4_2))
                    x87_r7_6 - x87_r4_4
                    float* eax_23
                    eax_23.w = (x87_r7_6 < x87_r4_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_6, x87_r4_4) ? 1 : 0) << 0xa
                        | (x87_r7_6 == x87_r4_4 ? 1 : 0) << 0xe | 0x2000
                    bool p_1 = unimplemented  {test ah, 0x44}
                    long double x87_r7_21
                    
                    if (not(p_1))
                        x87_r7_21 = x87_r4_2
                    else
                        long double x87_r3_7 = (fconvert.t(edi[2]) - fconvert.t(*ecx_8)) * x87_r4_2
                            + (fconvert.t(*edi) - fconvert.t(*(ebx_2 + ebp_1))) * x87_r6_7
                        x87_r4_4 = fconvert.t(fconvert.s(x87_r3_7 / x87_r3_7))
                        x87_r4_4 - x87_r7_6
                        eax_23.w = (x87_r4_4 < x87_r7_6 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_4, x87_r7_6) ? 1 : 0) << 0xa
                            | (x87_r4_4 == x87_r7_6 ? 1 : 0) << 0xe | 0x2000
                        
                        if ((eax_23:1.b & 1) != 0)
                            x87_r7_21 = x87_r4_2
                        else
                            long double x87_r3_8 = float.t(1)
                            x87_r3_8 - x87_r4_4
                            eax_23.w = (x87_r3_8 < x87_r4_4 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_8, x87_r4_4) ? 1 : 0) << 0xa
                                | (x87_r3_8 == x87_r4_4 ? 1 : 0) << 0xe | 0x2000
                            
                            if ((eax_23:1.b & 1) != 0)
                                x87_r7_21 = x87_r4_2
                            else
                                float var_94_1 =
                                    fconvert.s(x87_r4_4 * x87_r6_7 + fconvert.t(*(ebx_2 + ebp_1)))
                                float var_ac_3 =
                                    fconvert.s(x87_r4_4 * x87_r4_2 + fconvert.t(*ecx_8))
                                long double x87_r4_9 = fconvert.t(var_ac_3) - fconvert.t(edi[2])
                                long double x87_r3_13 = fconvert.t(var_94_1) - fconvert.t(*edi)
                                long double x87_r4_12 = fconvert.t(fconvert.s(x87_r4_9 * x87_r4_9
                                    + x87_r3_13 * x87_r3_13))
                                long double x87_r3_15 = fconvert.t(var_a4_1)
                                x87_r3_15 - x87_r4_12
                                eax_23.w = (x87_r3_15 < x87_r4_12 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_15, x87_r4_12) ? 1 : 0) << 0xa
                                    | (x87_r3_15 == x87_r4_12 ? 1 : 0) << 0xe | 0x2800
                                
                                if ((eax_23:1.b & 1) != 0)
                                    x87_r7_21 = x87_r6_7
                                else
                                    float var_1c = fconvert.s(fconvert.t(fconvert.s(x87_r4_2)))
                                    float var_18_1 = fconvert.s(x87_r7_6)
                                    float var_14_1 =
                                        fconvert.s(fconvert.t(fconvert.s(fneg(x87_r6_7))))
                                    float var_58
                                    sub_51e2a0(&var_1c, &var_58)
                                    long double x87_r6_10 = fconvert.t(arg3)
                                    var_c1 = 1
                                    edi = arg2
                                    float var_c0_2 = fconvert.s(fconvert.t(var_58) * x87_r6_10)
                                    float var_50
                                    var_b4 = fconvert.s(x87_r6_10 * fconvert.t(var_50))
                                    var_b4 = fconvert.s(fconvert.t(var_b4) + fconvert.t(var_ac_3))
                                    *arg2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c0_2)
                                        + fconvert.t(var_94_1))))
                                    long double x87_r7_20 = fconvert.t(var_b4)
                                    float var_54
                                    arg2[1] = fconvert.s(fconvert.t(fconvert.s(
                                        fconvert.t(fconvert.s(fconvert.t(var_54) * x87_r6_10))
                                        + fconvert.t(0.0))))
                                    edx_7 = var_a8_2
                                    x87_r7_21 = float.t(0)
                                    arg2[2] = fconvert.s(x87_r7_20)
                                    ecx_8 = var_a0_1
                    
                    long double x87_r6_15 = fconvert.t(edi[2]) - fconvert.t(*ecx_8)
                    long double x87_r4_14 = fconvert.t(*edi) - fconvert.t(*(ebx_2 + ebp_1))
                    var_b4 = fconvert.s(x87_r6_15 * x87_r6_15 + x87_r4_14 * x87_r4_14)
                    long double x87_r4_16 = fconvert.t(var_b4)
                    long double x87_r3_18 = fconvert.t(var_a4_1)
                    x87_r3_18 - x87_r4_16
                    eax_23.w = (x87_r3_18 < x87_r4_16 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r3_18, x87_r4_16) ? 1 : 0) << 0xa
                        | (x87_r3_18 == x87_r4_16 ? 1 : 0) << 0xe | 0x2800
                    long double x87_r7_40
                    
                    if ((eax_23:1.b & 1) != 0)
                        x87_r7_40 = x87_r6_15
                    else
                        var_b4 = fconvert.s(x87_r4_14)
                        float var_40 = fconvert.s(fconvert.t(var_b4))
                        float var_3c_1 = fconvert.s(x87_r7_21)
                        float var_38_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6_15)))
                        float var_28
                        sub_51e2a0(&var_40, &var_28)
                        long double x87_r6_17 = fconvert.t(arg3)
                        var_c1 = 1
                        edi = arg2
                        var_b4 = fconvert.s(fconvert.t(var_28) * x87_r6_17)
                        float var_20
                        float var_ac_4 = fconvert.s(x87_r6_17 * fconvert.t(var_20))
                        float var_a0_2 = fconvert.s(fconvert.t(*var_a0_1))
                        var_b4 = fconvert.s(fconvert.t(var_b4)
                            + fconvert.t(fconvert.s(fconvert.t(*(ebx_2 + ebp_1)))))
                        *arg2 = fconvert.s(fconvert.t(var_b4))
                        float var_24
                        arg2[1] = fconvert.s(fconvert.t(fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(var_24) * x87_r6_17))
                            + fconvert.t(0.0))))
                        edx_7 = var_a8_2
                        x87_r7_40 = float.t(0)
                        arg2[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_ac_4)
                            + fconvert.t(var_a0_2))))
                    
                    long double x87_r6_22 = fconvert.t(*edi) - fconvert.t(*edx_7)
                    long double x87_r4_18 = fconvert.t(edi[2]) - fconvert.t(edx_7[2])
                    var_b4 = fconvert.s(x87_r6_22 * x87_r6_22 + x87_r4_18 * x87_r4_18)
                    long double x87_r4_20 = fconvert.t(var_b4)
                    long double x87_r3_21 = fconvert.t(var_a4_1)
                    x87_r3_21 - x87_r4_20
                    eax_23.w = (x87_r3_21 < x87_r4_20 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r3_21, x87_r4_20) ? 1 : 0) << 0xa
                        | (x87_r3_21 == x87_r4_20 ? 1 : 0) << 0xe | 0x2800
                    
                    if ((eax_23:1.b & 1) != 0)
                        x87_r7_6 = x87_r6_22
                    else
                        var_b4 = fconvert.s(x87_r6_22)
                        float var_4c = fconvert.s(fconvert.t(var_b4))
                        float var_48_1 = fconvert.s(x87_r7_40)
                        float var_44_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_18)))
                        float var_34
                        sub_51e2a0(&var_4c, &var_34)
                        long double x87_r6_25 = fconvert.t(arg3)
                        var_c1 = 1
                        var_b4 = fconvert.s(fconvert.t(var_34) * x87_r6_25)
                        float var_2c
                        float var_a0_3 = fconvert.s(x87_r6_25 * fconvert.t(var_2c))
                        float var_ac_5 = fconvert.s(fconvert.t(var_a8_2[2]))
                        edi = arg2
                        var_b4 = fconvert.s(fconvert.t(var_b4)
                            + fconvert.t(fconvert.s(fconvert.t(*var_a8_2))))
                        *arg2 = fconvert.s(fconvert.t(var_b4))
                        float var_30
                        arg2[1] = fconvert.s(fconvert.t(fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(var_30) * x87_r6_25))
                            + fconvert.t(0.0))))
                        x87_r7_6 = float.t(0)
                        arg2[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_a0_3)
                            + fconvert.t(var_ac_5))))
                
                var_9c_2 += 1
                var_98_1 += 4
                ebx_2 = &ebx_2[3]
                
                if (ebx_2 s>= 0x24)
                    break
                
                eax_19 = var_6c_1
            
            if (*(i_1 + 0x11) == 0)
                int32_t* i_4 = i_1[2]
                
                if (*(i_4 + 0x11) != 0)
                    int32_t* i_3 = i_1[1]
                    
                    if (*(i_3 + 0x11) == 0)
                        while (i_1 == i_3[2])
                            i_1 = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0x11) != 0)
                                break
                    
                    i_1 = i_3
                else
                    int32_t* i_5 = *i_4
                    
                    while (*(i_5 + 0x11) == 0)
                        i_4 = i_5
                        i_5 = *i_4
                    
                    i_1 = i_4
            
            i_2 = i_1
            ecx_6 = var_64
        while (i_2 != ecx_6)
    
    int32_t var_4_1 = 1
    sub_58bc40(&var_68, &var_b4, *ecx_6, ecx_6)
    int32_t* var_dc_3 = var_64
    sub_6b4d5b()
    int32_t eax_29
    eax_29.b = var_c1
fsbase->NtTib.ExceptionList = ExceptionList
