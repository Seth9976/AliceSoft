// 函数: sub_4bcef0
// 地址: 0x4bcef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_98
int32_t eax_1 = data_78c474 ^ &var_98
int32_t* edi = *arg1
var_98 = arg1
int32_t eax_3 = arg1[1]

if (edi != eax_3)
    int32_t eax_8 = (eax_3 - edi) s/ 0x1c
    int32_t esi_1 = 0
    float var_94
    int32_t var_90
    int32_t var_8c
    int32_t var_88
    float var_48[0x11]
    
    if (eax_8 s> 0)
        int32_t* edx_4 = edi
        long double x87_r7_3 = fconvert.t(arg3)
        int32_t ecx_2 = 3
        int32_t ebp_1 = 2
        int32_t edi_1 = 1
        int32_t var_7c_1 = &edx_4[0x15]
        
        while (true)
            long double x87_r6_1 = float.t(*edx_4)
            x87_r6_1 - x87_r7_3
            int32_t eax_9
            eax_9.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_9:1.b & 0x41) == 0)
                break
            
            if (edi_1 s< eax_8)
                if (edx_4[1] == 0)
                    long double x87_r6_2 = float.t(edx_4[7])
                    x87_r6_2 - x87_r7_3
                    eax_9.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_9:1.b & 0x41) == 0)
                        sub_529cb0(&var_94, sub_4be0b0(&edx_4[2], &var_48))
                        *arg2 = var_94
                        arg2[1] = var_90
                        arg2[2] = var_8c
                        arg2[3] = var_88
                        goto label_4bd03b
                    
                    var_7c_1 += 0x1c
                    esi_1 += 1
                    edi_1 += 1
                    edx_4 = &edx_4[7]
                    ebp_1 += 1
                    ecx_2 += 1
                label_4bcfed:
                    
                    if (esi_1 s>= eax_8)
                        break
                    
                    continue
                else if (ebp_1 s< eax_8)
                    if (ecx_2 s>= eax_8)
                        int32_t ecx_21 = (esi_1 + 2) * 7
                        long double x87_r6_5 = float.t(edi[ecx_21])
                        void* ecx_22 = &edi[ecx_21]
                        x87_r6_5 - x87_r7_3
                        int32_t eax_26
                        eax_26.w = (x87_r6_5 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_5, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_5 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
                        bool p_3 = unimplemented  {test ah, 0x41}
                        
                        if (p_3)
                            void* var_ac_9 = ecx_22
                            sub_4bd540(var_98, arg2, esi_1, 3, fconvert.s(x87_r7_3))
                        else
                            sub_529cb0(&var_94, sub_4be0b0(ecx_22 + 8, &var_48))
                            *arg2 = var_94
                            arg2[1] = var_90
                            arg2[2] = var_8c
                            arg2[3] = var_88
                        
                        goto label_4bd03b
                    
                    long double x87_r6_3 = float.t(*var_7c_1)
                    x87_r6_3 - x87_r7_3
                    eax_9.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (p_1)
                        int32_t var_ac_11 = ecx_2
                        sub_4bd540(var_98, arg2, esi_1, 4, fconvert.s(x87_r7_3))
                        goto label_4bd03b
                    
                    var_7c_1 += 0x54
                    esi_1 += 3
                    edi_1 += 3
                    edx_4 = &edx_4[0x15]
                    ebp_1 += 3
                    ecx_2 += 3
                    goto label_4bcfed
                
                edi = &edi[(esi_1 + 1) * 7]
                int32_t* ecx_13 = *edi
                var_98 = ecx_13
                long double x87_r6_4 = float.t(var_98)
                x87_r6_4 - x87_r7_3
                int32_t eax_19
                eax_19.w = (x87_r6_4 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
                bool p_2 = unimplemented  {test ah, 0x41}
                
                if (not(p_2))
                    break
                
                int32_t eax_20 = *edx_4
                void* ecx_14 = ecx_13 - eax_20
                var_98 = eax_20
                
                if (ecx_14 s> 0)
                    void* var_ac_4 = ecx_14
                    var_98 = fconvert.s((x87_r7_3 - float.t(var_98)) / float.t(ecx_14))
                    float var_ac_5 = fconvert.s(fconvert.t(var_98))
                    struct sealengine::CEmitterRotate::VTable* var_78
                    sub_4bdf40(&edx_4[2], &var_78, &edi[2])
                    struct sealengine::CEmitterRotate::VTable* var_58
                    sub_4bdf70(&var_78, &var_58, var_ac_5)
                    struct sealengine::CEmitterRotate::VTable* var_68
                    sub_4bdf10(&var_58, &var_68, &edx_4[2])
                    sub_529cb0(&var_94, sub_4be0b0(&var_68, &var_48))
                    *arg2 = var_94
                    arg2[1] = var_90
                    arg2[2] = var_8c
                    arg2[3] = var_88
                    goto label_4bd03b
            
            sub_529cb0(&var_94, sub_4be0b0(&edx_4[2], &var_48))
            *arg2 = var_94
            arg2[1] = var_90
            arg2[2] = var_8c
            arg2[3] = var_88
            goto label_4bd03b
    
    sub_529cb0(&var_94, sub_4be0b0(&edi[2], &var_48))
    *arg2 = var_94
    arg2[1] = var_90
    arg2[2] = var_8c
    arg2[3] = var_88
else
    long double x87_r7_1 = float.t(0)
    *arg2 = fconvert.s(x87_r7_1)
    arg2[1] = fconvert.s(x87_r7_1)
    arg2[2] = fconvert.s(x87_r7_1)
    arg2[3] = fconvert.s(float.t(1))

label_4bd03b:
sub_6b4885(eax_1 ^ &var_98)
return arg2
