// 函数: sub_665590
// 地址: 0x665590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7256f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_138
int32_t eax_2 = data_78c474 ^ &var_138
int32_t __saved_edi
int32_t var_14c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_128 = 0

while (true)
    *(arg2 + 0x2c) += 1
    int32_t esi_1 = *(arg2 + 0x2c)
    char var_fc
    
    if (*(arg2 + 0x1c) == *(arg2 + 0x20))
    label_666121:
        int32_t var_e8_1 = 0xf
        int32_t var_ec_1 = 0
        var_fc = 0
        sub_401270(&var_fc, 0x1c, 0x730d18)
        int32_t var_4_6 = 0
        sub_6685f0(&var_fc, arg1)
        
        if (var_e8_1 u>= 0x10)
            int32_t var_150_22 = var_fc.d
            sub_6b4d5b()
    else
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x38e38e39, *(arg2 + 0x20) - *(arg2 + 0x1c))
        int32_t edx_2 = edx_1 s>> 3
        
        if ((edx_2 u>> 0x1f) + edx_2 s<= esi_1)
            goto label_666121
        
        int32_t* ebp_1 = *(arg2 + 0x1c) + esi_1 * 0x24
        
        if (ebp_1 == 0)
            goto label_666121
        
        int32_t eax_10 = ebp_1[7]
        int32_t var_150_41
        int32_t var_e8
        char var_e0
        char var_c4
        char var_a8
        int32_t var_94
        void var_90
        
        if (eax_10 == 1)
            char var_132_1 = 0
            char* eax_11 = sub_66fc20(&var_fc, ebp_1)
            int32_t esi_3 = *(eax_11 + 0x10)
            int32_t ecx_4 = esi_3
            
            if (esi_3 u>= 3)
                ecx_4 = 3
            
            if (*(eax_11 + 0x14) u>= 0x10)
                eax_11 = *eax_11
            
            int32_t eax_12 = sub_402320(eax_11, eax_11, &data_730d38, ecx_4)
            bool cond:0_1 = eax_12 == 0
            
            if (eax_12 == 0)
                int32_t eax_13
                
                if (esi_3 u>= 3)
                    eax_13.b = esi_3 != 3
                else
                    eax_13 = 0xffffffff
                
                cond:0_1 = eax_13 == 0
            
            int32_t var_4 = 0xffffffff
            
            if (var_e8 u>= 0x10)
                int32_t var_150_3 = var_fc.d
                sub_6b4d5b()
            
            if (cond:0_1 == 0)
                goto label_665706
            
            *(arg2 + 0x2c) += 1
            int32_t esi_4 = *(arg2 + 0x2c)
            
            if (*(arg2 + 0x1c) == *(arg2 + 0x20))
            label_66616b:
                int32_t var_e8_2 = 0xf
                int32_t var_ec_2 = 0
                var_fc = 0
                sub_401270(&var_fc, 0x27, 0x730d3c)
                int32_t var_4_7 = 2
                sub_6685f0(&var_fc, arg1)
                
                if (var_e8_2 u>= 0x10)
                    var_150_41 = var_fc.d
                    sub_6b4d5b()
            else
                int32_t eax_15
                int32_t edx_5
                edx_5:eax_15 = muls.dp.d(0x38e38e39, *(arg2 + 0x20) - *(arg2 + 0x1c))
                int32_t edx_6 = edx_5 s>> 3
                
                if ((edx_6 u>> 0x1f) + edx_6 s<= esi_4)
                    goto label_66616b
                
                ebp_1 = *(arg2 + 0x1c) + esi_4 * 0x24
                
                if (ebp_1 == 0)
                    goto label_66616b
                
                var_132_1 = 1
            label_665706:
                sub_66fc20(&var_e0, ebp_1)
                int32_t var_4_1 = 3
                *(arg2 + 0x2c) += 1
                int32_t eax_19 = *(arg2 + 0x1c)
                int32_t esi_6 = *(arg2 + 0x2c)
                int32_t var_cc
                
                if (eax_19 == *(arg2 + 0x20))
                label_6661bd:
                    int32_t var_e8_3 = 0xf
                    int32_t var_ec_3 = 0
                    var_fc = 0
                    sub_401270(&var_fc, 0x26, 0x730d64)
                    var_4_1.b = 4
                    sub_6685f0(&var_fc, arg1)
                    
                    if (var_e8_3 u>= 0x10)
                        int32_t var_150_23 = var_fc.d
                        sub_6b4d5b()
                    
                    if (var_cc u>= 0x10)
                        int32_t var_150_24 = var_e0.d
                        sub_6b4d5b()
                else
                    int32_t eax_20
                    int32_t edx_8
                    edx_8:eax_20 = muls.dp.d(0x38e38e39, *(arg2 + 0x20) - eax_19)
                    int32_t edx_9 = edx_8 s>> 3
                    
                    if ((edx_9 u>> 0x1f) + edx_9 s<= esi_6)
                        goto label_6661bd
                    
                    int32_t* ebp_2 = *(arg2 + 0x1c) + esi_6 * 0x24
                    
                    if (ebp_2 == 0)
                        goto label_6661bd
                    
                    if (ebp_2[7] != 0x12)
                        int32_t var_e8_5 = 0xf
                        int32_t var_ec_5 = 0
                        var_fc = 0
                        sub_401270(&var_fc, 0x20, 0x731088)
                        var_4_1.b = 0x21
                        sub_6686d0(ebp_2, arg1, &var_fc)
                        
                        if (var_e8_5 u>= 0x10)
                            int32_t var_150_32 = var_fc.d
                            sub_6b4d5b()
                        
                        if (var_cc u>= 0x10)
                            var_150_41 = var_e0.d
                            sub_6b4d5b()
                    else
                        sub_66e7e0(&var_a8)
                        var_4_1.b = 5
                        var_4_1.b = 6
                        sub_401180(&var_90, 0xffffffff, sub_66fc20(&var_fc, ebp_2), 0)
                        var_4_1.b = 5
                        
                        if (var_e8 u>= 0x10)
                            int32_t var_150_7 = var_fc.d
                            sub_6b4d5b()
                        
                        *(arg2 + 0x2c) += 1
                        int32_t eax_23 = *(arg2 + 0x1c)
                        int32_t esi_8 = *(arg2 + 0x2c)
                        
                        if (eax_23 == *(arg2 + 0x20))
                        label_666227:
                            int32_t var_e8_4 = 0xf
                            int32_t var_ec_4 = 0
                            var_fc = 0
                            sub_401270(&var_fc, 0x33, 0x730d8c)
                            var_4_1.b = 7
                            sub_6685f0(&var_fc, arg1)
                            
                            if (var_e8_4 u>= 0x10)
                                int32_t var_150_25 = var_fc.d
                                sub_6b4d5b()
                            
                            var_4_1.b = 3
                            sub_66e880(&var_a8)
                            
                            if (var_cc u>= 0x10)
                                int32_t var_150_26 = var_e0.d
                                sub_6b4d5b()
                        else
                            int32_t eax_24
                            int32_t edx_14
                            edx_14:eax_24 = muls.dp.d(0x38e38e39, *(arg2 + 0x20) - eax_23)
                            int32_t edx_15 = edx_14 s>> 3
                            
                            if ((edx_15 u>> 0x1f) + edx_15 s<= esi_8)
                                goto label_666227
                            
                            int32_t* esi_9 = *(arg2 + 0x1c) + esi_8 * 0x24
                            
                            if (esi_9 == 0)
                                goto label_666227
                            
                            int32_t eax_29 = esi_9[7]
                            char* ecx_61
                            
                            if (eax_29 != 0xb)
                                if (eax_29 == 4 || eax_29 == 6)
                                    if (sub_402680(0x731054, &var_e0) == 0)
                                        if (sub_402680("float", &var_e0) == 0)
                                            if (sub_402680("string", &var_e0) != 0)
                                                var_94 = 3
                                        else
                                            var_94 = 2
                                    else
                                        var_94 = 1
                                    
                                    sub_662e60(&var_a8, arg3)
                                    
                                    if (esi_9[7] == 6)
                                        goto label_66654f
                                    
                                    goto label_665f94
                                
                                sub_402be0(&var_fc, 0x731068)
                                var_4_1.b = 0x20
                                sub_6686d0(esi_9, arg1, &var_fc)
                                ecx_61 = &var_fc
                            else
                                var_a8 = 1
                                
                                if (var_132_1 != 0)
                                    sub_402be0(&var_c4, 0x730dc0)
                                    var_4_1.b = 8
                                    sub_6686d0(esi_9, arg1, &var_c4)
                                    ecx_61 = &var_c4
                                else
                                    int32_t* ebp_3 = sub_66fff0(arg2)
                                    
                                    if (ebp_3 == 0)
                                        sub_402be0(&var_c4, 0x730de8)
                                        var_4_1.b = 9
                                        sub_6685f0(&var_c4, arg1)
                                        ecx_61 = &var_c4
                                    else
                                        int32_t eax_31 = ebp_3[7]
                                        char var_129_1 = 0
                                        
                                        if (eax_31 == 0xe)
                                            ebp_3 = sub_66fff0(arg2)
                                            
                                            if (ebp_3 != 0)
                                                goto label_665899
                                            
                                            sub_402be0(&var_c4, 0x730dfc)
                                            var_4_1.b = 0xa
                                            sub_6685f0(&var_c4, arg1)
                                            ecx_61 = &var_c4
                                        else if (eax_31 != 0xf)
                                        label_665899:
                                            char var_132_2 = 0
                                            sub_402be0(&var_fc, 0x72d55b)
                                            var_4_1.b = 0xc
                                            void* var_154_6
                                            int32_t* var_150_28
                                            int32_t* var_124
                                            int32_t var_50
                                            int32_t* ecx_63
                                            
                                            if (ebp_3[7] == 1)
                                                var_4_1.b = 0xd
                                                var_128 |= 1
                                                char eax_37 =
                                                    sub_402680("string", sub_66fc20(&var_50, ebp_3))
                                                char var_132_3
                                                void var_2c
                                                char eax_39
                                                
                                                if (eax_37 != 0)
                                                    int32_t var_4_2 = 0xe
                                                    var_128 |= 2
                                                    eax_39 = sub_402680(&data_730e44, 
                                                        sub_66fc20(&var_2c, ebp_3))
                                                    var_132_3 = 1
                                                
                                                if (eax_37 == 0 || eax_39 == 0)
                                                    var_132_3 = 0
                                                
                                                if ((var_128.b & 2) != 0)
                                                    var_128 &= 0xfffffffd
                                                    sub_401110(&var_2c)
                                                
                                                var_4_1 = 0xc
                                                
                                                if ((var_128.b & 1) != 0)
                                                    var_128 &= 0xfffffffe
                                                    sub_401110(&var_50)
                                                
                                                if (var_132_3 != 0)
                                                    sub_402be0(&var_c4, 0x730e48)
                                                    var_4_1.b = 0xf
                                                    goto label_66636f
                                                
                                                var_124 = ebp_3
                                                var_132_2 = 1
                                                var_4_1.b = 0x10
                                                sub_401ef0(&var_fc, sub_66fc20(&var_50, ebp_3))
                                                var_4_1.b = 0xc
                                                sub_401110(&var_50)
                                                ebp_3 = sub_66fff0(arg2)
                                                
                                                if (ebp_3 != 0)
                                                    goto label_6659a9
                                                
                                                sub_402be0(&var_c4, 0x730e78)
                                                var_150_28 = &var_c4
                                                var_4_1.b = 0x11
                                                var_154_6 = arg1
                                                ecx_63 = var_124
                                                goto label_666373
                                            
                                        label_6659a9:
                                            int32_t eax_42 = ebp_3[7]
                                            int32_t var_120
                                            int32_t var_74
                                            float var_70
                                            
                                            if (eax_42 == 0x10)
                                                var_124 = fconvert.s(float.t(0))
                                                var_120 = 0
                                                char* eax_43
                                                int32_t edx_17
                                                eax_43, edx_17 = sub_66fc20(&var_50, ebp_3)
                                                var_4_1.b = 0x12
                                                var_128 |= 4
                                                int32_t* var_150_12 = &var_120
                                                char eax_44 = sub_66ec50(eax_43, edx_17)
                                                char var_131_2
                                                char eax_45
                                                
                                                if (eax_44 != 0)
                                                    eax_45 = sub_402680(0x730e90, &var_e0)
                                                    var_131_2 = 1
                                                
                                                if (eax_44 == 0 || eax_45 == 0)
                                                    var_131_2 = 0
                                                
                                                var_4_1 = 0xc
                                                
                                                if ((var_128.b & 4) != 0)
                                                    var_128 &= 0xfffffffb
                                                    sub_401110(&var_50)
                                                
                                                if (var_131_2 == 0)
                                                    char* eax_48
                                                    int32_t edx_18
                                                    eax_48, edx_18 = sub_66fc20(&var_50, ebp_3)
                                                    var_4_1.b = 0x13
                                                    var_128 |= 8
                                                    int32_t** var_150_14 = &var_124
                                                    char eax_49 = sub_66ec90(eax_48, edx_18)
                                                    char var_131_3
                                                    char eax_50
                                                    
                                                    if (eax_49 != 0)
                                                        eax_50 = sub_402680("float", &var_e0)
                                                        var_131_3 = 1
                                                    
                                                    if (eax_49 == 0 || eax_50 == 0)
                                                        var_131_3 = 0
                                                    
                                                    var_4_1 = 0xc
                                                    
                                                    if ((var_128.b & 8) != 0)
                                                        var_128 &= 0xfffffff7
                                                        sub_401110(&var_50)
                                                    
                                                    if (var_131_3 == 0)
                                                        sub_402be0(&var_c4, 0x730ea8)
                                                        var_150_28 = &var_c4
                                                        var_4_1.b = 0x14
                                                        var_154_6 = arg1
                                                        goto label_666371
                                                    
                                                    if (var_129_1 != 0)
                                                        var_124 = fconvert.s(fconvert.t(var_124)
                                                            * fconvert.t(-1.0))
                                                    
                                                    var_70 = fconvert.s(fconvert.t(var_124))
                                                    var_94 = 2
                                                    
                                                    if (var_132_2 != 0
                                                            && sub_402680(0x730ea4, &var_fc) != 0)
                                                        var_94 = 1
                                                        var_74 = sub_70c710(fconvert.t(var_124))
                                                else
                                                    int32_t eax_46 = var_120
                                                    
                                                    if (var_129_1 != 0)
                                                        eax_46 = neg.d(eax_46)
                                                        var_120 = eax_46
                                                    
                                                    var_94 = 1
                                                    var_74 = eax_46
                                                    
                                                    if (var_132_2 != 0
                                                            && sub_402680("float", &var_fc) != 0)
                                                        var_94 = 2
                                                        var_70 = fconvert.s(float.t(var_120))
                                                
                                                if (sub_402680(0x730ed8, &var_e0) == 0
                                                        || var_94 == 1)
                                                    if (sub_402680("float", &var_e0) != 0
                                                            && var_94 != 2)
                                                        var_94 = 2
                                                        var_70 = fconvert.s(float.t(var_74))
                                                else
                                                    var_94 = 1
                                                    var_74 = sub_70c710(fconvert.t(var_70))
                                                
                                                goto label_665e92
                                            
                                            if (eax_42 == 0x11 && var_129_1 == 0 && var_132_2 == 0)
                                                if (sub_402680("string", &var_e0) == 0)
                                                    sub_402be0(&var_c4, "string")
                                                    var_4_1.b = 0x16
                                                label_66636f:
                                                    var_150_28 = &var_c4
                                                    var_154_6 = arg1
                                                    goto label_666371
                                                
                                                var_94 = 3
                                                var_4_1.b = 0x15
                                                void var_6c
                                                sub_401180(&var_6c, 0xffffffff, 
                                                    sub_66fc20(&var_50, ebp_3), 0)
                                                var_4_1.b = 0xc
                                                sub_401110(&var_50)
                                            label_665e92:
                                                int32_t eax_75
                                                int32_t esi_20
                                                void* edi_18
                                                
                                                if (var_132_1 != 0)
                                                    edi_18 = *arg3
                                                    int32_t eax_72
                                                    int32_t edx_19
                                                    edx_19:eax_72 =
                                                        muls.dp.d(0x2e8ba2e9, arg3[1] - edi_18)
                                                    int32_t edx_20 = edx_19 s>> 4
                                                    eax_75 = (edx_20 u>> 0x1f) + edx_20
                                                    esi_20 = 0
                                                
                                                if (var_132_1 == 0 || eax_75 s<= 0)
                                                label_665ed3:
                                                    int32_t* eax_76 = sub_66fff0(arg2)
                                                    
                                                    if (eax_76 == 0)
                                                        sub_402be0(&var_c4, 0x730fd4)
                                                        var_4_1.b = 0x1e
                                                        sub_6685f0(&var_c4, arg1)
                                                        sub_401110(&var_c4)
                                                        ecx_61 = &var_fc
                                                    else
                                                        if (eax_76[7] == 4)
                                                            sub_662e60(&var_a8, arg3)
                                                            sub_401110(&var_fc)
                                                        label_665f94:
                                                            var_4_1.b = 3
                                                            sub_66e880(&var_a8)
                                                            int32_t var_4_3 = 0xffffffff
                                                            sub_401110(&var_e0)
                                                            continue
                                                        
                                                        if (eax_76[7] != 6)
                                                            sub_402be0(&var_c4, 0x731014)
                                                            var_150_28 = &var_c4
                                                            var_154_6 = arg1
                                                            var_4_1.b = 0x1f
                                                            ecx_63 = eax_76
                                                            goto label_666373
                                                        
                                                        sub_662e60(&var_a8, arg3)
                                                        sub_401110(&var_fc)
                                                    label_66654f:
                                                        var_4_1.b = 3
                                                        sub_66e880(&var_a8)
                                                        sub_401110(&var_e0)
                                                        int32_t eax_103
                                                        eax_103.b = 1
                                                        break
                                                else
                                                    char* ecx_33 = edi_18 + 1
                                                    
                                                    while (*ecx_33 == 0)
                                                        esi_20 += 1
                                                        ecx_33 = &ecx_33[0x58]
                                                        
                                                        if (esi_20 s>= eax_75)
                                                            goto label_665ed3
                                                    
                                                    sub_402be0(&var_c4, 0x730fb0)
                                                    var_4_1.b = 0x1d
                                                    sub_6685f0(&var_c4, arg1)
                                                    sub_401110(&var_c4)
                                                    ecx_61 = &var_fc
                                            else if (eax_42 != 5)
                                                sub_402be0(&var_c4, 0x730f80)
                                                var_150_28 = &var_c4
                                                var_4_1.b = 0x1c
                                                var_154_6 = arg1
                                            label_666371:
                                                ecx_63 = ebp_3
                                            label_666373:
                                                sub_6686d0(ecx_63, var_154_6, var_150_28)
                                                sub_401110(&var_c4)
                                                ecx_61 = &var_fc
                                            else
                                                var_50 = 0
                                                int32_t var_4c_1 = 0
                                                int32_t var_48_1 = 0
                                                int32_t var_40_1 = 0
                                                int32_t var_3c_1 = 0
                                                int32_t var_38_1 = 0
                                                int32_t var_118 = 0
                                                int32_t var_114_1 = 0
                                                int32_t var_110_1 = 0
                                                var_4_1.b = 0x18
                                                var_120 = 1
                                                var_124 = nullptr
                                                sub_668940(ebp_3, &var_118)
                                                void* var_154_7
                                                int32_t* var_150_29
                                                int32_t* eax_58
                                                int32_t* ecx_65
                                                
                                                do
                                                    eax_58 = sub_66fff0(arg2)
                                                    
                                                    if (eax_58 == 0)
                                                        sub_402be0(&var_c4, 0x730f1c)
                                                        var_150_29 = &var_c4
                                                        var_154_7 = arg1
                                                        var_4_1.b = 0x19
                                                        ecx_65 = nullptr
                                                        goto label_666427
                                                    
                                                    int32_t eax_59 = eax_58[7]
                                                    
                                                    if (eax_59 == 5)
                                                        var_120 += 1
                                                    
                                                    if (eax_59 == 6)
                                                        var_124 += 1
                                                    
                                                    sub_668940(eax_58, &var_118)
                                                while (var_120 != var_124)
                                                
                                                if (sub_66ee30(&var_50, &var_118) != 0)
                                                    float var_100_1 = fconvert.s(float.t(0))
                                                    int32_t var_108 = 0
                                                    int32_t var_104_1 = 0
                                                    
                                                    if (sub_66f330(&var_50, &var_108) == 0)
                                                        sub_402be0(&var_c4, 0x730f50)
                                                        var_150_29 = &var_c4
                                                        var_4_1.b = 0x1b
                                                        var_154_7 = arg1
                                                        ecx_65 = eax_58
                                                        goto label_666427
                                                    
                                                    int32_t eax_63 = var_108
                                                    
                                                    if (eax_63 == 1)
                                                        int32_t eax_64 = var_104_1
                                                        var_124 = eax_64
                                                        
                                                        if (var_129_1 != 0)
                                                            eax_64 = neg.d(eax_64)
                                                            var_124 = eax_64
                                                        
                                                        var_94 = 1
                                                        var_74 = eax_64
                                                        
                                                        if (var_132_2 != 0
                                                                && sub_402680("float", &var_fc) != 0)
                                                            var_94 = 2
                                                            var_70 = fconvert.s(float.t(var_124))
                                                    else if (eax_63 == 2)
                                                        long double x87_r7_11 =
                                                            fconvert.t(var_100_1)
                                                        var_124 = fconvert.s(x87_r7_11)
                                                        
                                                        if (var_129_1 != 0)
                                                            var_124 =
                                                                fconvert.s(x87_r7_11 * fconvert.t(-1.0))
                                                        
                                                        var_70 = fconvert.s(fconvert.t(var_124))
                                                        var_94 = 2
                                                        
                                                        if (var_132_2 != 0
                                                                && sub_402680(0x730f70, &var_fc) != 0)
                                                            var_94 = 1
                                                            var_74 = sub_70c710(fconvert.t(var_124))
                                                    
                                                    if (sub_402680(0x730f74, &var_e0) == 0
                                                            || var_94 == 1)
                                                        if (sub_402680("float", &var_e0) != 0
                                                                && var_94 != 2)
                                                            var_94 = 2
                                                            var_70 = fconvert.s(float.t(var_74))
                                                    else
                                                        var_94 = 1
                                                        var_74 = sub_70c710(fconvert.t(var_70))
                                                    
                                                    sub_668910(&var_118)
                                                    var_4_1.b = 0xc
                                                    sub_66ede0(&var_50)
                                                    goto label_665e92
                                                
                                                sub_402be0(&var_c4, 0x730f38)
                                                var_150_29 = &var_c4
                                                var_4_1.b = 0x1a
                                                var_154_7 = arg1
                                                ecx_65 = eax_58
                                            label_666427:
                                                sub_6686d0(ecx_65, var_154_7, var_150_29)
                                                sub_401110(&var_c4)
                                                sub_668910(&var_118)
                                                sub_66ede0(&var_50)
                                                ecx_61 = &var_fc
                                        else
                                            var_129_1 = 1
                                            ebp_3 = sub_66fff0(arg2)
                                            
                                            if (ebp_3 != 0)
                                                goto label_665899
                                            
                                            sub_402be0(&var_c4, 0x730e1c)
                                            var_4_1.b = 0xb
                                            sub_6685f0(&var_c4, arg1)
                                            ecx_61 = &var_c4
                            
                            sub_401110(ecx_61)
                            var_4_1.b = 3
                            sub_66e880(&var_a8)
                            sub_401110(&var_e0)
        else if (eax_10 != 0x12)
            int32_t var_b0_1 = 0xf
            int32_t var_b4_1 = 0
            var_c4 = 0
            sub_401270(&var_c4, 0x1c, 0x731160)
            int32_t var_4_8 = 0x2a
            sub_6686d0(ebp_1, arg1, &var_c4)
            
            if (var_b0_1 u>= 0x10)
                var_150_41 = var_c4.d
                sub_6b4d5b()
        else
            sub_66fc20(&var_fc, ebp_1)
            int32_t var_4_4 = 0x22
            *(arg2 + 0x2c) += 1
            int32_t eax_80 = *(arg2 + 0x1c)
            int32_t esi_24 = *(arg2 + 0x2c)
            
            if (eax_80 == *(arg2 + 0x20))
            label_66666f:
                int32_t var_cc_1 = 0xf
                int32_t var_d0_1 = 0
                var_e0 = 0
                sub_401270(&var_e0, 0x20, 0x7310ac)
                var_4_4.b = 0x23
                sub_6685f0(&var_e0, arg1)
                
                if (var_cc_1 u>= 0x10)
                    int32_t var_150_33 = var_e0.d
                    sub_6b4d5b()
                
                if (var_e8 u>= 0x10)
                    int32_t var_150_34 = var_fc.d
                    sub_6b4d5b()
            else
                int32_t eax_81
                int32_t edx_21
                edx_21:eax_81 = muls.dp.d(0x38e38e39, *(arg2 + 0x20) - eax_80)
                int32_t edx_22 = edx_21 s>> 3
                
                if ((edx_22 u>> 0x1f) + edx_22 s<= esi_24)
                    goto label_66666f
                
                int32_t* ebp_5 = *(arg2 + 0x1c) + esi_24 * 0x24
                
                if (ebp_5 == 0)
                    goto label_66666f
                
                if (ebp_5[7] != 5)
                    int32_t var_d0_3 = 0
                    int32_t var_cc_3 = 0xf
                    var_e0 = 0
                    sub_401270(&var_e0, 0x1c, 0x731140)
                    var_4_4.b = 0x29
                    sub_6686d0(ebp_5, arg1, &var_e0)
                    
                    if (var_cc_3 u>= 0x10)
                        int32_t var_150_39 = var_e0.d
                        sub_6b4d5b()
                    
                    if (var_e8 u>= 0x10)
                        var_150_41 = var_fc.d
                        sub_6b4d5b()
                else
                    sub_66e7e0(&var_a8)
                    var_4_4.b = 0x24
                    sub_401180(&var_90, 0xffffffff, &var_fc, 0)
                    var_94 = 4
                    var_c4.d = 0
                    int32_t var_c0_1 = 0
                    int32_t var_bc_1 = 0
                    var_4_4.b = 0x25
                    
                    if (sub_665590(arg2, &var_c4) == 0)
                        int32_t var_cc_2 = 0xf
                        int32_t var_d0_2 = 0
                        var_e0 = 0
                        sub_401270(&var_e0, 0x2e, 0x7310d0)
                        var_4_4.b = 0x26
                        sub_6685f0(&var_e0, arg1)
                        
                        if (var_cc_2 u>= 0x10)
                            int32_t var_150_35 = var_e0.d
                            sub_6b4d5b()
                        
                        var_4_4.b = 0x24
                        sub_662e20(&var_c4)
                        var_4_4.b = 0x22
                        sub_66e880(&var_a8)
                        
                        if (var_e8 u>= 0x10)
                            int32_t var_150_36 = var_fc.d
                            sub_6b4d5b()
                    else
                        void var_a4
                        sub_6691e0(&var_a4, &var_c4)
                        int32_t* eax_84 = sub_66fff0(arg2)
                        
                        if (eax_84 == 0)
                            sub_402be0(&var_e0, 0x731100)
                            var_4_4.b = 0x27
                            sub_6685f0(&var_e0, arg1)
                        else if (eax_84[7] != 4)
                            if (eax_84[7] == 6)
                                sub_662e60(&var_a8, arg3)
                                var_4_4.b = 0x24
                                sub_662e20(&var_c4)
                                var_4_4.b = 0x22
                                sub_66e880(&var_a8)
                                sub_401110(&var_fc)
                                int32_t eax_110
                                eax_110.b = 1
                                break
                            
                            sub_402be0(&var_e0, 0x731120)
                            var_4_4.b = 0x28
                            sub_6686d0(eax_84, arg1, &var_e0)
                        else
                            sub_662e60(&var_a8, arg3)
                            var_4_4.b = 0x24
                            sub_662e20(&var_c4)
                            var_4_4.b = 0x22
                            sub_66e880(&var_a8)
                            int32_t var_4_5 = 0xffffffff
                            sub_401110(&var_fc)
                            continue
                        
                        sub_401110(&var_e0)
                        var_4_4.b = 0x24
                        sub_662e20(&var_c4)
                        var_4_4.b = 0x22
                        sub_66e880(&var_a8)
                        sub_401110(&var_fc)
    int32_t* eax_85
    eax_85.b = 0
    break

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_138)
