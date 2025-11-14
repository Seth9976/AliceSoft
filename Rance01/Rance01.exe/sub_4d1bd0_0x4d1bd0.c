// 函数: sub_4d1bd0
// 地址: 0x4d1bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720415
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d8
int32_t eax_2 = data_78c474 ^ &var_d8
int32_t __saved_edi
int32_t var_ec = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
int32_t* result_8 = nullptr
int32_t var_c0 = 0
int32_t var_4 = 0
int32_t* result
int32_t ecx

if (sub_5037e0(ecx, &result_1, arg2) != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_4.b = 1
    int32_t* result_4 = result_1
    int32_t* result_10 = result_4
    float var_d4
    
    if (result_4 != result_8)
        do
            int32_t esi_1 = result_10[4]
            int32_t eax_7 = esi_1
            
            if (esi_1 u>= 0x10)
                eax_7 = 0x10
            
            int32_t* result_12
            
            if (result_10[5] u< 0x10)
                result_12 = result_10
            else
                result_12 = *result_10
            
            int32_t eax_8 = sub_402320(eax_7, result_12, "ObjectMulDiffuse", eax_7)
            bool cond:0_1 = eax_8 == 0
            
            if (eax_8 == 0)
                if (esi_1 u>= 0x10)
                    eax_8.b = esi_1 != 0x10
                else
                    eax_8 = 0xffffffff
                
                cond:0_1 = eax_8 == 0
            
            eax_8.b = cond:0_1
            struct sealengine::CFrameMulColor::VTable* const var_b8
            char var_a8
            void var_4c
            
            if (eax_8.b == 0)
                if (sub_402680("ObjectAddAmbient", result_10) == 0)
                    char* ecx_11
                    
                    if (sub_402680("ObjectMulAlpha", result_10) == 0)
                        if (sub_402680("Mesh", result_10) == 0)
                            if (sub_402680("MeshMulDiffuse", result_10) == 0)
                                if (sub_402680("MeshAddAmbient", result_10) == 0)
                                    if (sub_402680("MeshMulAlpha", result_10) == 0)
                                        if (sub_402680("MeshTextureAnime", result_10) == 0)
                                            int32_t* result_11
                                            
                                            if (result_10[5] u< 0x10)
                                                result_11 = result_10
                                            else
                                                result_11 = *result_10
                                            
                                            int32_t* result_13 = result_11
                                            sub_51ddc0(0x755ee0)
                                            sub_401110(&var_2c)
                                            goto label_4d1c4f
                                        
                                        int32_t* esi_6 = result_10[7]
                                        int32_t eax_84
                                        int32_t edx_28
                                        edx_28:eax_84 = muls.dp.d(0x78787879, result_10[8] - esi_6)
                                        int32_t edx_29 = edx_28 s>> 5
                                        
                                        if ((edx_29 u>> 0x1f) + edx_29 != 2)
                                            sub_401110(&var_2c)
                                            goto label_4d1c4f
                                        
                                        if (*esi_6 != 0)
                                            goto label_4d265d
                                        
                                        if (esi_6[0x11] != 0)
                                            goto label_4d2653
                                        
                                        int32_t edi_14
                                        
                                        if (esi_6[0x11] != 1)
                                            edi_14 = esi_6[0x12]
                                        else
                                            edi_14 = sub_70c710(fconvert.t(esi_6[0x13]))
                                        
                                        struct sealengine::CFrameIndex::VTable* const var_64_1 =
                                            &sealengine::CFrameIndex::`vftable'
                                        int32_t var_60_1 = edi_14
                                        int32_t eax_89
                                        
                                        if (*esi_6 != 1)
                                            eax_89 = esi_6[1]
                                        else
                                            eax_89 = sub_70c710(fconvert.t(esi_6[2]))
                                        
                                        var_b8 = eax_89
                                        int32_t var_b4_7 = 0
                                        struct sealengine::CFrameIndex::VTable* const var_b0_7 =
                                            &sealengine::CFrameIndex::`vftable'
                                        int32_t var_ac_7 = edi_14
                                        var_a8 = 0
                                        var_4.b = 0xf
                                        sub_4d36e0(&var_b8, sub_4d2f10(arg1 + 0x7c, &var_2c))
                                        var_4.b = 1
                                        struct sealengine::CFrameIndex::VTable* const var_64_2 =
                                            &sealengine::CFrameIndex::`vftable'
                                    else
                                        int32_t* esi_5 = result_10[7]
                                        int32_t eax_74
                                        int32_t edx_26
                                        edx_26:eax_74 = muls.dp.d(0x78787879, result_10[8] - esi_5)
                                        int32_t edx_27 = edx_26 s>> 5
                                        
                                        if ((edx_27 u>> 0x1f) + edx_27 != 2)
                                            sub_401110(&var_2c)
                                            goto label_4d1c4f
                                        
                                        if (*esi_5 != 0)
                                            goto label_4d265d
                                        
                                        if (sub_504ac0(&esi_5[0x11]) == 0)
                                            goto label_4d2653
                                        
                                        long double x87_r7_35
                                        
                                        if (esi_5[0x11] != 0)
                                            x87_r7_35 = fconvert.t(esi_5[0x13])
                                        else
                                            x87_r7_35 = float.t(esi_5[0x12])
                                        
                                        var_d4 = fconvert.s(x87_r7_35)
                                        struct sealengine::CFrameMulAlpha::VTable* const var_54_1 =
                                            &sealengine::CFrameMulAlpha::`vftable'
                                        long double x87_r7_36 = fconvert.t(var_d4)
                                        float var_50_1 = fconvert.s(x87_r7_36)
                                        int32_t eax_80
                                        
                                        if (*esi_5 != 1)
                                            eax_80 = esi_5[1]
                                        else
                                            eax_80 = sub_70c710(fconvert.t(esi_5[2]))
                                        
                                        float var_ac_6 = fconvert.s(x87_r7_36)
                                        var_b8 = eax_80
                                        int32_t var_b4_6 = 1
                                        struct sealengine::CFrameMulAlpha::VTable* const var_b0_6 =
                                            &sealengine::CFrameMulAlpha::`vftable'
                                        var_a8 = 0
                                        var_4.b = 0xd
                                        sub_4d33d0(&var_b8, sub_4d2e00(arg1 + 0x6c, &var_2c))
                                        var_4.b = 1
                                        struct sealengine::CFrameMulAlpha::VTable* const var_54_2 =
                                            &sealengine::CFrameMulAlpha::`vftable'
                                else
                                    int32_t* esi_4 = result_10[7]
                                    int32_t eax_61
                                    int32_t edx_22
                                    edx_22:eax_61 = muls.dp.d(0x78787879, result_10[8] - esi_4)
                                    int32_t edx_23 = edx_22 s>> 5
                                    
                                    if ((edx_23 u>> 0x1f) + edx_23 != 4)
                                        goto label_4d265d
                                    
                                    if (*esi_4 != 0)
                                        goto label_4d2653
                                    
                                    if (sub_504ac0(&esi_4[0x11]) == 0)
                                        sub_401110(&var_2c)
                                        goto label_4d1c4f
                                    
                                    if (sub_504ac0(&esi_4[0x22]) == 0)
                                        goto label_4d265d
                                    
                                    if (sub_504ac0(&esi_4[0x33]) == 0)
                                        goto label_4d2653
                                    
                                    long double x87_r7_27
                                    
                                    if (esi_4[0x33] != 0)
                                        x87_r7_27 = fconvert.t(esi_4[0x35])
                                    else
                                        x87_r7_27 = float.t(esi_4[0x34])
                                    
                                    float var_cc_4 = fconvert.s(x87_r7_27)
                                    long double x87_r7_28
                                    
                                    if (esi_4[0x22] != 0)
                                        x87_r7_28 = fconvert.t(esi_4[0x24])
                                    else
                                        x87_r7_28 = float.t(esi_4[0x23])
                                    
                                    float var_d0_4 = fconvert.s(x87_r7_28)
                                    long double x87_r7_29
                                    
                                    if (esi_4[0x11] != 0)
                                        x87_r7_29 = fconvert.t(esi_4[0x13])
                                    else
                                        x87_r7_29 = float.t(esi_4[0x12])
                                    
                                    var_d4 = fconvert.s(x87_r7_29)
                                    var_b8 = &sealengine::CFrameAddColor::`vftable'
                                    float var_b4_5 = fconvert.s(fconvert.t(var_d4))
                                    float var_b0_5 = fconvert.s(fconvert.t(var_d0_4))
                                    float var_ac_5 = fconvert.s(fconvert.t(var_cc_4))
                                    var_a8.d = fconvert.s(float.t(0))
                                    int32_t eax_69
                                    
                                    if (*esi_4 != 1)
                                        eax_69 = esi_4[1]
                                    else
                                        eax_69 = sub_70c710(fconvert.t(esi_4[2]))
                                    
                                    sub_4d3060(eax_69, &var_4c, &var_b8)
                                    var_4.b = 0xb
                                    sub_4d32e0(&var_4c, sub_4d2cf0(arg1 + 0x5c, &var_2c))
                                    var_4.b = 1
                            else
                                int32_t* esi_3 = result_10[7]
                                int32_t eax_45
                                int32_t edx_19
                                edx_19:eax_45 = muls.dp.d(0x78787879, result_10[8] - esi_3)
                                int32_t edx_20 = edx_19 s>> 5
                                
                                if ((edx_20 u>> 0x1f) + edx_20 != 4)
                                    goto label_4d2653
                                
                                if (*esi_3 != 0)
                                    sub_401110(&var_2c)
                                    goto label_4d1c4f
                                
                                if (sub_504ac0(&esi_3[0x11]) == 0)
                                    goto label_4d265d
                                
                                if (sub_504ac0(&esi_3[0x22]) == 0)
                                    goto label_4d2653
                                
                                if (sub_504ac0(&esi_3[0x33]) == 0)
                                    sub_401110(&var_2c)
                                    goto label_4d1c4f
                                
                                long double x87_r7_19
                                
                                if (esi_3[0x33] != 0)
                                    x87_r7_19 = fconvert.t(esi_3[0x35])
                                else
                                    x87_r7_19 = float.t(esi_3[0x34])
                                
                                float var_cc_3 = fconvert.s(x87_r7_19)
                                long double x87_r7_20
                                
                                if (esi_3[0x22] != 0)
                                    x87_r7_20 = fconvert.t(esi_3[0x24])
                                else
                                    x87_r7_20 = float.t(esi_3[0x23])
                                
                                float var_d0_3 = fconvert.s(x87_r7_20)
                                long double x87_r7_21
                                
                                if (esi_3[0x11] != 0)
                                    x87_r7_21 = fconvert.t(esi_3[0x13])
                                else
                                    x87_r7_21 = float.t(esi_3[0x12])
                                
                                var_d4 = fconvert.s(x87_r7_21)
                                var_b8 = &sealengine::CFrameMulColor::`vftable'
                                float var_b4_4 = fconvert.s(fconvert.t(var_d4))
                                float var_b0_4 = fconvert.s(fconvert.t(var_d0_3))
                                float var_ac_4 = fconvert.s(fconvert.t(var_cc_3))
                                var_a8.d = fconvert.s(float.t(0))
                                int32_t eax_56
                                
                                if (*esi_3 != 1)
                                    eax_56 = esi_3[1]
                                else
                                    eax_56 = sub_70c710(fconvert.t(esi_3[2]))
                                
                                sub_4d3020(eax_56, &var_4c, &var_b8)
                                var_4.b = 9
                                sub_4d31f0(&var_4c, sub_4d2be0(arg1 + 0x4c, &var_2c))
                                var_4.b = 1
                        else
                            void* esi_2 = result_10[7]
                            int32_t eax_42
                            int32_t edx_17
                            edx_17:eax_42 = muls.dp.d(0x78787879, result_10[8] - esi_2)
                            int32_t edx_18 = edx_17 s>> 5
                            
                            if ((edx_18 u>> 0x1f) + edx_18 != 1)
                                sub_401110(&var_2c)
                                goto label_4d1c4f
                            
                            ecx_11 = &var_2c
                            
                            if (*esi_2 != 3)
                                goto label_4d2664
                            
                            sub_401180(ecx_11, 0xffffffff, esi_2 + 0x28, 0)
                    else
                        int32_t* ecx_5 = result_10[7]
                        int32_t eax_34
                        int32_t edx_15
                        edx_15:eax_34 = muls.dp.d(0x78787879, result_10[8] - ecx_5)
                        int32_t edx_16 = edx_15 s>> 5
                        
                        if ((edx_16 u>> 0x1f) + edx_16 != 2)
                            if (var_18_1 u>= 0x10)
                                int32_t var_f0_19 = var_2c.d
                                sub_6b4d5b()
                            
                            int32_t var_18_5 = 0xf
                            int32_t var_1c_7 = 0
                            var_2c = 0
                            goto label_4d1c4f
                        
                        if (*ecx_5 != 0)
                        label_4d265d:
                            ecx_11 = &var_2c
                        label_4d2664:
                            sub_401110(ecx_11)
                        label_4d25b9:
                            int32_t var_4_3 = 0xffffffff
                            sub_503740(&result_1)
                            result.b = 0
                            goto label_4d2974
                        
                        int32_t eax_38 = ecx_5[0x11]
                        long double x87_r7_17
                        
                        if (eax_38 == 0)
                            x87_r7_17 = float.t(ecx_5[0x12])
                        else
                            if (eax_38 != 1)
                                goto label_4d2653
                            
                            if (eax_38 != 0)
                                x87_r7_17 = fconvert.t(ecx_5[0x13])
                            else
                                x87_r7_17 = float.t(ecx_5[0x12])
                        
                        var_d4 = fconvert.s(x87_r7_17)
                        long double x87_r7_18 = fconvert.t(var_d4)
                        struct sealengine::CFrameMulAlpha::VTable* const var_5c_1 =
                            &sealengine::CFrameMulAlpha::`vftable'
                        float var_58_1 = fconvert.s(x87_r7_18)
                        int32_t eax_39
                        
                        if (*ecx_5 != 1)
                            eax_39 = ecx_5[1]
                        else
                            eax_39 = sub_70c710(fconvert.t(ecx_5[2]))
                        
                        float var_ac_3 = fconvert.s(x87_r7_18)
                        var_b8 = eax_39
                        int32_t var_b4_3 = 1
                        struct sealengine::CFrameMulAlpha::VTable* const var_b0_3 =
                            &sealengine::CFrameMulAlpha::`vftable'
                        var_a8 = 0
                        var_4.b = 7
                        sub_4d33d0(&var_b8, arg1 + 0x3c)
                        var_4.b = 1
                        struct sealengine::CFrameMulAlpha::VTable* const var_5c_2 =
                            &sealengine::CFrameMulAlpha::`vftable'
                else
                    int32_t* ecx_3 = result_10[7]
                    int32_t eax_21
                    int32_t edx_9
                    edx_9:eax_21 = muls.dp.d(0x78787879, result_10[8] - ecx_3)
                    int32_t edx_10 = edx_9 s>> 5
                    
                    if ((edx_10 u>> 0x1f) + edx_10 != 4)
                        if (var_18_1 u>= 0x10)
                            int32_t var_f0_17 = var_2c.d
                            sub_6b4d5b()
                        
                        int32_t var_1c_5 = 0
                    label_4d2551:
                        int32_t var_18_3 = 0xf
                        var_2c = 0
                    label_4d2569:
                        int32_t var_4_2 = 0xffffffff
                        sub_503740(&result_1)
                        result.b = 0
                        goto label_4d2974
                    
                    if (*ecx_3 != 0)
                        if (var_18_1 u>= 0x10)
                            int32_t var_f0_18 = var_2c.d
                            sub_6b4d5b()
                        
                        int32_t var_1c_6 = 0
                    label_4d25a1:
                        int32_t var_18_4 = 0xf
                        var_2c = 0
                        goto label_4d25b9
                    
                    int32_t eax_25 = ecx_3[0x11]
                    
                    if (eax_25 != 0 && eax_25 != 1)
                    label_4d2653:
                        sub_401110(&var_2c)
                        goto label_4d2569
                    
                    int32_t eax_26 = ecx_3[0x22]
                    
                    if (eax_26 != 0 && eax_26 != 1)
                        sub_401110(&var_2c)
                        goto label_4d1c4f
                    
                    if (sub_504ac0(&ecx_3[0x33]) == 0)
                        goto label_4d265d
                    
                    long double x87_r7_9
                    
                    if (ecx_3[0x33] != 0)
                        x87_r7_9 = fconvert.t(ecx_3[0x35])
                    else
                        x87_r7_9 = float.t(ecx_3[0x34])
                    
                    float var_cc_2 = fconvert.s(x87_r7_9)
                    long double x87_r7_10
                    
                    if (ecx_3[0x22] != 0)
                        x87_r7_10 = fconvert.t(ecx_3[0x24])
                    else
                        x87_r7_10 = float.t(ecx_3[0x23])
                    
                    float var_d0_2 = fconvert.s(x87_r7_10)
                    long double x87_r7_11
                    
                    if (ecx_3[0x11] != 0)
                        x87_r7_11 = fconvert.t(ecx_3[0x13])
                    else
                        x87_r7_11 = float.t(ecx_3[0x12])
                    
                    var_d4 = fconvert.s(x87_r7_11)
                    var_b8 = &sealengine::CFrameAddColor::`vftable'
                    float var_b4_2 = fconvert.s(fconvert.t(var_d4))
                    float var_b0_2 = fconvert.s(fconvert.t(var_d0_2))
                    float var_ac_2 = fconvert.s(fconvert.t(var_cc_2))
                    var_a8.d = fconvert.s(float.t(0))
                    int32_t ecx_4
                    
                    if (*ecx_3 != 1)
                        ecx_4 = ecx_3[1]
                    else
                        ecx_4 = sub_70c710(fconvert.t(ecx_3[2]))
                    
                    int32_t* eax_32 = &var_4c
                    sub_4d3060(ecx_4, eax_32, &var_b8)
                    var_4.b = 5
                    sub_4d32e0(eax_32, arg1 + 0x2c)
                    var_4.b = 1
            else
                int32_t* ecx_1 = result_10[7]
                int32_t eax_9
                int32_t edx_3
                edx_3:eax_9 = muls.dp.d(0x78787879, result_10[8] - ecx_1)
                int32_t edx_4 = edx_3 s>> 5
                
                if ((edx_4 u>> 0x1f) + edx_4 != 4)
                    if (var_18_1 u>= 0x10)
                        int32_t var_f0_11 = var_2c.d
                        sub_6b4d5b()
                    
                    int32_t var_18_2 = 0xf
                    int32_t var_1c_2 = 0
                    var_2c = 0
                    goto label_4d1c4f
                
                if (*ecx_1 != 0)
                    if (var_18_1 u>= 0x10)
                        int32_t var_f0_12 = var_2c.d
                        sub_6b4d5b()
                    
                    int32_t var_1c_3 = 0
                    goto label_4d2551
                
                int32_t eax_13 = ecx_1[0x11]
                
                if (eax_13 != 0 && eax_13 != 1)
                    if (var_18_1 u>= 0x10)
                        int32_t var_f0_14 = var_2c.d
                        sub_6b4d5b()
                    
                    int32_t var_1c_4 = 0
                    goto label_4d25a1
                
                int32_t eax_14 = ecx_1[0x22]
                
                if (eax_14 != 0 && eax_14 != 1)
                    sub_401110(&var_2c)
                    int32_t var_4_4 = 0xffffffff
                    sub_503740(&result_1)
                    result.b = 0
                    goto label_4d2974
                
                int32_t eax_15 = ecx_1[0x33]
                long double x87_r7_1
                
                if (eax_15 == 0)
                    x87_r7_1 = float.t(ecx_1[0x34])
                else
                    if (eax_15 != 1)
                        sub_401110(&var_2c)
                        goto label_4d1c4f
                    
                    if (eax_15 != 0)
                        x87_r7_1 = fconvert.t(ecx_1[0x35])
                    else
                        x87_r7_1 = float.t(ecx_1[0x34])
                
                var_d4 = fconvert.s(x87_r7_1)
                long double x87_r7_2
                
                if (ecx_1[0x22] != 0)
                    x87_r7_2 = fconvert.t(ecx_1[0x24])
                else
                    x87_r7_2 = float.t(ecx_1[0x23])
                
                float var_d0_1 = fconvert.s(x87_r7_2)
                long double x87_r7_3
                
                if (ecx_1[0x11] != 0)
                    x87_r7_3 = fconvert.t(ecx_1[0x13])
                else
                    x87_r7_3 = float.t(ecx_1[0x12])
                
                float var_cc_1 = fconvert.s(x87_r7_3)
                var_b8 = &sealengine::CFrameMulColor::`vftable'
                float var_b4_1 = fconvert.s(fconvert.t(var_cc_1))
                float var_b0_1 = fconvert.s(fconvert.t(var_d0_1))
                float var_ac_1 = fconvert.s(fconvert.t(var_d4))
                var_a8.d = fconvert.s(float.t(0))
                int32_t ecx_2
                
                if (*ecx_1 != 1)
                    ecx_2 = ecx_1[1]
                else
                    ecx_2 = sub_70c710(fconvert.t(ecx_1[2]))
                
                int32_t* eax_19 = &var_4c
                sub_4d3020(ecx_2, eax_19, &var_b8)
                var_4.b = 3
                sub_4d31f0(eax_19, arg1 + 0x1c)
                var_4.b = 1
            result_10 = &result_10[0xb]
        while (result_10 != result_8)
    
    void* eax_94 = *(arg1 + 0x20)
    void* ecx_37 = *(arg1 + 0x1c)
    sub_4d6640(ecx_37, eax_94, (eax_94 - ecx_37) s>> 5)
    void* eax_95 = *(arg1 + 0x30)
    void* ecx_38 = *(arg1 + 0x2c)
    sub_4d6710(ecx_38, eax_95, (eax_95 - ecx_38) s>> 5)
    int32_t esi_7 = *(arg1 + 0x40)
    int32_t* edi_16 = *(arg1 + 0x3c)
    sub_4d67e0(edi_16, esi_7, (esi_7 - edi_16) s/ 0x14)
    int32_t* eax_100 = *(arg1 + 0x50)
    int32_t* i = *eax_100
    
    if (i != eax_100)
        do
            void* eax_101 = i[0xb]
            void* ecx_41 = i[0xa]
            sub_4d6640(ecx_41, eax_101, (eax_101 - ecx_41) s>> 5)
            
            if (*(i + 0x39) == 0)
                int32_t* i_4 = i[2]
                
                if (*(i_4 + 0x39) != 0)
                    int32_t* i_6 = i[1]
                    
                    if (*(i_6 + 0x39) == 0)
                        while (i == i_6[2])
                            i = i_6
                            i_6 = i_6[1]
                            
                            if (*(i_6 + 0x39) != 0)
                                break
                    
                    i = i_6
                else
                    i = i_4
                    int32_t* i_5 = *i
                    
                    while (*(i_5 + 0x39) == 0)
                        i = i_5
                        i_5 = *i
        while (i != *(arg1 + 0x50))
    
    int32_t* eax_102 = *(arg1 + 0x60)
    int32_t* i_1 = *eax_102
    
    if (i_1 != eax_102)
        do
            void* eax_103 = i_1[0xb]
            void* ecx_42 = i_1[0xa]
            sub_4d6710(ecx_42, eax_103, (eax_103 - ecx_42) s>> 5)
            
            if (*(i_1 + 0x39) == 0)
                int32_t* i_7 = i_1[2]
                
                if (*(i_7 + 0x39) != 0)
                    int32_t* i_9 = i_1[1]
                    
                    if (*(i_9 + 0x39) == 0)
                        while (i_1 == i_9[2])
                            i_1 = i_9
                            i_9 = i_9[1]
                            
                            if (*(i_9 + 0x39) != 0)
                                break
                    
                    i_1 = i_9
                else
                    i_1 = i_7
                    int32_t* i_8 = *i_1
                    
                    while (*(i_8 + 0x39) == 0)
                        i_1 = i_8
                        i_8 = *i_1
        while (i_1 != *(arg1 + 0x60))
    
    int32_t* eax_104 = *(arg1 + 0x70)
    int32_t* i_2 = *eax_104
    
    if (i_2 != eax_104)
        do
            int32_t edi_17 = i_2[0xb]
            int32_t* ebp_1 = i_2[0xa]
            sub_4d67e0(ebp_1, edi_17, (edi_17 - ebp_1) s/ 0x14)
            
            if (*(i_2 + 0x39) == 0)
                int32_t* i_10 = i_2[2]
                
                if (*(i_10 + 0x39) != 0)
                    int32_t* i_12 = i_2[1]
                    
                    if (*(i_12 + 0x39) == 0)
                        while (i_2 == i_12[2])
                            i_2 = i_12
                            i_12 = i_12[1]
                            
                            if (*(i_12 + 0x39) != 0)
                                break
                    
                    i_2 = i_12
                else
                    i_2 = i_10
                    int32_t* i_11 = *i_2
                    
                    while (*(i_11 + 0x39) == 0)
                        i_2 = i_11
                        i_11 = *i_2
        while (i_2 != *(arg1 + 0x70))
    
    int32_t* eax_109 = *(arg1 + 0x80)
    int32_t* i_3 = *eax_109
    
    if (i_3 != eax_109)
        do
            int32_t edi_18 = i_3[0xb]
            int32_t* ebp_2 = i_3[0xa]
            sub_4d6c10(ebp_2, edi_18, (edi_18 - ebp_2) s/ 0x14)
            
            if (*(i_3 + 0x39) == 0)
                int32_t* i_13 = i_3[2]
                
                if (*(i_13 + 0x39) != 0)
                    int32_t* i_15 = i_3[1]
                    
                    if (*(i_15 + 0x39) == 0)
                        while (i_3 == i_15[2])
                            i_3 = i_15
                            i_15 = i_15[1]
                            
                            if (*(i_15 + 0x39) != 0)
                                break
                    
                    i_3 = i_15
                else
                    i_3 = i_13
                    int32_t* i_14 = *i_3
                    
                    while (*(i_14 + 0x39) == 0)
                        i_3 = i_14
                        i_14 = *i_3
        while (i_3 != *(arg1 + 0x80))
    
    if (var_18_1 u>= 0x10)
        int32_t var_f0_27 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_6 = 0xf
    int32_t var_1c_8 = 0
    var_2c = 0
    result = result_1
    int32_t* result_5 = result_8
    
    if (result != result_5)
        float var_f0_28 = var_d4
        int32_t* result_6 = result_5
        int32_t* result_2 = result
        sub_504080(result, var_d4)
        result = result_1
        result_5 = result_2
        int32_t* result_9 = result_5
    
    if (result != 0)
        float var_f0_29 = var_d4
        int32_t* result_7 = result_5
        sub_504080(result, var_d4)
        int32_t* result_3 = result_1
        sub_6b4d5b()
    
    result.b = 1
else
    sub_51ddc0(0x755d54)
label_4d1c4f:
    int32_t var_4_1 = 0xffffffff
    sub_503740(&result_1)
    result.b = 0

label_4d2974:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d8)
return result
