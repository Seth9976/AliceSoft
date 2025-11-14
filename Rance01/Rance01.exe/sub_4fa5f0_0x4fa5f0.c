// 函数: sub_4fa5f0
// 地址: 0x4fa5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fafb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_198
int32_t eax_2 = data_78c474 ^ &var_198
int32_t __saved_edi
int32_t var_1ac = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg5
void* ebx = arg4
void* edi = arg2
void* var_188 = edi
void* var_168 = ebx
int32_t edx_1

if (esi s>= 0)
    int32_t eax_6
    int32_t edx
    edx:eax_6 = muls.dp.d(0x30c30c31, *(ebx + 0x1c) - *(ebx + 0x18))
    edx_1 = edx s>> 4

int32_t var_184
int32_t eax_14

if (esi s< 0 || esi s>= (edx_1 u>> 0x1f) + edx_1)
    var_184 = 0
    eax_14 = 0
else
    int32_t* eax_10 = esi * 0x54 + *(ebx + 0x18) + 0x40
    int32_t eax_11
    int32_t edx_3
    edx_3:eax_11 = muls.dp.d(0x4bda12f7, eax_10[1] - *eax_10)
    int32_t edx_4 = edx_3 s>> 5
    eax_14 = (edx_4 u>> 0x1f) + edx_4
    var_184 = eax_14

int32_t var_174 = 0

if (eax_14 s<= 0)
label_4fae62:
    eax_14.b = 1
