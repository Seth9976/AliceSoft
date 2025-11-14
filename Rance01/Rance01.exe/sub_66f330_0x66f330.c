// 函数: sub_66f330
// 地址: 0x66f330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715c5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_134
int32_t eax_2 = data_78c474 ^ &var_134
int32_t __saved_edi
int32_t var_148 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* ebp = nullptr
int32_t edi = 0
int32_t* var_fc = esi
int32_t* var_130 = nullptr
int32_t var_12c = 0
int32_t var_128 = 0
int32_t var_4 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x38e38e39, esi[1] - *esi)
int32_t edx_1 = edx s>> 3
int32_t eax_9 = (edx_1 u>> 0x1f) + edx_1
int32_t var_104 = 0
int32_t result

if (eax_9 s<= 0)
label_66f509:
    
    if ((edi - ebp) s/ 0xc != 1)
    label_66f99a:
        
        if (ebp != 0)
            int32_t* var_14c_19 = ebp
            sub_6b4d5b()
        
        result.b = 0
    else
        *arg2 = *ebp
        arg2[1] = ebp[1]
        int32_t* var_14c_6 = ebp
        arg2[2] = ebp[2]
        sub_6b4d5b()
        result.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_6b4885(eax_2 ^ &var_134)
    return result

int32_t var_108_1 = 0

