// 函数: sub_4eba80
// 地址: 0x4eba80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717807
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[3].b == 0)
    result.b = 1
else
    int128_t* ecx_1 = arg1[0x11]
    int128_t* esi_1 = arg1[0x10]
    
    if (esi_1 != ecx_1)
        int32_t edi_1 = 0 s>> 2 << 2
        sub_6b49d0(esi_1, ecx_1, edi_1, eax_2)
        arg1[0x11] = edi_1 + esi_1
    
    int128_t* ecx_2 = arg1[0x16]
    int128_t* esi_2 = arg1[0x15]
    
    if (esi_2 != ecx_2)
        int32_t ebp_1 = 0 s>> 2 << 2
        sub_6b49d0(esi_2, ecx_2, ebp_1, eax_2)
        arg1[0x16] = ebp_1 + esi_2
    
    void* ebp_3 = arg2[0x9b]
    
    if (ebp_3 == 0)
        result.b = 0
    else
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_2 = edx_1 s>> 8
        int32_t* var_a4 = nullptr
        int32_t var_a0_1 = 0
        int32_t var_9c_1 = 0
        sub_4ecc20((edx_2 u>> 0x1f) + edx_2, &var_a4)
        int32_t var_4 = 0
        int32_t eax_13
        int32_t edx_3
        edx_3:eax_13 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_4 = edx_3 s>> 8
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
        int32_t var_90_1 = 0
        int32_t var_8c_1 = 0
        sub_65a090(&result_2, (edx_4 u>> 0x1f) + edx_4)
        var_4.b = 1
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_6 = edx_5 s>> 8
        float* var_84 = nullptr
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        sub_65a090(&var_84, (edx_6 u>> 0x1f) + edx_6)
        var_4.b = 2
        int32_t eax_21
        int32_t edx_7
        edx_7:eax_21 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_8 = edx_7 s>> 8
        int32_t var_b4 = 0
        int32_t var_b0_1 = 0
        int32_t var_ac_1 = 0
        sub_65a090(&var_b4, (edx_8 u>> 0x1f) + edx_8)
        var_4.b = 3
        int32_t eax_25
        int32_t edx_9
        edx_9:eax_25 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_10 = edx_9 s>> 8
        int32_t var_c4 = 0
        int32_t var_c0_1 = 0
        int32_t var_bc_1 = 0
        sub_65a090(&var_c4, (edx_10 u>> 0x1f) + edx_10)
        var_4.b = 4
        int32_t eax_29
        int32_t edx_11
        edx_11:eax_29 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_12 = edx_11 s>> 8
        void* var_74 = nullptr
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        sub_4ecd20((edx_12 u>> 0x1f) + edx_12, &var_74)
        var_4.b = 5
        int32_t eax_33
        int32_t edx_13
        edx_13:eax_33 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
        int32_t edx_14 = edx_13 s>> 8
        int32_t eax_36 = (edx_14 u>> 0x1f) + edx_14
        int32_t var_d8_1 = 0
        float var_60
        float var_4c
        float var_40
        
        if (eax_36 s<= 0)
        label_4ebf27:
            unimplemented  {fld st0, dword [ecx+0x4]}
            unimplemented  {fmul st0, dword [eax+0x8]}
            unimplemented  {fld st0, dword [ecx+0x8]}
            unimplemented  {fmul st0, dword [eax+0x4]}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fstp dword [esp+0x18], st0}
            unimplemented  {fld st0, dword [eax]}
            unimplemented  {fmul st0, dword [ecx+0x8]}
            unimplemented  {fld st0, dword [ecx]}
            unimplemented  {fmul st0, dword [eax+0x8]}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            float var_c8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
            unimplemented  {fstp dword [esp+0x2c], st0}
            unimplemented  {fld st0, dword [ecx]}
            unimplemented  {fmul st0, dword [eax+0x4]}
            unimplemented  {fld st0, dword [eax]}
            unimplemented  {fmul st0, dword [ecx+0x4]}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            float var_cc_2 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
            unimplemented  {fstp dword [esp+0x28], st0}
            unimplemented  {fld st0, dword [esp+0x18]}
            var_4c = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
            unimplemented  {fstp dword [esp+0xa8], st0}
            unimplemented  {fld st0, dword [esp+0x2c]}
            float var_48_1 = fconvert.s(unimplemented  {fstp dword [esp+0xac], st0})
            unimplemented  {fstp dword [esp+0xac], st0}
            unimplemented  {fld st0, dword [esp+0x28]}
            float var_44_1 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
            unimplemented  {fstp dword [esp+0xb0], st0}
            sub_51e2a0(&var_4c, &var_40)
            int32_t* i_2 = arg1[0xc]
            int32_t* i_1 = i_2
            
            if (i_2 != arg1[0xd])
                void* i
                
                do
                    int32_t* eax_51 = *i_1
                    
                    if (eax_51 != 0)
                        int32_t ecx_38 = *eax_51
                        
                        if (ecx_38 s< 0)
                        label_4ec1f0:
                            void* eax_76 = var_74
                            
                            if (eax_76 != 0)
                                void* var_f8_32 = eax_76
                                sub_6b4d5b()
                            
                            int32_t eax_77 = var_c4
                            
                            if (eax_77 != 0)
                                int32_t var_f8_33 = eax_77
                                sub_6b4d5b()
                            
                            int32_t eax_78 = var_b4
                            
                            if (eax_78 != 0)
                                int32_t var_f8_34 = eax_78
                                sub_6b4d5b()
                            
                            float* eax_79 = var_84
                            
                            if (eax_79 != 0)
                                float* var_f8_35 = eax_79
                                sub_6b4d5b()
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_2
                            
                            if (result_4 != 0)
                                struct _EXCEPTION_REGISTRATION_RECORD** result_8 = result_4
                                sub_6b4d5b()
                            
                            int32_t var_4_3 = 0xffffffff
                            sub_4eccd0(&var_a4)
                            result.b = 0
                            goto label_4ec402
                        
                        int32_t eax_52
                        int32_t edx_28
                        edx_28:eax_52 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
                        int32_t edx_29 = edx_28 s>> 8
                        
                        if (ecx_38 s>= (edx_29 u>> 0x1f) + edx_29)
                            goto label_4ec1f0
                        
                        int32_t eax_57 = ecx_38 * 0x208
                        
                        if (eax_57 == neg.d(*(ebp_3 + 0xc)))
                            goto label_4ec1f0
                        
                        int32_t* var_114_1 = arg3
                        unimplemented  {fld st0, dword [eax+ecx]}
                        float var_114_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        unimplemented  {fld st0, dword [eax+ecx]}
                        float var_11c_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                        unimplemented  {fstp dword [esp+0xc], st0}
                        unimplemented  {fld st0, dword [eax+ecx]}
                        float var_120_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                        unimplemented  {fstp dword [esp+0x8], st0}
                        unimplemented  {fld st0, dword [eax+ecx]}
                        float var_124_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                        unimplemented  {fstp dword [esp+0x4], st0}
                        unimplemented  {fld st0, dword [esp+0x134]}
                        float var_128_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        char eax_61 = sub_4ee1c0(eax_57 + *(ebp_3 + 0xc), &var_a4[ecx_38 * 6], 
                            *i_1, arg2, var_128_1, var_124_1, var_120_1, var_11c_1, 
                            (ecx_38 << 4) + var_74, var_114_2, arg3, arg4, &var_40, arg5, arg6, 
                            &arg1[0x10], &arg1[0x15])
                        
                        if (eax_61 == 0)
                            void* eax_80 = var_74
                            
                            if (eax_80 != 0)
                                void* var_f8_37 = eax_80
                                sub_6b4d5b()
                            
                            int32_t eax_81 = var_c4
                            
                            if (eax_81 != 0)
                                int32_t var_f8_38 = eax_81
                                sub_6b4d5b()
                            
                            int32_t eax_82 = var_b4
                            
                            if (eax_82 != 0)
                                int32_t var_f8_39 = eax_82
                                sub_6b4d5b()
                            
                            float* eax_83 = var_84
                            
                            if (eax_83 != 0)
                                float* var_f8_40 = eax_83
                                sub_6b4d5b()
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_2
                            
                            if (result_5 != 0)
                                struct _EXCEPTION_REGISTRATION_RECORD** result_9 = result_5
                                sub_6b4d5b()
                            
                            int32_t var_4_4 = 0xffffffff
                            sub_4eccd0(&var_a4)
                            result.b = 0
                            goto label_4ec402
                    
                    i = &i_1[1]
                    i_1 = i
                while (i != arg1[0xd])
            
            int128_t* esi_19 = arg1[0x11]
            uint32_t ebp_4 = arg1[0x10]
            
            if (ebp_4 != esi_19)
                int32_t ecx_50 = (esi_19 - ebp_4) s>> 2
                int32_t eax_64
                int32_t edx_32
                edx_32:eax_64 = sx.q(ecx_50 + 1)
                var_60 = 0f
                int32_t var_5c_1 = 0
                int32_t var_58_1 = 0
                int32_t var_54_1 = (eax_64 - edx_32) s>> 1
                float* var_50_1 = &var_60
                var_4.b = 6
                sub_4dcbb0(ebp_4, esi_19, ecx_50, &var_60, 0)
                var_4.b = 5
                float eax_67 = var_60
                
                if (eax_67 != 0)
                    float var_f8_25 = eax_67
                    sub_6b4d5b()
            
            char eax_68 = sub_4dc9f0(arg7, &arg1[0x10])
            char eax_70
            
            if (eax_68 != 0)
                eax_70 = sub_4dcb20(&arg1[0x10])
            
            if (eax_68 != 0 && eax_70 != 0)
                int32_t* ecx_53 = arg1[0x15]
                
                if (ecx_53 != arg1[0x16])
                    int128_t* eax_84 = arg1[0x16]
                    int32_t var_f8_42 = 0
                    sub_4ed010(ecx_53, eax_84, (eax_84 - ecx_53) s>> 2)
                
                unimplemented  {fld st0, dword [esp+0x100]}
                void* ecx_54 = arg2[0x9b]
                void* var_f8_43 = ecx_54
                float var_f8_44 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                bool cond:1_1 = sub_4ec800(ecx_54, arg1, arg7, var_f8_44) != 0
                void* eax_87 = var_74
                
                if (cond:1_1)
                    if (eax_87 != 0)
                        void* var_f8_50 = eax_87
                        sub_6b4d5b()
                    
                    int32_t eax_91 = var_c4
                    
                    if (eax_91 != 0)
                        int32_t var_f8_51 = eax_91
                        sub_6b4d5b()
                    
                    int32_t eax_92 = var_b4
                    
                    if (eax_92 != 0)
                        int32_t var_f8_52 = eax_92
                        sub_6b4d5b()
                    
                    float* eax_93 = var_84
                    
                    if (eax_93 != 0)
                        float* var_f8_53 = eax_93
                        sub_6b4d5b()
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** result_7 = result_2
                    
                    if (result_7 != 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** result_11 = result_7
                        sub_6b4d5b()
                    
                    int32_t var_4_6 = 0xffffffff
                    sub_4eccd0(&var_a4)
                    result.b = 1
                else
                    if (eax_87 != 0)
                        void* var_f8_45 = eax_87
                        sub_6b4d5b()
                    
                    int32_t eax_88 = var_c4
                    
                    if (eax_88 != 0)
                        int32_t var_f8_46 = eax_88
                        sub_6b4d5b()
                    
                    int32_t eax_89 = var_b4
                    
                    if (eax_89 != 0)
                        int32_t var_f8_47 = eax_89
                        sub_6b4d5b()
                    
                    float* eax_90 = var_84
                    
                    if (eax_90 != 0)
                        float* var_f8_48 = eax_90
                        sub_6b4d5b()
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** result_6 = result_2
                    
                    if (result_6 != 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** result_10 = result_6
                        sub_6b4d5b()
                    
                    int32_t var_4_5 = 0xffffffff
                    sub_4eccd0(&var_a4)
                    result.b = 0
            else
                void* eax_71 = var_74
                
                if (eax_71 != 0)
                    void* var_f8_27 = eax_71
                    sub_6b4d5b()
                
                int32_t eax_72 = var_c4
                
                if (eax_72 != 0)
                    int32_t var_f8_28 = eax_72
                    sub_6b4d5b()
                
                int32_t eax_73 = var_b4
                
                if (eax_73 != 0)
                    int32_t var_f8_29 = eax_73
                    sub_6b4d5b()
                
                float* eax_74 = var_84
                
                if (eax_74 != 0)
                    float* var_f8_30 = eax_74
                    sub_6b4d5b()
                
                result = result_2
                
                if (result != 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                    sub_6b4d5b()
                
                int32_t var_4_2 = 0xffffffff
                int32_t* ebp_5 = var_a4
                
                if (ebp_5 != 0)
                    int32_t* esi_21 = ebp_5
                    
                    if (ebp_5 != var_a0_1)
                        do
                            (**esi_21)(0)
                            esi_21 = &esi_21[6]
                        while (esi_21 != var_a0_1)
                    
                    int32_t* var_f8_31 = ebp_5
                    sub_6b4d5b()
                
                result.b = 0
        else
            float* esi_8 = var_84
            void* var_64_1 = var_74
            float* ecx_19 = result_2 - esi_8
            float* ecx_21 = var_b4 - esi_8
            float* ecx_23 = var_c4 - esi_8
            int32_t var_d4_1 = 0
            float* ebx_1 = esi_8
            float* var_d0_1 = &var_a4[4]
            
            while (true)
                if (var_d8_1 s>= 0 && var_d8_1 s< eax_36)
                    void* edi_5 = *(ebp_3 + 0xc)
                    void* edi_6 = edi_5 + var_d4_1
                    
                    if (edi_5 != neg.d(var_d4_1))
                        int32_t ecx_25 = *(edi_6 + 0x24)
                        unimplemented  {fld st0, dword [esp+0x100]}
                        int32_t var_f8_7 = ecx_25
                        float var_f8_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        struct sealengine::CEmitterPos::VTable* var_24
                        struct sealengine::CEmitterPos::VTable** eax_38 =
                            sub_4bc890(ecx_25, edi_6 + 0xcc, &var_24, var_f8_8)
                        var_d0_1[-3] = eax_38[1]
                        var_d0_1[-2] = eax_38[2]
                        var_d0_1[-1] = eax_38[3]
                        unimplemented  {fld st0, dword [eax+0x10]}
                        *var_d0_1 = fconvert.s(unimplemented  {fstp dword [ecx], st0})
                        unimplemented  {fstp dword [ecx], st0}
                        float* var_f8_9 = var_d0_1
                        unimplemented  {fld st0, dword [eax+0x14]}
                        var_d0_1[1] = fconvert.s(unimplemented  {fstp dword [ecx+0x4], st0})
                        unimplemented  {fstp dword [ecx+0x4], st0}
                        unimplemented  {fld st0, dword [esp+0x104]}
                        float var_f8_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        struct sealengine::CEmitterSize::VTable* const var_34
                        int32_t ecx_27 = sub_4ecaf0(&var_34, var_f8_10)
                        unimplemented  {fld st0, dword [eax+0x4]}
                        *(ecx_19 + ebx_1) = fconvert.s(unimplemented  {fstp dword [eax+ebx], st0})
                        unimplemented  {fstp dword [eax+ebx], st0}
                        int32_t var_f8_11 = ecx_27
                        unimplemented  {fld st0, dword [esp+0x104]}
                        float var_f8_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_34 = &sealengine::CEmitterSize::`vftable'
                        struct sealengine::CEmitterSize::VTable* const var_2c
                        int32_t ecx_28 = sub_4ecaf0(&var_2c, var_f8_12)
                        unimplemented  {fld st0, dword [eax+0x4]}
                        *ebx_1 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
                        unimplemented  {fstp dword [ebx], st0}
                        int32_t var_f8_13 = ecx_28
                        unimplemented  {fld st0, dword [esp+0x104]}
                        float var_f8_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_2c = &sealengine::CEmitterSize::`vftable'
                        sub_4ecaf0(&var_40, var_f8_14)
                        unimplemented  {fld st0, dword [eax+0x4]}
                        *(ecx_21 + ebx_1) = fconvert.s(unimplemented  {fstp dword [ecx+ebx], st0})
                        unimplemented  {fstp dword [ecx+ebx], st0}
                        float* var_f8_15 = ecx_21
                        unimplemented  {fld st0, dword [esp+0x104]}
                        float var_f8_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_40 = &sealengine::CEmitterSize::`vftable'
                        int32_t ecx_30 = sub_4ecb10(&var_4c, var_f8_16)
                        unimplemented  {fld st0, dword [eax+0x4]}
                        *(ecx_23 + ebx_1) = fconvert.s(unimplemented  {fstp dword [edx+ebx], st0})
                        unimplemented  {fstp dword [edx+ebx], st0}
                        int32_t var_f8_17 = ecx_30
                        unimplemented  {fld st0, dword [esp+0x104]}
                        float var_f8_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_4c = &sealengine::CFrameMulAlpha::`vftable'
                        sub_4bcdb0(edi_6 + 0x10c, &var_60, var_f8_18)
                        int16_t top = top - 1
                        unimplemented  {call 0x4bcdb0}
                        float* eax_44 = var_64_1
                        var_d4_1 += 0x208
                        var_d0_1 = &var_d0_1[6]
                        *eax_44 = var_60
                        int32_t var_5c
                        eax_44[1] = var_5c
                        int32_t esi_14 = var_d8_1 + 1
                        int32_t var_58
                        eax_44[2] = var_58
                        int32_t var_54
                        eax_44[3] = var_54
                        var_d8_1 = esi_14
                        ebx_1 = &ebx_1[1]
                        var_64_1 = &eax_44[4]
                        int32_t eax_46
                        int32_t edx_23
                        edx_23:eax_46 = muls.dp.d(0x7e07e07f, *(ebp_3 + 0x10) - *(ebp_3 + 0xc))
                        int32_t edx_24 = edx_23 s>> 8
                        eax_36 = (edx_24 u>> 0x1f) + edx_24
                        
                        if (esi_14 s>= eax_36)
                            goto label_4ebf27
                        
                        esi_8 = var_84
                        continue
                
                void* eax_49 = var_74
                
                if (eax_49 != 0)
                    void* var_f8_19 = eax_49
                    sub_6b4d5b()
                
                if (var_c4 != 0)
                    int32_t var_f8_20 = var_c4
                    sub_6b4d5b()
                
                if (var_b4 != 0)
                    int32_t var_f8_21 = var_b4
                    sub_6b4d5b()
                
                if (esi_8 != 0)
                    float* var_f8_22 = esi_8
                    sub_6b4d5b()
                
                if (result_2 != 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_2
                    sub_6b4d5b()
                
                int32_t var_4_1 = 0xffffffff
                sub_4eccd0(&var_a4)
                break
            
            result.b = 0

label_4ec402:
fsbase->NtTib.ExceptionList = ExceptionList
return result