else
    while (true)
        long double x87_r7_1 = float.t(0)
        float var_58 = fconvert.s(x87_r7_1)
        float var_54_1 = fconvert.s(x87_r7_1)
        float var_50 = fconvert.s(x87_r7_1)
        float var_4c = fconvert.s(x87_r7_1)
        float var_48_1 = fconvert.s(x87_r7_1)
        float var_44_1 = fconvert.s(x87_r7_1)
        float var_40 = fconvert.s(x87_r7_1)
        float var_3c_1 = fconvert.s(x87_r7_1)
        float var_38_1 = fconvert.s(x87_r7_1)
        char var_190
        char var_18f
        char var_18e
        int32_t var_18c
        int32_t var_13c
        int32_t var_138
        int32_t var_134
        int32_t var_64
        int32_t var_60
        int32_t var_5c
        void var_34
        void var_30
        void var_2c
        void var_28
        void var_24
        void var_20
        void var_1c
        void var_18
        void var_14
        char eax_15 = sub_4f4f40(var_174, ebx, esi, &var_64, &var_60, &var_5c, &var_34, &var_30, 
            &var_2c, &var_1c, &var_18, &var_14, &var_28, &var_24, &var_20, &var_13c, &var_138, 
            &var_134, &var_190, &var_18f, &var_18e, &var_58, &var_4c, &var_40, &var_18c)
        
        if (eax_15 == 0)
            break
        
        if (arg8 == 0)
            var_18c = 0
        
        int32_t (__fastcall* var_1b0_2)(struct sealengine::CPolyVertex::VTable** arg1) = sub_503520
        void var_120
        sub_6b5516(&var_120, 0x3c, 3, sub_5034e0)
        int32_t var_4 = 0
        int32_t ecx_7 = var_60
        int32_t var_11c = var_64 + arg6
        int32_t var_e0_1 = ecx_7 + arg6
        int32_t var_a4_1 = var_5c + arg6
        void var_118
        void* ebx_1 = &var_118
        float* ebp_1 = &var_58
        int32_t var_194_1 = 3
        float var_164
        
        while (true)
            int32_t edx_9 = ebp_1[1]
            int32_t eax_17 = *(ebx_1 - 4)
            var_164 = *ebp_1
            int32_t var_160_1 = edx_9
            int32_t var_154_1 = esi
            int32_t esi_1 = *(edi + 0x74)
            int32_t var_15c_1 = ebp_1[2]
            float* ecx_11 = *(edi + 0x70)
            int32_t var_150_1 = var_18c
            int32_t var_158_1 = eax_17
            var_198 = ecx_11
            float* eax_18 = sub_4fe750(ecx_11, &var_164, esi_1)
            
            if (eax_18 == esi_1)
                int32_t eax_24
                int32_t edx_14
                edx_14:eax_24 = muls.dp.d(0x2aaaaaab, *(edi + 0x74) - *(edi + 0x70))
                int32_t edx_15 = edx_14 s>> 2
                sub_4fc760(&var_164, edi + 0x70)
                *ebx_1 = (edx_15 u>> 0x1f) + edx_15
            else
                *ebx_1 = (eax_18 i- var_198) s/ 0x18
            
            ebp_1 = &ebp_1[3]
            ebx_1 += 0x3c
            int32_t temp1_1 = var_194_1
            var_194_1 -= 1
            
            if (temp1_1 == 1)
                break
            
            edi = var_188
            esi = arg5
        
        int32_t ebx_2 = 0
        int32_t* esi_5 = &var_11c
        
        while (true)
            int32_t ecx_15 = *esi_5
            
            if (ecx_15 s>= 0)
                int32_t eax_26
                int32_t edx_18
                edx_18:eax_26 = muls.dp.d(0x2e8ba2e9, *(var_188 + 0x64) - *(var_188 + 0x60))
                int32_t edx_19 = edx_18 s>> 3
                
                if (ecx_15 s< (edx_19 u>> 0x1f) + edx_19)
                    int32_t* edx_21 = ecx_15 * 0x2c + *(var_188 + 0x60) + 0xc
                    int32_t ecx_19 = (edx_21[1] - *edx_21) s>> 2
                    
                    if (ecx_19 s> 4)
                        ecx_19 = 4
                    
                    int32_t eax_30 = 0
                    
                    if (ecx_19 s> 0)
                        do
                            esi_5[eax_30 + 2] = *(*edx_21 + (eax_30 << 2))
                            eax_30 += 1
                        while (eax_30 s< ecx_19)
                    
                    if (ecx_19 s<= 0 || eax_30 s< 4)
                        __builtin_memset(&esi_5[eax_30 + 2], 0xffffffff, (4 - eax_30) << 2)
                    
                    ebx_2 += 1
                    esi_5 = &esi_5[0xf]
                    
                    if (ebx_2 s< 3)
                        continue
                    
                    long double x87_r7_2 = float.t(1)
                    void var_f8
                    void* ecx_21 = &var_f8
                    long double x87_r6_1 = float.t(0)
                    int32_t edi_6 = 0
                    
                    while (true)
                        float var_17c_1 = fconvert.s(x87_r6_1)
                        int32_t ebp_2 = *(&var_34 + edi_6)
                        float var_178_1 = fconvert.s(x87_r6_1)
                        
                        if (arg5 s>= 0)
                            int32_t eax_31
                            int32_t edx_24
                            edx_24:eax_31 =
                                muls.dp.d(0x30c30c31, *(var_168 + 0x1c) - *(var_168 + 0x18))
                            int32_t edx_25 = edx_24 s>> 4
                            
                            if (arg5 s< (edx_25 u>> 0x1f) + edx_25 && ebp_2 s>= 0)
                                int32_t eax_36 = arg5 * 0x54
                                int32_t* ebx_4 = eax_36 + *(var_168 + 0x18) + 0x30
                                
                                if (ebp_2 s< (ebx_4[1] - *ebx_4) s>> 3)
                                    int32_t edx_31 = *(eax_36 + *(var_168 + 0x18) + 0x30)
                                    float var_180_1 =
                                        fconvert.s(fconvert.t(*(edx_31 + (ebp_2 << 3))))
                                    int32_t edx_33 = *(&var_1c + edi_6)
                                    float var_194_2 =
                                        fconvert.s(fconvert.t(*(edx_31 + (ebp_2 << 3) + 4)))
                                    
                                    if (edx_33 s< 0 || edx_33 s>= (ebx_4[1] - *ebx_4) s>> 3)
                                        int32_t var_4_4 = 0xffffffff
                                        sub_6b54b3(&var_120, 0x3c, 3, sub_503520)
                                        int32_t eax_65
                                        eax_65.b = 0
                                        goto label_4fae6b
                                    
                                    int32_t ebp_7 = *(eax_36 + *(var_168 + 0x18) + 0x30)
                                    float var_170_1 =
                                        fconvert.s(fconvert.t(*(ebp_7 + (edx_33 << 3))))
                                    int32_t edx_35 = *(&var_28 + edi_6)
                                    var_198 = fconvert.s(fconvert.t(*(ebp_7 + (edx_33 << 3) + 4)))
                                    
                                    if (edx_35 s< 0 || edx_35 s>= (ebx_4[1] - *ebx_4) s>> 3)
                                        int32_t var_4_5 = 0xffffffff
                                        sub_6b54b3(&var_120, 0x3c, 3, sub_503520)
                                        int32_t eax_66
                                        eax_66.b = 0
                                        goto label_4fae6b
                                    
                                    int32_t eax_37 = *(eax_36 + *(var_168 + 0x18) + 0x30)
                                    float var_17c_2 =
                                        fconvert.s(fconvert.t(*(eax_37 + (edx_35 << 3))))
                                    edi_6 += 4
                                    ecx_21 += 0x3c
                                    float var_178_2 =
                                        fconvert.s(fconvert.t(*(eax_37 + (edx_35 << 3) + 4)))
                                    float var_194_3 = fconvert.s(fconvert.t(var_194_2) + x87_r7_2)
                                    var_198 = fconvert.s(fconvert.t(var_198) + x87_r7_2)
                                    float var_178_3 = fconvert.s(fconvert.t(var_178_2) + x87_r7_2)
                                    *(ecx_21 - 0x44) = fconvert.s(fconvert.t(var_180_1))
                                    *(ecx_21 - 0x40) = fconvert.s(fconvert.t(var_194_3))
                                    long double x87_r5_16 = fconvert.t(var_198)
                                    *(ecx_21 - 0x3c) = fconvert.s(fconvert.t(var_170_1))
                                    *(ecx_21 - 0x38) = fconvert.s(x87_r5_16)
                                    *(ecx_21 - 0x34) = var_17c_2
                                    *(ecx_21 - 0x30) = var_178_3
                                    
                                    if (edi_6 s< 0xc)
                                        continue
                                    
                                    int32_t var_c8_1 = var_138
                                    int32_t var_104_1 = var_13c
                                    uint32_t ecx_23 = zx.d(var_190)
                                    int32_t var_8c_1 = var_134
                                    uint32_t var_ac_1 = zx.d(var_18f)
                                    uint32_t var_e8_1 = ecx_23
                                    uint32_t var_70_1 = zx.d(var_18e)
                                    void* eax_44 = sub_4fc960(ecx_23, &var_18c, arg3)
                                    int32_t ebx_5 = *(eax_44 + 4)
                                    int32_t eax_45
                                    
                                    if (&var_120 u< ebx_5)
                                        eax_45 = *eax_44
                                    
                                    int32_t eax_47
                                    
                                    if (&var_120 u>= ebx_5 || eax_45 u> &var_120)
                                        if (ebx_5 == *(eax_44 + 8))
                                            sub_4fca80(eax_44)
                                        
                                        eax_47 = *(eax_44 + 4)
                                        
                                        if (eax_47 != 0)
                                            int32_t (__fastcall* var_1b0_4)(struct 
                                                sealengine::CPolyVertex::VTable** arg1) = sub_503520
                                            struct sealengine::CPolyVertex::VTable** (__thiscall* 
                                                var_1b4_3)(
                                                struct sealengine::CPolyVertex::VTable** arg1, 
                                                void* arg2) = sub_4fe0b0
                                            int32_t var_1b8_3 = 3
                                            int32_t var_1bc_3 = 0x3c
                                            sub_6b53ec(eax_47, &var_120, 0x3c, 3, sub_4fe0b0)
                                    else
                                        if (ebx_5 == *(eax_44 + 8))
                                            sub_4fca80(eax_44)
                                        
                                        eax_47 = *(eax_44 + 4)
                                        
                                        if (eax_47 != 0)
                                            int32_t (__fastcall* var_1b0_3)(struct 
                                                sealengine::CPolyVertex::VTable** arg1) = sub_503520
                                            struct sealengine::CPolyVertex::VTable** (__thiscall* 
                                                var_1b4_2)(
                                                struct sealengine::CPolyVertex::VTable** arg1, 
                                                void* arg2) = sub_4fe0b0
                                            int32_t var_1b8_2 = 3
                                            int32_t var_1bc_2 = 0x3c
                                            sub_6b53ec(eax_47, 
                                                (&var_120 - eax_45) s/ 0xb4 * 0xb4 + *eax_44, 0x3c, 
                                                3, sub_4fe0b0)
                                    *(eax_44 + 4) += 0xb4
                                    
                                    if (arg7 != 0)
                                        void* ebp_11 = &var_118
                                        float* ebx_6 = &var_50
                                        int32_t i_1 = 3
                                        int32_t i
                                        
                                        do
                                            int32_t esi_13 = *(var_188 + 0x74)
                                            float var_170_2 =
                                                fconvert.s(fneg(fconvert.t(ebx_6[-2])))
                                            int32_t var_158_2 = *(ebp_11 - 4)
                                            float var_180_2 =
                                                fconvert.s(fneg(fconvert.t(ebx_6[-1])))
                                            int32_t var_154_2 = arg5
                                            var_198 = fconvert.s(fneg(fconvert.t(*ebx_6)))
                                            var_164 = fconvert.s(fconvert.t(var_170_2))
                                            float var_160_2 = fconvert.s(fconvert.t(var_180_2))
                                            int32_t var_150_2 = var_18c
                                            float* ecx_29 = *(var_188 + 0x70)
                                            float var_15c_2 = fconvert.s(fconvert.t(var_198))
                                            var_198 = ecx_29
                                            float* eax_50 = sub_4fe750(ecx_29, &var_164, esi_13)
                                            
                                            if (eax_50 == esi_13)
                                                int32_t eax_56
                                                int32_t edx_50
                                                edx_50:eax_56 = muls.dp.d(0x2aaaaaab, 
                                                    *(var_188 + 0x74) - *(var_188 + 0x70))
                                                int32_t edx_51 = edx_50 s>> 2
                                                sub_4fc760(&var_164, var_188 + 0x70)
                                                *ebp_11 = (edx_51 u>> 0x1f) + edx_51
                                            else
                                                *ebp_11 = (eax_50 i- var_198) s/ 0x18
                                            
                                            ebx_6 = &ebx_6[3]
                                            ebp_11 += 0x3c
                                            i = i_1
                                            i_1 -= 1
                                        while (i != 1)
                                        void var_e4
                                        void var_a8
                                        void* eax_58 =
                                            sub_4fc960(sub_4ffdc0(&var_a8, &var_e4), &var_18c, arg3)
                                        int32_t ebx_7 = *(eax_58 + 4)
                                        int32_t eax_59
                                        
                                        if (&var_120 u< ebx_7)
                                            eax_59 = *eax_58
                                        
                                        int32_t eax_61
                                        
                                        if (&var_120 u>= ebx_7 || eax_59 u> &var_120)
                                            if (ebx_7 == *(eax_58 + 8))
                                                sub_4fca80(eax_58)
                                            
                                            eax_61 = *(eax_58 + 4)
                                            
                                            if (eax_61 != 0)
                                                int32_t (__fastcall* var_1b0_6)(struct 
                                                    sealengine::CPolyVertex::VTable** arg1) = sub_503520
                                                struct sealengine::CPolyVertex::VTable** (__thiscall
                                                    * var_1b4_5)(
                                                    struct sealengine::CPolyVertex::VTable** arg1, 
                                                    void* arg2) = sub_4fe0b0
                                                int32_t var_1b8_5 = 3
                                                int32_t var_1bc_5 = 0x3c
                                                sub_6b53ec(eax_61, &var_120, 0x3c, 3, sub_4fe0b0)
                                        else
                                            if (ebx_7 == *(eax_58 + 8))
                                                sub_4fca80(eax_58)
                                            
                                            eax_61 = *(eax_58 + 4)
                                            
                                            if (eax_61 != 0)
                                                int32_t (__fastcall* var_1b0_5)(struct 
                                                    sealengine::CPolyVertex::VTable** arg1) = sub_503520
                                                struct sealengine::CPolyVertex::VTable** (__thiscall
                                                    * var_1b4_4)(
                                                    struct sealengine::CPolyVertex::VTable** arg1, 
                                                    void* arg2) = sub_4fe0b0
                                                int32_t var_1b8_4 = 3
                                                int32_t var_1bc_4 = 0x3c
                                                sub_6b53ec(eax_61, 
                                                    (&var_120 - eax_59) s/ 0xb4 * 0xb4 + *eax_58, 
                                                    0x3c, 3, sub_4fe0b0)
                                        *(eax_58 + 4) += 0xb4
                                    
                                    int32_t var_4_1 = 0xffffffff
                                    sub_6b54b3(&var_120, 0x3c, 3, sub_503520)
                                    eax_14 = var_174 + 1
                                    var_174 = eax_14
                                    
                                    if (eax_14 s>= var_184)
                                        goto label_4fae62
                                    
                                    edi = var_188
                                    esi = arg5
                                    ebx = var_168
                                    break
                        
                        int32_t var_4_3 = 0xffffffff
                        sub_6b54b3(&var_120, 0x3c, 3, sub_503520)
                        int32_t eax_64
                        eax_64.b = 0
                        goto label_4fae6b
                    
                    break
            
            void** eax_63 = arg1
            
            if (eax_63[5] u>= 0x10)
                eax_63 = *eax_63
            
            void** var_1b0_7 = eax_63
            sub_51ddc0(0x754c3c)
            int32_t var_4_2 = 0xffffffff
            sub_6b54b3(&var_120, 0x3c, 3, sub_503520)
            goto label_4fae6b

label_4fae6b:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_198)
