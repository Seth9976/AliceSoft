// 函数: sub_5fa6b0
// 地址: 0x5fa6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_72734b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_134
int32_t eax_2 = data_78c474 ^ &var_134
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_405d70(arg2, arg1)

if (result == 0)
    if (sub_402680(&(*U"\\n\n\n\n\n\n\n\n")[8], arg2) == 0)
        int32_t esi_1 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_d8 = nullptr
        int32_t var_d4_1 = 0
        int32_t var_d0_1 = 0
        int32_t var_44_1 = 0
        sub_5faec0(&var_d8, arg2)
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = var_d8
        int32_t ebx_3 = (var_d4_1 - edi_1) s/ 0x1c
        int32_t var_f4_1 = 0
        
        if (ebx_3 s> 0)
            while (true)
                int32_t ecx_5 = esi_1 * 7
                void* eax_8 = &edi_1[ecx_5]
                
                if (edi_1[ecx_5 + 4] == 2)
                    int32_t edx_4 = *(eax_8 + 0x14)
                    void* ecx_6
                    
                    if (edx_4 u< 0x10)
                        ecx_6 = eax_8
                    else
                        ecx_6 = *eax_8
                    
                    if (*ecx_6 == 0x81)
                        if (edx_4 u>= 0x10)
                            eax_8 = *eax_8
                        
                        if (*(eax_8 + 1) == 0x5c)
                            esi_1 += 1
                            
                            if (esi_1 s< ebx_3)
                                void* eax_9 = &edi_1[esi_1 * 7]
                                
                                while (true)
                                    if (*(eax_9 + 0x10) == 2)
                                        int32_t edx_7 = *(eax_9 + 0x14)
                                        char* ecx_7
                                        
                                        if (edx_7 u< 0x10)
                                            ecx_7 = eax_9
                                        else
                                            ecx_7 = *eax_9
                                        
                                        if (*ecx_7 == 0x81)
                                            void* ecx_8
                                            
                                            if (edx_7 u< 0x10)
                                                ecx_8 = eax_9
                                            else
                                                ecx_8 = *eax_9
                                            
                                            if (*(ecx_8 + 1) == 0x5c)
                                                esi_1 += 1
                                                eax_9 += 0x1c
                                                
                                                if (esi_1 s>= ebx_3)
                                                    break
                                                
                                                continue
                                    
                                    if (esi_1 s>= ebx_3)
                                        break
                                    
                                    esi_1 -= 1
                                    break
                
                var_f4_1 += 1
                esi_1 += 1
                
                if (esi_1 s>= ebx_3)
                    break
        
        int32_t ecx_9 = arg1[0x14]
        void* edi_3 = &arg1[0x14]
        int32_t i = (arg1[0x15] - ecx_9) s>> 2
        void* var_f8 = edi_3
        
        for (; var_f4_1 s< i; i = (*(edi_3 + 4) - ecx_9) s>> 2)
            int32_t* esi_2 = *(ecx_9 + (i << 2) - 4)
            
            if (esi_2 != 0)
                int32_t eax_12 = *esi_2
                
                if (eax_12 != 0xffffffff)
                    sub_409390(eax_12)
                    edi_3 = var_f8
                    *esi_2 = 0xffffffff
                
                int32_t* var_148_2 = esi_2
                sub_6b4d5b()
            
            int32_t eax_13 = *(edi_3 + 4)
            
            if (*edi_3 != eax_13)
                *(edi_3 + 4) = eax_13 - 4
            
            ecx_9 = *edi_3
        
        int32_t var_f4_2 = 0
        int32_t var_ec_1 = 0
        
        if (ebx_3 s> 0)
            while (true)
                int32_t esi_3 = var_f4_2
                float var_f0
                
                if (esi_3 s>= (arg1[0x15] - arg1[0x14]) s>> 2)
                    void* eax_20 = operator new(0x10)
                    
                    if (eax_20 == 0)
                        var_f8 = nullptr
                    else
                        *(eax_20 + 4) = arg1[0x18]
                        *eax_20 = 0xffffffff
                        *(eax_20 + 8) = 0
                        *(eax_20 + 0xc) = 0
                        var_f8 = eax_20
                    
                    int32_t eax_21 = arg1[0x15]
                    var_f0 = var_f8
                    int32_t ecx_12
                    
                    if (&var_f0 u< eax_21)
                        ecx_12 = arg1[0x14]
                    
                    if (&var_f0 u>= eax_21 || ecx_12 u> &var_f0)
                        if (eax_21 == arg1[0x16])
                            sub_4307a0(&arg1[0x14])
                        
                        void** eax_26 = arg1[0x15]
                        
                        if (eax_26 != 0)
                            *eax_26 = var_f8
                    else
                        if (eax_21 == arg1[0x16])
                            sub_4307a0(&arg1[0x14])
                        
                        int32_t* eax_24 = arg1[0x15]
                        
                        if (eax_24 != 0)
                            *eax_24 = *(arg1[0x14] + ((&var_f0 - ecx_12) s>> 2 << 2))
                        
                        esi_3 = var_f4_2
                    
                    arg1[0x15] += 4
                
                if (*(*(arg1[0x14] + (esi_3 << 2)) + 4) != 0)
                    *(*(data_797d2c + 0x30) + 0x17c) = arg1[8]
                
                if (*(*(arg1[0x14] + (esi_3 << 2)) + 4) != 0)
                    *(*(data_797d2c + 0x30) + 0x180) = arg1[9]
                
                char ecx_16 = (arg1[0xc]).b
                char edx_11 = (arg1[0xb]).b
                var_f8 = arg1[0xa]
                void* ecx_17
                
                if (*(*(arg1[0x14] + (esi_3 << 2)) + 4) == 0)
                    ecx_17 = data_797d2c
                else
                    void* eax_35
                    eax_35.b = var_f8.b
                    char var_e2_1 = ecx_16
                    ecx_17 = data_797d2c
                    char var_e3_1 = edx_11
                    char var_e1_1 = 0xff
                    *(*(ecx_17 + 0x30) + 0x184) = eax_35.b.d
                
                void* eax_38 = *(arg1[0x14] + (esi_3 << 2))
                var_f8 = fconvert.s(fconvert.t(arg1[0xe]))
                
                if (*(eax_38 + 4) != 0)
                    *(*(ecx_17 + 0x30) + 0x188) = fconvert.s(fconvert.t(var_f8))
                
                void* esi_7 = *(arg1[0x14] + (esi_3 << 2))
                var_f8 = fconvert.s(fconvert.t(arg1[0xf]))
                
                if (*(esi_7 + 4) != 0)
                    *(*(ecx_17 + 0x30) + 0x18c) = fconvert.s(fconvert.t(var_f8))
                
                if (*(*(arg1[0x14] + (var_f4_2 << 2)) + 4) != 0)
                    char var_de_1 = (arg1[0x12]).b
                    char var_df_1 = (arg1[0x11]).b
                    char var_dd_1 = 0xff
                    *(*(data_797d2c + 0x30) + 0x190) = (arg1[0x10]).b.d
                
                struct _EXCEPTION_REGISTRATION_RECORD** ecx_20 = var_d8
                int32_t eax_46 = var_ec_1 * 7
                void* esi_9 = &ecx_20[eax_46]
                
                if (ecx_20[eax_46 + 4] != 2)
                label_5fad0f:
                    int32_t* edi_13 = *(arg1[0x14] + (var_f4_2 << 2))
                    int32_t* eax_74 = edi_13[1]
                    
                    if (eax_74 != 0)
                        if (*edi_13 == 0xffffffff)
                            int32_t* ecx_34 = *eax_74
                            void* edx_28 = data_797d2c
                            int32_t* var_148_9 = ecx_34
                            *edi_13 = sub_40d040(*(edx_28 + 0x30) + 0x28c, edx_28, ecx_34)
                        
                        sub_5f9fe0(*edi_13, esi_9)
                else
                    int32_t ecx_21 = *(esi_9 + 0x14)
                    char* eax_47
                    
                    if (ecx_21 u< 0x10)
                        eax_47 = esi_9
                    else
                        eax_47 = *esi_9
                    
                    if (*eax_47 != 0x81)
                        goto label_5fad0f
                    
                    void* eax_48
                    
                    if (ecx_21 u< 0x10)
                        eax_48 = esi_9
                    else
                        eax_48 = *esi_9
                    
                    if (*(eax_48 + 1) != 0x5c)
                        goto label_5fad0f
                    
                    int32_t var_ac_1 = 0xf
                    int32_t var_b0_1 = 0
                    char var_c0 = 0
                    sub_401180(&var_c0, 0xffffffff, esi_9, 0)
                    int32_t ebx_7 = var_ec_1 + 1
                    var_44_1.b = 1
                    int32_t esi_10 = 1
                    var_ec_1 = ebx_7
                    
                    if (ebx_7 s< ebx_3)
                        void* eax_50 = &var_d8[ebx_7 * 7]
                        
                        while (true)
                            if (*(eax_50 + 0x10) != 2)
                            label_5fab05:
                                var_ec_1 = ebx_7
                                
                                if (ebx_7 s>= ebx_3)
                                    break
                                
                                ebx_7 -= 1
                            else
                                int32_t edx_18 = *(eax_50 + 0x14)
                                char* ecx_23
                                
                                if (edx_18 u< 0x10)
                                    ecx_23 = eax_50
                                else
                                    ecx_23 = *eax_50
                                
                                if (*ecx_23 != 0x81)
                                    goto label_5fab05
                                
                                void* ecx_24
                                
                                if (edx_18 u< 0x10)
                                    ecx_24 = eax_50
                                else
                                    ecx_24 = *eax_50
                                
                                if (*(ecx_24 + 1) != 0x5c)
                                    goto label_5fab05
                                
                                ebx_7 += 1
                                esi_10 += 1
                                eax_50 += 0x1c
                                
                                if (ebx_7 s< ebx_3)
                                    continue
                            
                            var_ec_1 = ebx_7
                            break
                    
                    struct IString::common::CStringWrapper::VTable* const var_a4 =
                        &common::CStringWrapper::`vftable'{for `IString'}
                    int32_t var_8c_1 = 0xf
                    int32_t var_90_1 = 0
                    char var_a0 = 0
                    sub_401180(&var_a0, 0xffffffff, &var_c0, 0)
                    var_44_1.b = 2
                    int32_t var_c8
                    int16_t x87control_1 = sub_407f10(&var_a4, &var_c8)
                    var_44_1.b = 1
                    var_a4 = &common::CStringWrapper::`vftable'{for `IString'}
                    
                    if (var_8c_1 u>= 0x10)
                        int32_t var_148_4 = var_a0.d
                        sub_6b4d5b()
                    
                    int32_t esi_11 = arg1[9]
                    int32_t edi_11 = (esi_10 - 1) * arg1[7] + var_c8 * esi_10
                    int32_t eax_52 = esi_11 & 0x80000001
                    bool cond:5_1 = eax_52 == 0
                    
                    if (eax_52 s< 0)
                        cond:5_1 = ((eax_52 - 1) | 0xfffffffe) == 0xffffffff
                    
                    if (not(cond:5_1))
                        esi_11 += 1
                    
                    var_f8 = fconvert.s(fconvert.t(arg1[0xf]))
                    struct IString::common::CStringWrapper::VTable* const* var_14c_5
                    var_14c_5.q = fconvert.d(fconvert.t(var_f8))
                    int32_t mxcsr
                    int16_t x87control_2
                    long double st0_1
                    st0_1, x87control_2 = sub_6b4ef0(mxcsr, x87control_1, var_14c_5)
                    var_f8 = fconvert.s(st0_1)
                    int32_t eax_56 = sub_70c710(fconvert.t(var_f8))
                    var_f0 = fconvert.s(fconvert.t(arg1[0xe]))
                    var_f8 = eax_56
                    var_14c_5.q = fconvert.d(fconvert.t(var_f0))
                    var_f0 = fconvert.s(sub_6b4ef0(mxcsr, x87control_2, var_14c_5))
                    int32_t eax_57 = sub_70c710(fconvert.t(var_f0))
                    bool cond:6_1 = eax_57 s< var_f8
                    var_f0 = eax_57
                    void** eax_58 = &var_f8
                    
                    if (not(cond:6_1))
                        eax_58 = &var_f0
                    
                    void* ecx_27 = *eax_58
                    void* eax_60 = *(arg1[0x14] + (var_f4_2 << 2))
                    var_f8 = eax_60
                    int32_t* eax_61 = *(eax_60 + 4)
                    float esi_12 = esi_11 + (ecx_27 << 1)
                    var_f0 = esi_12
                    
                    if (eax_61 != 0 && edi_11 s> 0 && esi_12 s> 0)
                        void* ecx_28 = var_f8
                        int32_t ebx_9 = *ecx_28
                        void* esi_13 = data_797d2c
                        
                        if (ebx_9 == 0xffffffff)
                            int32_t edx_22 = *eax_61
                            int32_t var_148_5 = edx_22
                            ebx_9 = sub_40d040(*(esi_13 + 0x30) + 0x28c, edx_22, ecx_28)
                        
                        void* esi_14 = *(esi_13 + 0x30)
                        int32_t* eax_66
                        int32_t* ecx_30
                        int32_t edx_24
                        eax_66, ecx_30, edx_24 =
                            sub_570c50(esi_14 + 0x194, edi_11, var_f0, esi_14 + 0x17c)
                        
                        if (eax_66 != 0)
                            int32_t var_148_7 = ebx_9
                            void* eax_68 = sub_40c350(esi_14 + 0x274, edx_24, ecx_30)
                            char eax_69
                            
                            if (eax_68 != 0)
                                eax_69 = sub_40c700(eax_68, eax_66)
                            
                            if (eax_68 != 0 && eax_69 != 0)
                                (*(*eax_66 + 4))(eax_4)
                                *var_f8 = ebx_9
                            else
                                (*(*eax_66 + 4))(eax_4)
                    
                    var_44_1.b = 0
                    
                    if (var_ac_1 u>= 0x10)
                        int32_t var_148_8 = var_c0.d
                        sub_6b4d5b()
                    
                    int32_t var_ac_2 = 0xf
                    int32_t var_b0_2 = 0
                    var_c0 = 0
                
                var_f4_2 += 1
                int32_t eax_80 = var_ec_1 + 1
                var_ec_1 = eax_80
                
                if (eax_80 s>= ebx_3)
                    break
        
        result = sub_401180(arg1, 0xffffffff, arg2, 0)
        struct _EXCEPTION_REGISTRATION_RECORD** esi_16 = var_d8
        
        if (esi_16 != 0)
            if (esi_16 != var_d4_1)
                do
                    if (esi_16[5] u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_148_11 = *esi_16
                        sub_6b4d5b()
                    
                    esi_16[5] = 0xf
                    esi_16[4] = 0
                    *esi_16 = nullptr
                    esi_16 = &esi_16[7]
                while (esi_16 != var_d4_1)
                
                esi_16 = var_d8
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_148_12 = esi_16
            result = sub_6b4d5b()
    else
        result = sub_401180(arg1, 0xffffffff, arg2, 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_134)
return result