while (true)
    int32_t* esi_2 = *esi + var_108_1
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54 = 0
    sub_401180(&var_54, 0xffffffff, esi_2, 0)
    int32_t eax_10 = esi_2[7]
    int32_t var_38_1 = eax_10
    int32_t var_34_1 = esi_2[8]
    var_4.b = 1
    char var_70
    sub_66fc20(&var_70, &var_54)
    var_4.b = 2
    int32_t var_5c
    
    if (eax_10 == 0x10)
        float var_ec_1 = fconvert.s(float.t(0))
        int32_t var_f4 = 0
        int32_t var_f0_1 = 0
        int32_t var_30
        sub_66e8d0(sub_66fc20(&var_30, &var_54), &var_f4)
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            int32_t var_14c_3 = var_30
            sub_6b4d5b()
        
        sub_66faf0(&var_f4, &var_130)
        
        if (var_5c u>= 0x10)
            int32_t var_14c_4 = var_70.d
            sub_6b4d5b()
        
        var_4.b = 0
        var_5c = 0xf
        int32_t var_60_1 = 0
        var_70 = 0
        
        if (var_40_1 u>= 0x10)
            int32_t var_14c_5 = var_54.d
            sub_6b4d5b()
        
        ebp = var_130
    else if (eax_10 != 0x15)
        result = (var_12c - ebp) s/ 0xc
        
        if (result s< 2)
            if (var_5c u>= 0x10)
                int32_t var_14c_17 = var_70.d
                sub_6b4d5b()
            
            int32_t var_5c_1 = 0xf
            int32_t var_60_4 = 0
            var_70 = 0
            
            if (var_40_1 u>= 0x10)
                int32_t var_14c_18 = var_54.d
                sub_6b4d5b()
            
            int32_t var_40_2 = 0xf
            int32_t var_44_2 = 0
            var_54 = 0
            break
        
        int32_t ecx_27 = result * 3
        int32_t esi_7 = ebp[ecx_27 - 2]
        int32_t ecx_28 = var_12c
        float eax_46 = ebp[ecx_27 - 1]
        int32_t var_120 = ebp[ecx_27 - 3]
        int32_t var_11c_1 = esi_7
        
        if (ebp != ecx_28)
            ecx_28 -= 0xc
            var_12c = ecx_28
        
        int32_t ecx_30 = (ecx_28 - ebp) s/ 0xc * 3
        int32_t ecx_31 = ebp[ecx_30 - 2]
        int32_t var_114 = ebp[ecx_30 - 3]
        int32_t edx_23 = ebp[ecx_30 - 1]
        int32_t var_110_1 = ecx_31
        int32_t var_10c_1 = edx_23
        
        if (ebp != var_12c)
            var_12c -= 0xc
        
        int32_t eax_52
        int32_t* eax_54
        
        if (eax_10 - 0xc u<= 0xf)
            switch (eax_10)
                case 0xc
                    void var_94
                    sub_66faf0(sub_66ea50(&var_114, edx_23, &var_120, &var_94), &var_130)
                    ebp = var_130
                case 0xd
                    bool p_2
                    
                    if (esi_7 == 0)
                        long double x87_r7_10 = fconvert.t(eax_46)
                        long double x87_r6_4 = float.t(0)
                        x87_r6_4 - x87_r7_10
                        eax_52.w = (x87_r6_4 < x87_r7_10 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_4, x87_r7_10) ? 1 : 0) << 0xa
                            | (x87_r6_4 == x87_r7_10 ? 1 : 0) << 0xe
                        p_2 = unimplemented  {test ah, 0x44}
                    
                    if (esi_7 == 0 && not(p_2))
                        goto label_66f9b3
                    
                    void var_e8
                    sub_66faf0(sub_66eac0(&var_114, edx_23, &var_120, &var_e8), &var_130)
                    ebp = var_130
                case 0xe
                    void var_c4
                    sub_66faf0(sub_66e970(&var_114, edx_23, &var_120, &var_c4), &var_130)
                    ebp = var_130
                case 0xf
                    void var_7c
                    sub_66faf0(sub_66e9e0(&var_114, edx_23, &var_120, &var_7c), &var_130)
                    ebp = var_130
                case 0x16
                    void var_ac
                    eax_54 = &var_ac
                    sub_66ebf0(&var_120, eax_54, &var_114)
                    sub_66faf0(eax_54, &var_130)
                    ebp = var_130
                case 0x17
                    void var_88
                    eax_54 = &var_88
                    sub_66ec20(&var_120, eax_54, &var_114)
                    sub_66faf0(eax_54, &var_130)
                    ebp = var_130
                case 0x18
                    bool p_1
                    
                    if (esi_7 == 0)
                        long double x87_r7_9 = fconvert.t(eax_46)
                        long double x87_r6_3 = float.t(0)
                        x87_r6_3 - x87_r7_9
                        eax_52.w = (x87_r6_3 < x87_r7_9 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_9) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_9 ? 1 : 0) << 0xe
                        p_1 = unimplemented  {test ah, 0x44}
                    
                    if (esi_7 == 0 && not(p_1))
                    label_66f9b3:
                        sub_401110(&var_70)
                        sub_4c1cf0(&var_54)
                        break
                    
                    void var_a0
                    sub_66faf0(sub_66eb30(&var_a0, &var_120, &var_114), &var_130)
                    ebp = var_130
                case 0x19
                    void var_dc
                    eax_54 = &var_dc
                    sub_66eb60(&var_120, eax_54, &var_114)
                    sub_66faf0(eax_54, &var_130)
                    ebp = var_130
                case 0x1a
                    void var_b8
                    eax_54 = &var_b8
                    sub_66eb90(&var_120, eax_54, &var_114)
                    sub_66faf0(eax_54, &var_130)
                    ebp = var_130
                case 0x1b
                    void var_d0
                    eax_54 = &var_d0
                    sub_66ebc0(&var_120, eax_54, &var_114)
                    sub_66faf0(eax_54, &var_130)
                    ebp = var_130
        
        if (var_5c u>= 0x10)
            int32_t var_14c_15 = var_70.d
            sub_6b4d5b()
        
        var_4.b = 0
        var_5c = 0xf
        int32_t var_60_3 = 0
        var_70 = 0
        
        if (var_40_1 u>= 0x10)
            int32_t var_14c_16 = var_54.d
            sub_6b4d5b()
    else
        if (ebp != var_12c)
            int32_t eax_23
            void* esi_6
            long double x87_r7_6
            
            if (sub_402680(0x7304d8, &var_70) == 0)
                void* eax_29
                float ecx_19
                
                if (sub_402680(0x7304dc, &var_70) == 0)
                    if (sub_402680(0x7304e0, &var_70) != 0)
                        int32_t eax_35 = (var_12c - ebp) s/ 0xc * 3
                        ecx_19 = ebp[eax_35 - 2]
                        eax_29 = &ebp[eax_35]
                        goto label_66f658
                    
                    if (sub_402680("float", &var_70) != 0)
                        esi_6 = &ebp[(var_12c - ebp) s/ 0xc * 3]
                        var_134 = fconvert.s(fconvert.t(*(esi_6 - 4)))
                        x87_r7_6 = fconvert.t(var_134)
                        eax_23 = sub_70c710(x87_r7_6)
                        *(esi_6 - 0xc) = 2
                        *(esi_6 - 4) = fconvert.s(x87_r7_6)
                        *(esi_6 - 8) = eax_23
                else
                    int32_t edx_11 = (var_12c - ebp) s/ 0xc * 3
                    eax_29 = &ebp[edx_11]
                    ecx_19 = not.d(ebp[edx_11 - 2])
                label_66f658:
                    var_134 = ecx_19
                    long double x87_r7_7 = float.t(var_134)
                    *(eax_29 - 8) = ecx_19
                    *(eax_29 - 4) = fconvert.s(x87_r7_7)
                    *(eax_29 - 0xc) = 1
            else
                esi_6 = &ebp[(var_12c - ebp) s/ 0xc * 3]
                var_134 = fconvert.s(fconvert.t(*(esi_6 - 4)))
                var_134 = fconvert.s(fconvert.t(var_134) * fconvert.t(-1.0))
                long double x87_r7_5 = fconvert.t(var_134)
                int32_t eax_22 = sub_70c710(x87_r7_5)
                *(esi_6 - 4) = fconvert.s(x87_r7_5)
                eax_23 = neg.d(eax_22)
                var_134 = eax_23
                x87_r7_6 = float.t(var_134)
                *(esi_6 - 0xc) = 2
                *(esi_6 - 0xc) = 1
                *(esi_6 - 4) = fconvert.s(x87_r7_6)
                *(esi_6 - 8) = eax_23
        
        if (var_5c u>= 0x10)
            int32_t var_14c_7 = var_70.d
            sub_6b4d5b()
        
        var_4.b = 0
        var_5c = 0xf
        int32_t var_60_2 = 0
        var_70 = 0
        
        if (var_40_1 u>= 0x10)
            int32_t var_14c_8 = var_54.d
            sub_6b4d5b()
    var_108_1 += 0x24
    int32_t eax_15 = var_104 + 1
    var_104 = eax_15
    
    if (eax_15 s>= eax_9)
        edi = var_12c
        goto label_66f509
    
    esi = var_fc

goto label_66f99a
