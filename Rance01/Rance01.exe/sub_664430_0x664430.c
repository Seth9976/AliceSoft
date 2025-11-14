// 函数: sub_664430
// 地址: 0x664430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725904
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d0
int32_t eax_2 = data_78c474 ^ &var_d0
int32_t __saved_edi
int32_t var_e4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_cc = 0f
*(arg3 + 0x2c) += 1
int32_t ecx = *(arg3 + 0x2c)
char var_88
void* eax_10

if (*(arg3 + 0x1c) == *(arg3 + 0x20))
label_6644d3:
    int32_t var_74_1 = 0xf
    int32_t var_78_1 = 0
    var_88 = 0
    sub_401270(&var_88, 0x12, 0x730a1c)
    int32_t var_4 = 0
    sub_6685f0(&var_88, arg2)
    
    if (var_74_1 u>= 0x10)
        int32_t var_e8_1 = var_88.d
        sub_6b4d5b()
    
    eax_10.b = 0
else
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x38e38e39, *(arg3 + 0x20) - *(arg3 + 0x1c))
    int32_t edx_4 = edx_3 s>> 3
    
    if ((edx_4 u>> 0x1f) + edx_4 s<= ecx)
        goto label_6644d3
    
    int32_t edi_1 = *(arg3 + 0x1c)
    int32_t* ebp_1 = edi_1 + ecx * 0x24
    
    if (ebp_1 == 0)
        goto label_6644d3
    
    int32_t eax_12 = ebp_1[7]
    char var_cd_1 = 0
    int32_t var_74
    
    if (eax_12 == 0xe)
        *(arg3 + 0x2c) = ecx + 1
        
        if (edi_1 != *(arg3 + 0x20))
            int32_t eax_13
            int32_t edx_6
            edx_6:eax_13 = muls.dp.d(0x38e38e39, *(arg3 + 0x20) - edi_1)
            int32_t edx_7 = edx_6 s>> 3
            
            if ((edx_7 u>> 0x1f) + edx_7 s> ecx + 1)
                ebp_1 = edi_1 + (ecx + 1) * 0x24
                
                if (ebp_1 != 0)
                    goto label_6645ec
        
        sub_402be0(&var_88, 0x730a30)
        int32_t var_4_1 = 1
        sub_6685f0(&var_88, arg2)
        
        if (var_74 u>= 0x10)
            int32_t var_e8_2 = var_88.d
            sub_6b4d5b()
        
        eax_10.b = 0
    else if (eax_12 != 0xf)
    label_6645ec:
        char var_ce_1 = 0
        int32_t var_3c_1 = 0xf
        int32_t var_40_1 = 0
        char var_50 = 0
        sub_401270(&var_50, nullptr, 0x72d52b)
        int32_t var_4_3 = 3
        void var_6c
        char* ecx_13
        
        if (ebp_1[7] == 1)
            char* eax_20 = sub_66fc20(&var_88, ebp_1)
            var_4_3.b = 4
            var_cc = 1.40129846e-45f
            char eax_21 = sub_402680("string", eax_20)
            char var_ce_2
            char eax_23
            
            if (eax_21 != 0)
                char* eax_22 = sub_66fc20(&var_6c, ebp_1)
                int32_t var_4_4 = 5
                var_cc = 4.20389539e-45f
                eax_23 = sub_402680(&data_730a70, eax_22)
                var_ce_2 = 1
            
            if (eax_21 == 0 || eax_23 == 0)
                var_ce_2 = 0
            
            if ((var_cc.b & 2) != 0)
                var_cc &= 0xfffffffd
                sub_401110(&var_6c)
            
            var_4_3 = 3
            
            if ((var_cc.b & 1) != 0)
                var_cc &= 0xfffffffe
                sub_401110(&var_88)
            
            if (var_ce_2 != 0)
                sub_402be0(&var_88, 0x730a74)
                var_4_3.b = 6
                sub_6686d0(ebp_1, arg2, &var_88)
                ecx_13 = &var_88
                goto label_6653c0
            
            int32_t* var_c0_1 = ebp_1
            var_ce_1 = 1
            var_4_3.b = 7
            sub_401ef0(&var_50, sub_66fc20(&var_6c, ebp_1))
            var_4_3.b = 3
            sub_401110(&var_6c)
            ebp_1 = sub_66fff0(arg3)
            
            if (ebp_1 != 0)
                goto label_66476f
            
            sub_402be0(&var_88, 0x730aa4)
            var_4_3.b = 8
            sub_6686d0(var_c0_1, arg2, &var_88)
            ecx_13 = &var_88
            goto label_6653c0
        
    label_66476f:
        int32_t eax_29 = ebp_1[7]
        int32_t var_b8
        int32_t eax_120
        
        if (eax_29 == 0x10)
            var_cc = fconvert.s(float.t(0))
            var_b8 = nullptr
            char* eax_30
            int32_t edx_9
            eax_30, edx_9 = sub_66fc20(&var_88, ebp_1)
            void** var_e8_9 = &var_b8
            void* ebx
            ebx.b = sub_66ec50(eax_30, edx_9)
            
            if (var_74 u>= 0x10)
                int32_t var_e8_10 = var_88.d
                sub_6b4d5b()
            
            if (ebx.b == 0)
                char* eax_36
                int32_t edx_11
                eax_36, edx_11 = sub_66fc20(&var_6c, ebp_1)
                float* var_e8_12 = &var_cc
                ebx.b = sub_66ec90(eax_36, edx_11)
                sub_401110(&var_6c)
                
                if (ebx.b == 0)
                    sub_402be0(&var_88, 0x730ac8)
                    var_4_3.b = 9
                    sub_6686d0(ebp_1, arg2, &var_88)
                    ecx_13 = &var_88
                label_6653c0:
                    sub_401110(ecx_13)
                label_6653c5:
                    sub_401110(&var_50)
                    eax_10.b = 0
                else
                    if (var_cd_1 != 0)
                        var_cc = fconvert.s(fconvert.t(var_cc) * fconvert.t(-1.0))
                    
                    *(arg4 + 0x2c) = fconvert.s(fconvert.t(var_cc))
                    *(arg4 + 8) = 2
                    
                    if (var_ce_1 == 0)
                        sub_401110(&var_50)
                        eax_120.b = 1
                    else if (sub_402680(0x730ac4, &var_50) == 0)
                        sub_401110(&var_50)
                        eax_120.b = 1
                    else
                        long double x87_r7_6 = fconvert.t(var_cc)
                        *(arg4 + 8) = 1
                        *(arg4 + 0x28) = sub_70c710(x87_r7_6)
                        sub_401110(&var_50)
                        int32_t eax_41
                        eax_41.b = 1
            else
                int32_t eax_32 = var_b8
                
                if (var_cd_1 != 0)
                    eax_32 = neg.d(eax_32)
                    var_b8 = eax_32
                
                *(arg4 + 8) = 1
                *(arg4 + 0x28) = eax_32
                
                if (var_ce_1 == 0)
                    sub_401110(&var_50)
                    eax_120.b = 1
                else if (sub_402680("float", &var_50) == 0)
                    sub_401110(&var_50)
                    eax_120.b = 1
                else
                    long double x87_r7_2 = float.t(var_b8)
                    *(arg4 + 8) = 2
                    *(arg4 + 0x2c) = fconvert.s(x87_r7_2)
                    sub_401110(&var_50)
                    int32_t eax_35
                    eax_35.b = 1
        else if (eax_29 != 0x11 || var_cd_1 != 0 || var_ce_1 != 0)
            float var_c4
            int32_t var_98
            int32_t var_34
            
            if (eax_29 == 9 && var_cd_1 == 0 && var_ce_1 == 0)
                *(arg4 + 8) = 5
                int32_t var_a8 = 0
                int32_t var_a4_1 = 0
                int32_t var_a0_1 = 0
                var_4_3.b = 0xb
                int32_t* ebp_2 = sub_66fff0(arg3)
                void* var_ec_5
                int32_t* var_e8_15
                int32_t* ecx_30
                
                if (ebp_2 == 0)
                label_664ebc:
                    sub_402be0(&var_88, 0x730af8)
                    var_e8_15 = &var_88
                    ecx_30 = ebp_1
                    var_4_3.b = 0xc
                label_664ed6:
                    var_ec_5 = arg2
                else
                    while (true)
                        var_b8 = sub_6697c0(arg1)
                        int32_t eax_48 = ebp_2[7]
                        char var_cd_2 = 0
                        
                        if (eax_48 == 0xe)
                            ebp_2 = sub_66fff0(arg3)
                            
                            if (ebp_2 == 0)
                                sub_402be0(&var_88, 0x730b0c)
                                var_e8_15 = &var_88
                                var_ec_5 = arg2
                                var_4_3.b = 0xd
                                ecx_30 = nullptr
                                break
                        else if (eax_48 == 0xf)
                            var_cd_2 = 1
                            ebp_2 = sub_66fff0(arg3)
                            
                            if (ebp_2 == 0)
                                sub_402be0(&var_88, 0x730b24)
                                var_e8_15 = &var_88
                                var_4_3.b = 0xe
                                var_ec_5 = arg2
                                ecx_30 = nullptr
                                break
                        
                        char var_ce_3 = 0
                        sub_401270(&var_50, nullptr, 0x72d53b)
                        
                        if (ebp_2[7] == 1)
                            char* eax_52 = sub_66fc20(&var_34, ebp_2)
                            var_4_3.b = 0xf
                            var_cc |= 4
                            char eax_53 = sub_402680("string", eax_52)
                            char var_ce_4
                            char eax_55
                            
                            if (eax_53 != 0)
                                char* eax_54 = sub_66fc20(&var_6c, ebp_2)
                                int32_t var_4_5 = 0x10
                                var_cc |= 8
                                eax_55 = sub_402680(&data_730b44, eax_54)
                                var_ce_4 = 1
                            
                            if (eax_53 == 0 || eax_55 == 0)
                                var_ce_4 = 0
                            
                            if ((var_cc.b & 8) != 0)
                                var_cc &= 0xfffffff7
                                sub_401110(&var_6c)
                            
                            var_4_3 = 0xb
                            
                            if ((var_cc.b & 4) != 0)
                                var_cc &= 0xfffffffb
                                sub_401110(&var_34)
                            
                            if (var_ce_4 != 0)
                                sub_402be0(&var_88, 0x730b48)
                                var_e8_15 = &var_88
                                var_4_3.b = 0x11
                                ecx_30 = ebp_2
                                goto label_664ed6
                            
                            int32_t* var_ac_1 = ebp_2
                            var_ce_3 = 1
                            var_4_3.b = 0x12
                            sub_401ef0(&var_50, sub_66fc20(&var_34, ebp_2))
                            var_4_3.b = 0xb
                            sub_401110(&var_34)
                            ebp_2 = sub_66fff0(arg3)
                            
                            if (ebp_2 == 0)
                                sub_402be0(&var_88, 0x730b78)
                                var_e8_15 = &var_88
                                var_ec_5 = arg2
                                ecx_30 = var_ac_1
                                var_4_3.b = 0x13
                                break
                        
                        int32_t eax_58 = ebp_2[7]
                        int32_t var_b4
                        
                        if (eax_58 == 0x10)
                            var_c4 = fconvert.s(float.t(0))
                            var_b4 = 0
                            char* eax_59
                            int32_t edx_12
                            eax_59, edx_12 = sub_66fc20(&var_34, ebp_2)
                            int32_t* var_e8_20 = &var_b4
                            char eax_60 = sub_66ec50(eax_59, edx_12)
                            sub_401110(&var_34)
                            
                            if (eax_60 == 0)
                                char* eax_66
                                int32_t edx_13
                                eax_66, edx_13 = sub_66fc20(&var_34, ebp_2)
                                float* var_e8_22 = &var_c4
                                char eax_67 = sub_66ec90(eax_66, edx_13)
                                sub_401110(&var_34)
                                
                                if (eax_67 == 0)
                                    sub_402be0(&var_88, 0x730b9c)
                                    var_e8_15 = &var_88
                                    var_4_3.b = 0x14
                                    var_ec_5 = arg2
                                    ecx_30 = ebp_2
                                    break
                                
                                if (var_cd_2 != 0)
                                    var_c4 = fconvert.s(fconvert.t(var_c4) * fconvert.t(-1.0))
                                
                                int32_t eax_68 = var_b8
                                *(eax_68 + 8) = 2
                                *(eax_68 + 0x2c) = fconvert.s(fconvert.t(var_c4))
                                
                                if (var_ce_3 != 0 && sub_402680(0x730b98, &var_50) != 0)
                                    int32_t eax_70 = var_b8
                                    *(eax_70 + 8) = 1
                                    *(eax_70 + 0x2c) = fconvert.s(fconvert.t(var_c4))
                            else
                                if (var_cd_2 != 0)
                                    var_b4 = neg.d(var_b4)
                                
                                int32_t eax_63 = var_b8
                                *(eax_63 + 8) = 1
                                *(eax_63 + 0x28) = var_b4
                                
                                if (var_ce_3 != 0 && sub_402680("float", &var_50) != 0)
                                    int32_t eax_65 = var_b8
                                    *(eax_65 + 8) = 2
                                    *(eax_65 + 0x2c) =
                                        fconvert.s(fconvert.t(fconvert.s(float.t(var_b4))))
                            
                            goto label_664e86
                        
                        if (eax_58 != 0x11 || var_cd_2 != 0 || var_ce_3 != 0)
                            if (eax_58 == 5)
                                var_34 = 0
                                int32_t var_30_1 = 0
                                int32_t var_2c_1 = 0
                                int32_t var_24_1 = 0
                                int32_t var_20_1 = 0
                                int32_t var_1c_1 = 0
                                var_88.d = 0
                                int32_t var_84_1 = 0
                                int32_t var_80_1 = 0
                                var_4_3.b = 0x17
                                var_b4 = 1
                                var_c4 = 0f
                                sub_668940(ebp_2, &var_88)
                                void* var_ec_7
                                int32_t* var_e8_26
                                int32_t* ecx_53
                                int32_t* ebp_3
                                
                                while (true)
                                    *(arg3 + 0x2c) += 1
                                    int32_t eax_72 = *(arg3 + 0x1c)
                                    int32_t edi_18 = *(arg3 + 0x2c)
                                    
                                    if (eax_72 != *(arg3 + 0x20))
                                        int32_t eax_73
                                        int32_t edx_14
                                        edx_14:eax_73 =
                                            muls.dp.d(0x38e38e39, *(arg3 + 0x20) - eax_72)
                                        int32_t edx_15 = edx_14 s>> 3
                                        
                                        if ((edx_15 u>> 0x1f) + edx_15 s> edi_18)
                                            ebp_3 = *(arg3 + 0x1c) + edi_18 * 0x24
                                            
                                            if (ebp_3 != 0)
                                                int32_t eax_75 = ebp_3[7]
                                                
                                                if (eax_75 == 5)
                                                    var_b4 += 1
                                                
                                                if (eax_75 == 6)
                                                    var_c4 += 1
                                                
                                                sub_668940(ebp_3, &var_88)
                                                
                                                if (var_b4 == var_c4)
                                                    break
                                                
                                                continue
                                    
                                    sub_402be0(&var_6c, 0x730bcc)
                                    var_e8_26 = &var_6c
                                    var_4_3.b = 0x18
                                    var_ec_7 = arg2
                                    ecx_53 = nullptr
                                    goto label_664fa8
                                
                                if (sub_66ee30(&var_34, &var_88) == 0)
                                    sub_402be0(&var_6c, 0x730be8)
                                    var_e8_26 = &var_6c
                                    var_ec_7 = arg2
                                    var_4_3.b = 0x19
                                    ecx_53 = ebp_3
                                label_664fa8:
                                    sub_6686d0(ecx_53, var_ec_7, var_e8_26)
                                    sub_401110(&var_6c)
                                    sub_668910(&var_88)
                                    sub_66ede0(&var_34)
                                    sub_65ab60(&var_a8)
                                    goto label_6653c5
                                
                                var_98 = 0
                                float var_90_1 = fconvert.s(float.t(0))
                                float var_94_1 = 0f
                                
                                if (sub_66f330(&var_34, &var_98) == 0)
                                    sub_402be0(&var_6c, 0x730c00)
                                    var_e8_26 = &var_6c
                                    var_4_3.b = 0x1a
                                    var_ec_7 = arg2
                                    ecx_53 = ebp_3
                                    goto label_664fa8
                                
                                int32_t eax_78 = var_98
                                
                                if (eax_78 == 1)
                                    float eax_79 = var_94_1
                                    var_c4 = eax_79
                                    
                                    if (var_cd_2 != 0)
                                        eax_79 = neg.d(eax_79)
                                        var_c4 = eax_79
                                    
                                    int32_t esi_21 = var_b8
                                    *(esi_21 + 8) = 1
                                    *(esi_21 + 0x28) = eax_79
                                    
                                    if (var_ce_3 != 0 && sub_402680("float", &var_50) != 0)
                                        long double x87_r7_15 = float.t(var_c4)
                                        *(esi_21 + 8) = 2
                                        *(esi_21 + 0x2c) = fconvert.s(x87_r7_15)
                                else if (eax_78 == 2)
                                    long double x87_r7_16 = fconvert.t(var_90_1)
                                    var_c4 = fconvert.s(x87_r7_16)
                                    
                                    if (var_cd_2 != 0)
                                        var_c4 = fconvert.s(x87_r7_16 * fconvert.t(-1.0))
                                    
                                    long double x87_r7_18 = fconvert.t(var_c4)
                                    int32_t esi_22 = var_b8
                                    *(esi_22 + 8) = 2
                                    *(esi_22 + 0x2c) = fconvert.s(x87_r7_18)
                                    
                                    if (var_ce_3 != 0 && sub_402680(0x730c20, &var_50) != 0)
                                        long double x87_r7_19 = fconvert.t(var_c4)
                                        *(esi_22 + 8) = 1
                                        *(esi_22 + 0x28) = sub_70c710(x87_r7_19)
                                
                                sub_668910(&var_88)
                                var_4_3.b = 0xb
                                sub_66ede0(&var_34)
                                goto label_664e86
                            
                            if (eax_58 != 0xa || var_cd_2 != 0 || var_ce_3 != 0)
                                sub_402be0(&var_6c, 0x730c24)
                                var_4_3.b = 0x1b
                            else
                            label_6650be:
                                
                                if (var_a8 != var_a4_1)
                                    sub_4b55f0(arg4 + 0x6c, &var_a8)
                                    sub_65ab60(&var_a8)
                                    sub_401110(&var_50)
                                    int32_t eax_102
                                    eax_102.b = 1
                                    goto label_6653da
                                
                                sub_402be0(&var_6c, 0x730c84)
                                var_4_3.b = 0x1e
                        else
                            int32_t edi_16 = var_b8
                            *(edi_16 + 8) = 3
                            var_4_3.b = 0x15
                            sub_401180(edi_16 + 0x30, 0xffffffff, sub_66fc20(&var_34, ebp_2), 0)
                            var_4_3.b = 0xb
                            sub_401110(&var_34)
                        label_664e86:
                            sub_61b5a0(&var_b8, &var_a8)
                            void* eax_84 = sub_66fff0(arg3)
                            
                            if (eax_84 == 0)
                                sub_402be0(&var_6c, 0x730c48)
                                var_4_3.b = 0x1c
                                sub_6686d0(ebp_1, arg2, &var_6c)
                                sub_401110(&var_6c)
                                sub_65ab60(&var_a8)
                                goto label_6653c5
                            
                            if (*(eax_84 + 0x1c) != 4)
                                if (*(eax_84 + 0x1c) == 0xa)
                                    goto label_6650be
                                
                                sub_402be0(&var_6c, 0x730c5c)
                                var_4_3.b = 0x1d
                            else
                                ebp_2 = sub_66fff0(arg3)
                                
                                if (ebp_2 == 0)
                                    goto label_664ebc
                                
                                continue
                        
                        sub_6686d0(ebp_1, arg2, &var_6c)
                        sub_401110(&var_6c)
                        sub_65ab60(&var_a8)
                        goto label_6653c5
                
                sub_6686d0(ecx_30, var_ec_5, var_e8_15)
                sub_401110(&var_88)
                sub_65ab60(&var_a8)
                goto label_6653c5
            
            if (eax_29 != 5)
                sub_402be0(&var_6c, 0x730d00)
                var_4_3.b = 0x24
                sub_6686d0(ebp_1, arg2, &var_6c)
                ecx_13 = &var_6c
                goto label_6653c0
            
            var_34 = 0
            int32_t var_30_2 = 0
            int32_t var_2c_2 = 0
            int32_t var_24_2 = 0
            int32_t var_20_2 = 0
            int32_t var_1c_2 = 0
            var_88.d = 0
            int32_t var_84_2 = 0
            int32_t var_80_2 = 0
            var_4_3.b = 0x20
            var_c4 = 1.40129846e-45f
            int32_t var_c0_3 = 0
            sub_668940(ebp_1, &var_88)
            int32_t* var_e8_31
            int32_t* ecx_67
            int32_t* ebp_4
            
            while (true)
                *(arg3 + 0x2c) += 1
                int32_t edx_21 = *(arg3 + 0x1c)
                int32_t edi_24 = *(arg3 + 0x2c)
                
                if (edx_21 != *(arg3 + 0x20))
                    int32_t eax_104
                    int32_t edx_22
                    edx_22:eax_104 = muls.dp.d(0x38e38e39, *(arg3 + 0x20) - edx_21)
                    int32_t edx_23 = edx_22 s>> 3
                    
                    if ((edx_23 u>> 0x1f) + edx_23 s> edi_24)
                        ebp_4 = *(arg3 + 0x1c) + edi_24 * 0x24
                        
                        if (ebp_4 != 0)
                            int32_t eax_108 = ebp_4[7]
                            
                            if (eax_108 == 5)
                                var_c4 += 1
                            
                            if (eax_108 == 6)
                                var_c0_3 += 1
                            
                            sub_668940(ebp_4, &var_88)
                            
                            if (var_c4 == var_c0_3)
                                break
                            
                            continue
                
                sub_402be0(&var_6c, 0x730ca8)
                var_e8_31 = &var_6c
                ecx_67 = ebp_1
                var_4_3.b = 0x21
                goto label_665249
            
            if (sub_66ee30(&var_34, &var_88) == 0)
                sub_402be0(&var_6c, 0x730cc4)
                var_e8_31 = &var_6c
                var_4_3.b = 0x22
                ecx_67 = ebp_4
            label_665249:
                sub_6686d0(ecx_67, arg2, var_e8_31)
                sub_401110(&var_6c)
                sub_668910(&var_88)
                sub_66ede0(&var_34)
                goto label_6653c5
            
            var_98 = 0
            float var_90_2 = fconvert.s(float.t(0))
            int32_t var_94_2 = 0
            
            if (sub_66f330(&var_34, &var_98) == 0)
                sub_402be0(&var_6c, 0x730cdc)
                var_e8_31 = &var_6c
                var_4_3.b = 0x23
                ecx_67 = ebp_4
                goto label_665249
            
            int32_t eax_115 = var_98
            
            if (eax_115 == 1)
                int32_t eax_116 = var_94_2
                int32_t var_c0_4 = eax_116
                
                if (var_cd_1 != 0)
                    eax_116 = neg.d(eax_116)
                    var_c0_4 = eax_116
                
                *(arg4 + 8) = 1
                *(arg4 + 0x28) = eax_116
                
                if (var_ce_1 != 0 && sub_402680("float", &var_50) != 0)
                    *(arg4 + 8) = 2
                    *(arg4 + 0x2c) = fconvert.s(float.t(var_c0_4))
            else if (eax_115 == 2)
                long double x87_r7_22 = fconvert.t(var_90_2)
                float var_c0_5 = fconvert.s(x87_r7_22)
                
                if (var_cd_1 != 0)
                    var_c0_5 = fconvert.s(x87_r7_22 * fconvert.t(-1.0))
                
                *(arg4 + 0x2c) = fconvert.s(fconvert.t(var_c0_5))
                *(arg4 + 8) = 2
                
                if (var_ce_1 != 0 && sub_402680(0x730cfc, &var_50) != 0)
                    *(arg4 + 8) = 1
                    *(arg4 + 0x28) = sub_70c710(fconvert.t(var_c0_5))
            
            sub_668910(&var_88)
            sub_66ede0(&var_34)
            sub_401110(&var_50)
            eax_120.b = 1
        else
            *(arg4 + 8) = 3
            var_4_3.b = 0xa
            sub_401180(arg4 + 0x30, 0xffffffff, sub_66fc20(&var_6c, ebp_1), 0)
            sub_401110(&var_6c)
            sub_401110(&var_50)
            int32_t eax_45
            eax_45.b = 1
    else
        var_cd_1 = 1
        ebp_1 = sub_66fff0(arg3)
        
        if (ebp_1 != 0)
            goto label_6645ec
        
        sub_402be0(&var_88, 0x730a4c)
        int32_t var_4_2 = 2
        sub_6685f0(&var_88, arg2)
        sub_401110(&var_88)
        eax_10.b = 0
label_6653da:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d0)
