// 函数: sub_666940
// 地址: 0x666940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7254a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_148
int32_t eax_2 = data_78c474 ^ &var_148
int32_t __saved_edi
int32_t var_15c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
int32_t* ebx = arg4
int32_t var_140 = 0
*(edi + 0x2c) += 1
int32_t ecx_1 = *(edi + 0x2c)
void* var_11c = edi
int32_t* var_108 = ebx
char var_e0
void* eax_11

if (*(edi + 0x1c) == *(edi + 0x20))
label_6669fc:
    int32_t var_cc_1 = 0xf
    int32_t var_d0_1 = 0
    var_e0 = 0
    sub_401270(&var_e0, 0x24, 0x731180)
    int32_t var_4 = 0
    sub_6685f0(&var_e0, arg1)
    
    if (var_cc_1 u>= 0x10)
        int32_t var_160_1 = var_e0.d
        sub_6b4d5b()
    
label_666a41:
    eax_11.b = 0
else
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x38e38e39, *(edi + 0x20) - *(edi + 0x1c))
    int32_t edx_4 = edx_3 s>> 3
    
    if ((edx_4 u>> 0x1f) + edx_4 s<= ecx_1)
        goto label_6669fc
    
    void* eax_10 = *(edi + 0x1c) + ecx_1 * 0x24
    
    if (eax_10 == 0)
        goto label_6669fc
    
    void* const eax_13
    
    if (*(eax_10 + 0x1c) != 7)
    label_6678bb:
        eax_13.b = 1
    else
        while (true)
            void* var_12c = nullptr
            void* var_128_1 = nullptr
            int32_t var_124_1 = 0
            int32_t var_4_1 = 1
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = muls.dp.d(0x2e8ba2e9, arg3[1] - *arg3)
            int32_t edx_7 = edx_6 s>> 4
            int32_t eax_18 = (edx_7 u>> 0x1f) + edx_7
            int32_t var_114_1 = 0
            
            if (eax_18 s> 0)
                while (true)
                    char var_a8
                    sub_663290(&var_a8, var_114_1 * 0x58 + *arg3)
                    var_4_1.b = 2
                    *(edi + 0x2c) += 1
                    int32_t edx_8 = *(edi + 0x1c)
                    int32_t esi_2 = *(edi + 0x2c)
                    bool cond:1_1
                    int32_t* var_134
                    void* const var_a4
                    int32_t var_a0
                    char var_90
                    int32_t var_7c
                    char var_6c
                    int32_t var_58
                    
                    if (edx_8 == *(edi + 0x20))
                    label_6675a6:
                        int32_t var_cc_3 = 0xf
                        int32_t var_d0_3 = 0
                        var_e0 = 0
                        sub_401270(&var_e0, 0x24, 0x7311a8)
                        var_4_1.b = 3
                        sub_6686d0(nullptr, arg1, &var_e0)
                        
                        if (var_cc_3 u>= 0x10)
                            int32_t var_160_24 = var_e0.d
                            sub_6b4d5b()
                        
                        var_4_1.b = 1
                        
                        if (var_58 u>= 0x10)
                            int32_t var_160_25 = var_6c.d
                            sub_6b4d5b()
                        
                        int32_t var_58_1 = 0xf
                        int32_t var_5c_1 = 0
                        var_6c = 0
                        
                        if (var_7c u>= 0x10)
                            int32_t var_160_26 = var_90.d
                            sub_6b4d5b()
                        
                        void* const eax_103 = var_a4
                        int32_t var_7c_1 = 0xf
                        int32_t var_80_1 = 0
                        char var_90_1 = 0
                        
                        if (eax_103 == 0)
                            goto label_667687
                        
                        int32_t* var_160_27 = var_134
                        sub_663220(eax_103, var_a0)
                        void* const var_160_28 = var_a4
                    label_66767f:
                        sub_6b4d5b()
                    label_667687:
                        eax_11 = var_12c
                        var_a4 = nullptr
                        int32_t var_a0_1 = 0
                        int32_t var_9c_1 = 0
                        cond:1_1 = eax_11 == 0
                    else
                        int32_t eax_22
                        int32_t edx_9
                        edx_9:eax_22 = muls.dp.d(0x38e38e39, *(edi + 0x20) - edx_8)
                        int32_t edx_10 = edx_9 s>> 3
                        
                        if ((edx_10 u>> 0x1f) + edx_10 s<= esi_2)
                            goto label_6675a6
                        
                        int32_t* ebp_1 = *(edi + 0x1c) + esi_2 * 0x24
                        
                        if (ebp_1 == 0)
                            goto label_6675a6
                        
                        if (ebp_1[7] == 8)
                            if (*ebx != ebx[1])
                                var_4_1.b = 1
                                
                                if (var_58 u>= 0x10)
                                    int32_t var_160_37 = var_6c.d
                                    sub_6b4d5b()
                                
                                int32_t var_58_3 = 0xf
                                int32_t var_5c_3 = 0
                                var_6c = 0
                                
                                if (var_7c u>= 0x10)
                                    int32_t var_160_38 = var_90.d
                                    sub_6b4d5b()
                                
                                eax_13 = var_a4
                                int32_t var_7c_3 = 0xf
                                int32_t var_80_3 = 0
                                char var_90_3 = 0
                                
                                if (eax_13 != 0)
                                    int32_t* var_160_39 = var_134
                                    sub_663220(eax_13, var_a0)
                                    void* const var_160_40 = var_a4
                                    sub_6b4d5b()
                                
                                var_a4 = nullptr
                                int32_t var_a0_3 = 0
                                int32_t var_9c_3 = 0
                                
                                if (var_12c != 0)
                                    void* var_160_41 = var_12c
                                    sub_6b4d5b()
                                
                                goto label_6678bb
                            
                            int32_t var_cc_4 = 0xf
                            int32_t var_d0_4 = 0
                            var_e0 = 0
                            sub_401270(&var_e0, 0x24, 0x7311d0)
                            var_4_1.b = 4
                            sub_6686d0(ebp_1, arg1, &var_e0)
                            
                            if (var_cc_4 u>= 0x10)
                                int32_t var_160_31 = var_e0.d
                                sub_6b4d5b()
                            
                            var_4_1.b = 1
                            
                            if (var_58 u>= 0x10)
                                int32_t var_160_32 = var_6c.d
                                sub_6b4d5b()
                            
                            int32_t var_58_2 = 0xf
                            int32_t var_5c_2 = 0
                            var_6c = 0
                            
                            if (var_7c u>= 0x10)
                                int32_t var_160_33 = var_90.d
                                sub_6b4d5b()
                            
                            void* const eax_107 = var_a4
                            int32_t var_7c_2 = 0xf
                            int32_t var_80_2 = 0
                            char var_90_2 = 0
                            
                            if (eax_107 != 0)
                                int32_t* var_160_34 = var_134
                                sub_663220(eax_107, var_a0)
                                void* const var_160_35 = var_a4
                                sub_6b4d5b()
                            
                            eax_11 = var_12c
                            var_a4 = nullptr
                            int32_t var_a0_2 = 0
                            int32_t var_9c_2 = 0
                            
                            if (eax_11 == 0)
                                goto label_666a41
                            
                            void* var_160_36 = eax_11
                            sub_6b4d5b()
                            int32_t eax_108
                            eax_108.b = 0
                            goto label_6678c4
                        
                        int32_t* eax_26 = operator new(0x80)
                        var_134 = eax_26
                        var_4_1.b = 5
                        char* ebx_1
                        
                        if (eax_26 == 0)
                            ebx_1 = nullptr
                        else
                            ebx_1 = sub_668cd0(eax_26)
                        
                        var_4_1.b = 2
                        int32_t eax_28 = arg5[1]
                        int32_t var_13c = ebx_1
                        int32_t* ecx_11
                        
                        if (&var_13c u< eax_28)
                            ecx_11 = *arg5
                        
                        if (&var_13c u>= eax_28 || ecx_11 u> &var_13c)
                            if (eax_28 == arg5[2])
                                sub_4307a0(arg5)
                            
                            char** eax_33 = arg5[1]
                            
                            if (eax_33 != 0)
                                *eax_33 = ebx_1
                        else
                            if (eax_28 == arg5[2])
                                sub_4307a0(arg5)
                            
                            int32_t** eax_31 = arg5[1]
                            
                            if (eax_31 != 0)
                                *eax_31 = *(*arg5 + ((&var_13c - ecx_11) s>> 2 << 2))
                        
                        arg5[1] += 4
                        ecx_11.b = 0
                        *(ebx_1 + 4) = (arg5[1] - *arg5) s>> 2
                        int32_t eax_37 = ebp_1[7]
                        char* var_10c = ebx_1
                        
                        if (eax_37 == 4 || eax_37 == 3)
                            goto label_6673a1
                        
                        char var_115_1 = 1
                        char var_142_1 = 0
                        char var_50
                        int32_t var_3c_1
                        
                        if (eax_37 == 0xe)
                            *(var_11c + 0x2c) += 1
                            int32_t edx_12 = *(var_11c + 0x1c)
                            int32_t esi_6 = *(var_11c + 0x2c)
                            
                            if (edx_12 != *(var_11c + 0x20))
                                int32_t eax_38
                                int32_t edx_13
                                edx_13:eax_38 = muls.dp.d(0x38e38e39, *(var_11c + 0x20) - edx_12)
                                int32_t edx_14 = edx_13 s>> 3
                                
                                if ((edx_14 u>> 0x1f) + edx_14 s> esi_6)
                                    ebp_1 = *(var_11c + 0x1c) + esi_6 * 0x24
                                    
                                    if (ebp_1 != 0)
                                        goto label_666ceb
                            
                            var_3c_1 = 0xf
                            int32_t var_40_1 = 0
                            var_50 = 0
                            sub_401270(&var_50, 0x1e, 0x7311f8)
                            var_4_1.b = 6
                            sub_6685f0(&var_50, arg1)
                        label_666c55:
                            
                            if (var_3c_1 u>= 0x10)
                                int32_t var_160_4 = var_50.d
                                sub_6b4d5b()
                        else
                            void* const var_34
                            int32_t var_20
                            
                            if (eax_37 != 0xf)
                            label_666ceb:
                                char var_143_1 = 0
                                int32_t var_cc_2 = 0xf
                                int32_t var_d0_2 = 0
                                var_e0 = 0
                                sub_401270(&var_e0, nullptr, 0x72d57a)
                                var_4_1.b = 8
                                int32_t var_c4
                                int32_t* ecx_67
                                
                                if (ebp_1[7] != 1)
                                label_666e67:
                                    int32_t eax_52 = ebp_1[7]
                                    void* var_164_8
                                    int32_t* var_160_46
                                    int32_t var_130
                                    int32_t var_94
                                    
                                    if (eax_52 == 0x10)
                                        var_13c = fconvert.s(float.t(0))
                                        var_130 = 0
                                        var_140 |= 4
                                        char* esi_16 = sub_66fc20(&var_c4, ebp_1)
                                        char var_141_1
                                        
                                        if (sub_66ecd0(esi_16) == 0)
                                            var_141_1 = 0
                                        else
                                            if (*(esi_16 + 0x14) u>= 0x10)
                                                esi_16 = *esi_16
                                            
                                            int32_t* var_160_12 = &var_130
                                            int32_t eax_55 = sub_6b51b5(esi_16, 0x757588)
                                            
                                            if (eax_55 != 1)
                                                var_141_1 = 0
                                            else
                                                var_141_1 = eax_55.b
                                                
                                                if (var_94 != eax_55)
                                                    var_141_1 = 0
                                        
                                        if ((var_140.b & 4) != 0)
                                            var_140 &= 0xfffffffb
                                            sub_401110(&var_c4)
                                        
                                        if (var_141_1 == 0)
                                            char* eax_58
                                            int32_t edx_23
                                            eax_58, edx_23 = sub_66fc20(&var_c4, ebp_1)
                                            var_140 |= 8
                                            int32_t* var_160_14 = &var_13c
                                            char eax_59 = sub_66ec90(eax_58, edx_23)
                                            char var_141_2
                                            
                                            if (eax_59 != 0)
                                                var_141_2 = 1
                                            
                                            if (eax_59 == 0 || var_94 != 2)
                                                var_141_2 = 0
                                            
                                            if ((var_140.b & 8) != 0)
                                                var_140 &= 0xfffffff7
                                                sub_401110(&var_c4)
                                            
                                            if (var_141_2 == 0)
                                                sub_402be0(&var_c4, 0x731298)
                                                var_160_46 = &var_c4
                                                var_4_1.b = 0xe
                                                var_164_8 = arg1
                                                ecx_67 = ebp_1
                                                goto label_6679d1
                                            
                                            if (var_142_1 != 0)
                                                var_13c = fconvert.s(fconvert.t(var_13c)
                                                    * fconvert.t(-1.0))
                                            
                                            *(ebx_1 + 8) = 2
                                            *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_13c))
                                            
                                            if (var_143_1 != 0
                                                    && sub_402680(0x731294, &var_e0) != 0)
                                                *(ebx_1 + 8) = 1
                                                *(ebx_1 + 0x28) = sub_70c710(fconvert.t(var_13c))
                                        else
                                            if (var_142_1 != 0)
                                                var_130 = neg.d(var_130)
                                            
                                            *(ebx_1 + 8) = 1
                                            *(ebx_1 + 0x28) = var_130
                                            
                                            if (var_143_1 != 0 && sub_402680("float", &var_e0) != 0)
                                                *(ebx_1 + 8) = 2
                                                var_134 = fconvert.s(float.t(var_130))
                                                *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_134))
                                        
                                        if (var_94 == 1)
                                            if (*(ebx_1 + 8) != 1)
                                                *(ebx_1 + 8) = 1
                                                *(ebx_1 + 0x28) =
                                                    sub_70c710(fconvert.t(*(ebx_1 + 0x2c)))
                                            
                                            goto label_667382
                                        
                                        if (var_94 == 2 && *(ebx_1 + 8) != 2)
                                            *(ebx_1 + 8) = 2
                                            var_134 = *(ebx_1 + 0x28)
                                            *(ebx_1 + 0x2c) = fconvert.s(float.t(var_134))
                                        
                                        goto label_667382
                                    
                                    if (eax_52 == 0x11 && var_142_1 == 0 && var_143_1 == 0)
                                        if (var_94 != 3)
                                            sub_402be0(&var_c4, "string")
                                            var_160_46 = &var_c4
                                            var_164_8 = arg1
                                            var_4_1.b = 0x10
                                            ecx_67 = ebp_1
                                        label_6679d1:
                                            sub_6686d0(ecx_67, var_164_8, var_160_46)
                                            sub_401110(&var_c4)
                                        label_6679e6:
                                            sub_401110(&var_e0)
                                            var_4_1.b = 1
                                            sub_66e880(&var_a8)
                                            sub_65ab60(&var_12c)
                                            int32_t eax_117
                                            eax_117.b = 0
                                            goto label_6678c4
                                        
                                        *(ebx_1 + 8) = 3
                                        var_4_1.b = 0xf
                                        sub_401180(&ebx_1[0x30], 0xffffffff, 
                                            sub_66fc20(&var_c4, ebp_1), 0)
                                        var_4_1.b = 8
                                        sub_401110(&var_c4)
                                    label_667382:
                                        ebp_1 = sub_66fff0(var_11c)
                                        
                                        if (ebp_1 == 0)
                                            sub_402be0(&var_c4, 0x7313d0)
                                            var_4_1.b = 0x1a
                                            ecx_67 = nullptr
                                            goto label_6679cf
                                        
                                        var_4_1.b = 2
                                        sub_401110(&var_e0)
                                        ecx_11.b = var_115_1
                                    label_6673a1:
                                        int32_t eax_87 = ebp_1[7]
                                        int32_t edi_18
                                        
                                        if (eax_87 == 4)
                                            edi_18 = var_114_1 + 1
                                        
                                        if (eax_87 != 4 || edi_18 s>= eax_18)
                                            if (eax_87 == 3)
                                                edi_18 = var_114_1 + 1
                                            
                                            if (eax_87 != 3 || edi_18 != eax_18)
                                                int32_t var_3c_2 = 0xf
                                                int32_t var_40_3 = 0
                                                var_50 = 0
                                                sub_401270(&var_50, 0x22, 0x73141c)
                                                var_4_1.b = 0x1c
                                                sub_6686d0(ebp_1, arg1, &var_50)
                                                
                                                if (var_3c_2 u>= 0x10)
                                                    int32_t var_160_51 = var_50.d
                                                    sub_6b4d5b()
                                                
                                                var_4_1.b = 1
                                                
                                                if (var_58 u>= 0x10)
                                                    int32_t var_160_52 = var_6c.d
                                                    sub_6b4d5b()
                                                
                                                int32_t var_58_4 = 0xf
                                                int32_t var_5c_4 = 0
                                                var_6c = 0
                                                
                                                if (var_7c u>= 0x10)
                                                    int32_t var_160_53 = var_90.d
                                                    sub_6b4d5b()
                                                
                                                void* const eax_129 = var_a4
                                                int32_t var_7c_4 = 0xf
                                                int32_t var_80_4 = 0
                                                char var_90_4 = 0
                                                
                                                if (eax_129 == 0)
                                                    goto label_667687
                                                
                                                int32_t* var_160_54 = var_134
                                                sub_663220(eax_129, var_a0)
                                                void* const var_160_55 = var_a4
                                                goto label_66767f
                                        
                                        if (ecx_11.b == 0)
                                            if (var_a8 == ecx_11.b)
                                                var_3c_1 = 0xf
                                                int32_t var_40_2 = 0
                                                var_50 = 0
                                                sub_401270(&var_50, 0x24, 0x7313f4)
                                                var_4_1.b = 0x1b
                                                sub_6686d0(ebp_1, arg1, &var_50)
                                                goto label_666c55
                                            
                                            *(ebx_1 + 8) = var_94
                                            int32_t var_74
                                            *(ebx_1 + 0x28) = var_74
                                            float var_70
                                            *(ebx_1 + 0x2c) = fconvert.s(fconvert.t(var_70))
                                            sub_401180(&ebx_1[0x30], 0xffffffff, &var_6c, 0)
                                        
                                        char** eax_89 = var_128_1
                                        void* ecx_42
                                        
                                        if (&var_10c u< eax_89)
                                            ecx_42 = var_12c
                                        
                                        if (&var_10c u>= eax_89 || ecx_42 u> &var_10c)
                                            if (eax_89 == var_124_1)
                                                sub_4307a0(&var_12c)
                                                eax_89 = var_128_1
                                            
                                            if (eax_89 != 0)
                                                *eax_89 = ebx_1
                                        else
                                            int32_t esi_25 = (&var_10c - ecx_42) s>> 2
                                            
                                            if (eax_89 == var_124_1)
                                                sub_4307a0(&var_12c)
                                                eax_89 = var_128_1
                                                ecx_42 = var_12c
                                            
                                            if (eax_89 != 0)
                                                *eax_89 = *(ecx_42 + (esi_25 << 2))
                                        
                                        var_128_1 = &eax_89[1]
                                        var_4_1.b = 1
                                        sub_66e880(&var_a8)
                                        ebx = var_108
                                        edi = var_11c
                                        var_114_1 = edi_18
                                        
                                        if (edi_18 s>= eax_18)
                                            break
                                        
                                        continue
                                    
                                    if (eax_52 == 7 && var_142_1 == 0 && var_143_1 == 0)
                                        *(var_11c + 0x2c) -= 1
                                        
                                        if (var_94 != 4)
                                            sub_402be0(&var_c4, 0x7312f8)
                                            var_4_1.b = 0x11
                                            ecx_67 = ebp_1
                                        label_6679cf:
                                            var_160_46 = &var_c4
                                            var_164_8 = arg1
                                            goto label_6679d1
                                        
                                        var_50.d = 0
                                        int32_t var_4c_1 = 0
                                        int32_t var_48_1 = 0
                                        var_4_1.b = 0x12
                                        char eax_68
                                        int32_t edx_25
                                        eax_68, edx_25 = sub_666940(var_11c, &var_a4, &var_50, arg5)
                                        
                                        if (eax_68 == 0)
                                            sub_402be0(&var_c4, 0x731324)
                                            var_4_1.b = 0x13
                                            sub_6686d0(ebp_1, arg1, &var_c4)
                                            sub_401110(&var_c4)
                                            sub_4add00(&var_50)
                                            goto label_6679e6
                                        
                                        *(ebx_1 + 8) = 4
                                        sub_669360(&var_50, edx_25, &ebx_1[0x5c])
                                        var_4_1.b = 8
                                        sub_4add00(&var_50)
                                        goto label_667382
                                    
                                    if (eax_52 != 5)
                                        sub_402be0(&var_c4, 0x7313a8)
                                        var_160_46 = &var_c4
                                        var_4_1.b = 0x19
                                        var_164_8 = arg1
                                        ecx_67 = ebp_1
                                        goto label_6679d1
                                    
                                    var_34 = nullptr
                                    int32_t var_30_1 = 0
                                    int32_t var_2c_1 = 0
                                    int32_t var_24_2 = 0
                                    var_20 = 0
                                    int32_t var_1c_1 = 0
                                    int32_t var_fc = 0
                                    int32_t var_f8_1 = 0
                                    int32_t var_f4_1 = 0
                                    var_4_1.b = 0x15
                                    var_130 = 1
                                    var_13c = 0
                                    sub_668940(ebp_1, &var_fc)
                                    void* var_164_10
                                    int32_t* var_160_48
                                    int32_t* ecx_73
                                    int32_t* ebp_2
                                    
                                    while (true)
                                        *(var_11c + 0x2c) += 1
                                        int32_t esi_20 = *(var_11c + 0x2c)
                                        
                                        if (*(var_11c + 0x1c) != *(var_11c + 0x20))
                                            int32_t eax_70
                                            int32_t edx_26
                                            edx_26:eax_70 = muls.dp.d(0x38e38e39, 
                                                *(var_11c + 0x20) - *(var_11c + 0x1c))
                                            int32_t edx_27 = edx_26 s>> 3
                                            
                                            if ((edx_27 u>> 0x1f) + edx_27 s> esi_20)
                                                ebp_2 = *(var_11c + 0x1c) + esi_20 * 0x24
                                                
                                                if (ebp_2 != 0)
                                                    int32_t eax_74 = ebp_2[7]
                                                    
                                                    if (eax_74 == 5)
                                                        var_130 += 1
                                                    
                                                    if (eax_74 == 6)
                                                        var_13c += 1
                                                    
                                                    sub_668940(ebp_2, &var_fc)
                                                    
                                                    if (var_130 == var_13c)
                                                        break
                                                    
                                                    continue
                                        
                                        sub_402be0(&var_c4, 0x731350)
                                        var_160_48 = &var_c4
                                        var_4_1.b = 0x16
                                        var_164_10 = arg1
                                        ecx_73 = nullptr
                                        goto label_667af4
                                    
                                    if (sub_66ee30(&var_34, &var_fc) == 0)
                                        sub_402be0(&var_c4, 0x73136c)
                                        var_160_48 = &var_c4
                                        var_4_1.b = 0x17
                                        var_164_10 = arg1
                                        ecx_73 = ebp_2
                                    else
                                        float var_e4_1 = fconvert.s(float.t(0))
                                        int32_t var_ec = 0
                                        int32_t var_e8_1 = 0
                                        
                                        if (sub_66f330(&var_34, &var_ec) != 0)
                                            int32_t eax_78 = var_ec
                                            
                                            if (eax_78 == 1)
                                                int32_t eax_79 = var_e8_1
                                                var_13c = eax_79
                                                
                                                if (var_142_1 != 0)
                                                    eax_79 = neg.d(eax_79)
                                                    var_13c = eax_79
                                                
                                                *(ebx_1 + 8) = 1
                                                *(ebx_1 + 0x28) = eax_79
                                                
                                                if (var_143_1 != 0
                                                        && sub_402680("float", &var_e0) != 0)
                                                    long double x87_r7_11 = float.t(var_13c)
                                                    *(ebx_1 + 8) = 2
                                                    *(ebx_1 + 0x2c) = fconvert.s(x87_r7_11)
                                            else if (eax_78 == 2)
                                                long double x87_r7_12 = fconvert.t(var_e4_1)
                                                var_13c = fconvert.s(x87_r7_12)
                                                
                                                if (var_142_1 != 0)
                                                    var_13c =
                                                        fconvert.s(x87_r7_12 * fconvert.t(-1.0))
                                                
                                                long double x87_r7_14 = fconvert.t(var_13c)
                                                *(ebx_1 + 8) = 2
                                                *(ebx_1 + 0x2c) = fconvert.s(x87_r7_14)
                                                
                                                if (var_143_1 != 0
                                                        && sub_402680(0x7313a4, &var_e0) != 0)
                                                    long double x87_r7_15 = fconvert.t(var_13c)
                                                    *(ebx_1 + 8) = 1
                                                    *(ebx_1 + 0x28) = sub_70c710(x87_r7_15)
                                            
                                            if (var_94 != 1)
                                                if (var_94 == 2 && *(ebx_1 + 8) != 2)
                                                    *(ebx_1 + 8) = 2
                                                    var_134 = *(ebx_1 + 0x28)
                                                    *(ebx_1 + 0x2c) = fconvert.s(float.t(var_134))
                                            else if (*(ebx_1 + 8) != 1)
                                                *(ebx_1 + 8) = 1
                                                *(ebx_1 + 0x28) =
                                                    sub_70c710(fconvert.t(*(ebx_1 + 0x2c)))
                                            
                                            sub_668910(&var_fc)
                                            var_4_1.b = 8
                                            sub_66ede0(&var_34)
                                            goto label_667382
                                        
                                        sub_402be0(&var_c4, 0x731384)
                                        var_160_48 = &var_c4
                                        var_164_10 = arg1
                                        var_4_1.b = 0x18
                                        ecx_73 = ebp_2
                                    
                                label_667af4:
                                    sub_6686d0(ecx_73, var_164_10, var_160_48)
                                    sub_401110(&var_c4)
                                    sub_668910(&var_fc)
                                    sub_66ede0(&var_34)
                                    goto label_6679e6
                                else
                                    var_4_1.b = 9
                                    var_140 |= 1
                                    char eax_46 = sub_402680("string", sub_66fc20(&var_c4, ebp_1))
                                    char var_143_2
                                    char eax_48
                                    
                                    if (eax_46 != 0)
                                        int32_t var_4_2 = 0xa
                                        var_140 |= 2
                                        eax_48 =
                                            sub_402680(&data_731240, sub_66fc20(&var_34, ebp_1))
                                        var_143_2 = 1
                                    
                                    if (eax_46 == 0 || eax_48 == 0)
                                        var_143_2 = 0
                                    
                                    if ((var_140.b & 2) != 0)
                                        var_140 &= 0xfffffffd
                                        
                                        if (var_20 u>= 0x10)
                                            void* const var_160_7 = var_34
                                            sub_6b4d5b()
                                        
                                        var_20 = 0xf
                                        int32_t var_24_1 = 0
                                        var_34.b = 0
                                    
                                    var_4_1 = 8
                                    int32_t var_b0
                                    
                                    if ((var_140.b & 1) != 0)
                                        var_140 &= 0xfffffffe
                                        
                                        if (var_b0 u>= 0x10)
                                            int32_t var_160_8 = var_c4
                                            sub_6b4d5b()
                                    
                                    if (var_143_2 == 0)
                                        var_134 = ebp_1
                                        var_143_1 = 1
                                        var_4_1.b = 0xc
                                        sub_401ef0(&var_e0, sub_66fc20(&var_c4, ebp_1))
                                        var_4_1.b = 8
                                        
                                        if (var_b0 u>= 0x10)
                                            int32_t var_160_10 = var_c4
                                            sub_6b4d5b()
                                        
                                        ebp_1 = sub_66fff0(var_11c)
                                        
                                        if (ebp_1 != 0)
                                            goto label_666e67
                                        
                                        sub_402be0(&var_c4, 0x731274)
                                        var_4_1.b = 0xd
                                        ecx_67 = var_134
                                        goto label_6679cf
                                    
                                    sub_402be0(&var_34, 0x731244)
                                    var_4_1.b = 0xb
                                    sub_6686d0(ebp_1, arg1, &var_34)
                                    
                                    if (var_20 u>= 0x10)
                                        void* const var_160_44 = var_34
                                        sub_6b4d5b()
                                    
                                    if (var_cc_2 u>= 0x10)
                                        int32_t var_160_45 = var_e0.d
                                        sub_6b4d5b()
                                    
                                    int32_t var_cc_5 = 0xf
                                    int32_t var_d0_5 = 0
                                    var_e0 = 0
                            else
                                *(var_11c + 0x2c) += 1
                                int32_t eax_42 = *(var_11c + 0x1c)
                                int32_t esi_9 = *(var_11c + 0x2c)
                                var_142_1 = 1
                                
                                if (eax_42 != *(var_11c + 0x20))
                                    int32_t eax_43
                                    int32_t edx_17
                                    edx_17:eax_43 =
                                        muls.dp.d(0x38e38e39, *(var_11c + 0x20) - eax_42)
                                    int32_t edx_18 = edx_17 s>> 3
                                    
                                    if ((edx_18 u>> 0x1f) + edx_18 s> esi_9)
                                        ebp_1 = *(var_11c + 0x1c) + esi_9 * 0x24
                                        
                                        if (ebp_1 != 0)
                                            goto label_666ceb
                                
                                sub_402be0(&var_34, 0x731218)
                                var_4_1.b = 7
                                sub_6685f0(&var_34, arg1)
                                
                                if (var_20 u>= 0x10)
                                    void* const var_160_42 = var_34
                                    sub_6b4d5b()
                        var_4_1.b = 1
                        sub_66e880(&var_a8)
                        eax_11 = var_12c
                        cond:1_1 = eax_11 == 0
                    
                    if (cond:1_1)
                        goto label_666a41
                    
                    void* var_160_29 = eax_11
                    sub_6b4d5b()
                    int32_t eax_104
                    eax_104.b = 0
                    goto label_6678c4
            
            int32_t eax_93 = ebx[1]
            int32_t edx_30
            
            if (&var_12c u< eax_93)
                edx_30 = *ebx
            
            int32_t* eax_100
            
            if (&var_12c u>= eax_93 || edx_30 u> &var_12c)
                int32_t ecx_49 = ebx[2]
                
                if (eax_93 == ecx_49)
                    int32_t edx_33 = *ebx
                    int32_t eax_98 = (eax_93 - edx_33) s>> 4
                    
                    if (eax_98 u> 0xffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_51 = (ecx_49 - edx_33) s>> 4
                    
                    if (eax_98 + 1 u> ecx_51)
                        uint32_t edx_35 = ecx_51 u>> 1
                        int32_t ecx_52
                        
                        if (0xfffffff - edx_35 u>= ecx_51)
                            ecx_52 = ecx_51 + edx_35
                        else
                            ecx_52 = 0
                        
                        if (ecx_52 u< eax_98 + 1)
                            ecx_52 = eax_98 + 1
                        
                        sub_6630b0(ebx, ecx_52)
                
                eax_100 = ebx[1]
                var_4_1.b = 0x1e
                
                if (eax_100 != 0)
                    sub_6b05e0(eax_100, &var_12c)
            else
                int32_t ecx_44 = ebx[2]
                
                if (eax_93 == ecx_44)
                    int32_t eax_95 = (eax_93 - edx_30) s>> 4
                    
                    if (eax_95 u> 0xffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_46 = (ecx_44 - edx_30) s>> 4
                    
                    if (eax_95 + 1 u> ecx_46)
                        uint32_t edx_32 = ecx_46 u>> 1
                        int32_t ecx_47
                        
                        if (0xfffffff - edx_32 u>= ecx_46)
                            ecx_47 = ecx_46 + edx_32
                        else
                            ecx_47 = 0
                        
                        if (ecx_47 u< eax_95 + 1)
                            ecx_47 = eax_95 + 1
                        
                        sub_6630b0(ebx, ecx_47)
                
                eax_100 = ebx[1]
                var_4_1.b = 0x1d
                
                if (eax_100 != 0)
                    sub_6b05e0(eax_100, ((&var_12c - edx_30) & 0xfffffff0) + *ebx)
            ebx[1] += 0x10
            
            if (var_12c != 0)
                void* var_160_22 = var_12c
                sub_6b4d5b()
label_6678c4:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_148)
