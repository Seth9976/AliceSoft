// 函数: sub_4f38b0
// 地址: 0x4f38b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fd68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_98 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_8
void** ebp = arg_8
void* result

if (sub_410070(ebp, arg3).b == 0)
labelid_1e:
    result.b = 0
else
    result = *ebp
    
    if (result + 4 u> ebp[1])
    labelid_1e:
        result.b = 0
    else
        arg3[7] = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
            | zx.d(*result)
        *ebp += 4
        int32_t* ecx_4 = ebp
        uint32_t var_64
        int32_t edx_8
        result, edx_8 = sub_5546f0(ecx_4, &var_64)
        
        if (result.b == 0)
        labelid_1e:
            result.b = 0
        else
            uint32_t edi_1 = var_64
            int32_t* esi_1 = &arg3[8]
            int32_t* var_70_1 = esi_1
            sub_4f5520(edi_1, edx_8, ecx_4, esi_1)
            void* result_3 = nullptr
            uint32_t i_4
            uint32_t i_3
            uint32_t var_74
            
            if (edi_1 s> 0)
                var_74 = 0
                
                while (true)
                    void* ecx_5 = *ebp
                    uint32_t* esi_3 = *esi_1 + var_74
                    
                    if (ecx_5 + 4 u> ebp[1])
                        goto label_4f4101_2
                    
                    uint32_t ecx_6 = zx.d(*ecx_5)
                    uint32_t eax_10 = ((zx.d(*(ecx_5 + 3)) << 8 | zx.d(*(ecx_5 + 2))) << 8
                        | zx.d(*(ecx_5 + 1))) << 8
                    *ebp = ecx_5 + 4
                    *esi_3 = eax_10 | ecx_6
                    int32_t ecx_7
                    result, ecx_7 = sub_40ff40(ecx_6, ebp, &esi_3[1])
                    
                    if (result.b == 0)
                        goto label_4f4101_2
                    
                    if (sub_40ff40(ecx_7, ebp, &esi_3[2]).b == 0)
                        goto label_4f4101_2
                    
                    float* eax_12 = arg2
                    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*eax_12)))
                    *esi_3 = fconvert.s(fconvert.t(*esi_3) * x87_r6_1)
                    esi_3[1] = fconvert.s(x87_r6_1 * fconvert.t(esi_3[1]))
                    esi_3[2] = fconvert.s(x87_r6_1 * fconvert.t(esi_3[2]))
                    
                    if (eax_12[1] s> 1)
                        if (sub_40fed0(ebp, &arg_8).b == 0)
                            goto label_4f4101_2
                        
                        i_3 = sx.d(arg_8.w)
                    else if (sub_5546f0(ebp, &i_3).b == 0)
                        goto label_4f4101_2
                    
                    uint32_t i_8 = i_3
                    sub_4f5460(i_8, &esi_3[3])
                    int32_t ebx_2 = 0
                    float var_7c_1 = fconvert.s(float.t(0))
                    
                    if (i_8 s> 0)
                        int32_t esi_5 = 0
                        uint32_t i_5
                        
                        do
                            uint32_t* edi_6 = esi_3[3] + esi_5
                            void** ecx_10
                            
                            if (*(arg2 + 4) s> 1)
                                result, ecx_10 = sub_40fed0(ebp, &i_4)
                                
                                if (result.b == 0)
                                    goto label_4f4101_2
                                
                                *edi_6 = sx.d(i_4.w)
                            else
                                ecx_10 = ebp
                                
                                if (sub_5546f0(ecx_10, edi_6).b == 0)
                                    goto label_4f4101_2
                            
                            if (sub_40ff40(ecx_10, ebp, &edi_6[2]).b == 0)
                                goto label_4f4101_2
                            
                            i_5 = i_3
                            ebx_2 += 1
                            esi_5 += 0xc
                            var_7c_1 = fconvert.s(fconvert.t(edi_6[2]) + fconvert.t(var_7c_1))
                        while (ebx_2 s< i_5)
                        
                        if (i_5 s> 0)
                            long double x87_r7_9 = fconvert.t(var_7c_1)
                            long double temp3_1 = fconvert.t(0.94999998807907104)
                            x87_r7_9 - temp3_1
                            result.w = (x87_r7_9 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                            bool p_1 = unimplemented  {test ah, 0x5}
                            bool p_2
                            
                            if (p_1)
                                long double x87_r6_5 = fconvert.t(1.04999995f)
                                x87_r6_5 - x87_r7_9
                                result.w = (x87_r6_5 < x87_r7_9 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
                                    | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe | 0x3800
                                p_2 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_1) || not(p_2))
                                long double x87_r6_6 = float.t(0)
                                int32_t ecx_11 = 0
                                uint32_t i
                                
                                do
                                    x87_r6_6 - x87_r7_9
                                    result.w = (x87_r6_6 < x87_r7_9 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_6, x87_r7_9) ? 1 : 0) << 0xa
                                        | (x87_r6_6 == x87_r7_9 ? 1 : 0) << 0xe | 0x3000
                                    bool p_3 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_3))
                                        int32_t eax_17 = esi_3[3]
                                        *(ecx_11 + eax_17 + 8) = fconvert.s(
                                            fconvert.t(*(ecx_11 + eax_17 + 8)) / x87_r7_9)
                                    
                                    ecx_11 += 0xc
                                    i = i_5
                                    i_5 -= 1
                                while (i != 1)
                    
                    var_74 += 0x1c
                    result = result_3 + 1
                    result_3 = result
                    
                    if (result s>= var_64)
                        break
                    
                    esi_1 = var_70_1
            
            result = *ebp
            
            if (result + 4 u> ebp[1])
            labelid_1e:
                result.b = 0
            else
                uint32_t esi_13 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                    | zx.d(*(result + 1))) << 8 | zx.d(*result)
                uint32_t var_68_1 = esi_13
                *ebp = result + 4
                sub_4b3ba0(esi_13, &arg3[0xc])
                void* eax_21 = nullptr
                arg_8 = nullptr
                
                if (esi_13 s> 0)
                    do
                        void* ecx_13 = *ebp
                        void** edx_17 = arg3[0xc]
                        
                        if (ecx_13 + 4 u> ebp[1])
                            goto label_4f4101_2
                        
                        result = ((zx.d(*(ecx_13 + 3)) << 8 | zx.d(*(ecx_13 + 2))) << 8
                            | zx.d(*(ecx_13 + 1))) << 8 | zx.d(*ecx_13)
                        *ebp = ecx_13 + 4
                        edx_17[eax_21 * 2] = result
                        void* ecx_16 = *ebp
                        void* edx_19 = arg3[0xc] + (eax_21 << 3)
                        
                        if (ecx_16 + 4 u> ebp[1])
                            goto label_4f4101_2
                        
                        var_64 = ((zx.d(*(ecx_16 + 3)) << 8 | zx.d(*(ecx_16 + 2))) << 8
                            | zx.d(*(ecx_16 + 1))) << 8 | zx.d(*ecx_16)
                        void** eax_35 = arg_8
                        long double x87_r7_10 = fconvert.t(var_64)
                        *ebp = ecx_16 + 4
                        esi_13 = var_68_1
                        eax_21 = eax_35 + 1
                        *(edx_19 + 4) = fconvert.s(x87_r7_10)
                        arg_8 = eax_21
                    while (eax_21 s< esi_13)
                
                void* edx_22
                
                if (*(arg2 + 4) s< 1)
                    i_4 = 0
                label_4f3d3f:
                    edx_22.b = i_4 s> 0
                    arg3[0x14].b = edx_22.b
                    
                    if (*(arg2 + 4) s< 3)
                        i_3 = 0
                    label_4f3e69:
                        result = *ebp
                        
                        if (result + 4 u> ebp[1])
                        labelid_1e:
                            result.b = 0
                        else
                            uint32_t edi_16 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                                | zx.d(*(result + 1))) << 8 | zx.d(*result)
                            *ebp = result + 4
                            void* result_4 = nullptr
                            int32_t var_2c_1 = 0
                            int32_t var_28_1 = 0
                            sub_65a090(&result_4, edi_16)
                            int32_t var_4 = 0
                            
                            if (*(arg2 + 4) s<= 1)
                                int32_t esi_28 = 0
                                
                                if (edi_16 s<= 0)
                                    goto label_4f4033
                                
                                long double x87_r7_13 = fconvert.t(255.0)
                                
                                while (true)
                                    void* edx_32 = *ebp
                                    
                                    if (edx_32 + 4 u> ebp[1])
                                        break
                                    
                                    uint32_t eax_79 = (
                                        (zx.d(*(edx_32 + 3)) << 8 | zx.d(*(edx_32 + 2))) << 8
                                        | zx.d(*(edx_32 + 1))) << 8 | zx.d(*edx_32)
                                    *ebp = edx_32 + 4
                                    arg_8 = eax_79
                                    
                                    if (edx_32 + 8 u> ebp[1])
                                        break
                                    
                                    uint32_t ecx_35 = zx.d(*(edx_32 + 4))
                                    uint32_t eax_85 = (
                                        (zx.d(*(edx_32 + 7)) << 8 | zx.d(*(edx_32 + 6))) << 8
                                        | zx.d(*(edx_32 + 5))) << 8
                                    *ebp = edx_32 + 8
                                    
                                    if (edx_32 + 0xc u> ebp[1])
                                        break
                                    
                                    void* ecx_36 = *ebp
                                    long double x87_r6_7 = fconvert.t(arg_8)
                                    uint32_t eax_87 = zx.d(*(ecx_36 + 3))
                                    int16_t x87status_1
                                    int16_t temp0_2
                                    temp0_2, x87status_1 = __fnstcw_memmem16(arg1)
                                    arg_8.w = temp0_2
                                    float var_6c_4 = ((eax_87 << 8 | zx.d(*(ecx_36 + 2))) << 8
                                        | zx.d(*(ecx_36 + 1))) << 8 | zx.d(*ecx_36)
                                    var_64 = zx.d(arg_8.w) | 0xc00
                                    int16_t x87control
                                    int16_t x87status_2
                                    x87control, x87status_2 = __fldcw_memmem16(var_64.w)
                                    *ebp = ecx_36 + 4
                                    esi_28 += 1
                                    var_64.q = int.q(x87_r6_7 * x87_r7_13)
                                    int32_t ecx_40 = (var_64 | 0xffffff00) << 8
                                    int16_t x87control_1
                                    int16_t x87status_3
                                    x87control_1, x87status_3 = __fldcw_memmem16(arg_8.w)
                                    int16_t x87status_4
                                    int16_t temp0_3
                                    temp0_3, x87status_4 = __fnstcw_memmem16(x87control_1)
                                    arg_8.w = temp0_3
                                    var_64 = zx.d(arg_8.w) | 0xc00
                                    int16_t x87control_2
                                    int16_t x87status_5
                                    x87control_2, x87status_5 = __fldcw_memmem16(var_64.w)
                                    var_64.q = int.q(fconvert.t(eax_85 | ecx_35) * x87_r7_13)
                                    void* result_8 = result_4
                                    int32_t ecx_42 = (ecx_40 | var_64) << 8
                                    int16_t x87control_3
                                    int16_t x87status_6
                                    x87control_3, x87status_6 = __fldcw_memmem16(arg_8.w)
                                    int16_t x87status_7
                                    int16_t temp0_4
                                    temp0_4, x87status_7 = __fnstcw_memmem16(x87control_3)
                                    arg_8.w = temp0_4
                                    var_64 = zx.d(arg_8.w) | 0xc00
                                    int16_t x87control_4
                                    int16_t x87status_8
                                    x87control_4, x87status_8 = __fldcw_memmem16(var_64.w)
                                    var_64.q = int.q(fconvert.t(var_6c_4) * x87_r7_13)
                                    *(result_8 + (esi_28 << 2) - 4) = ecx_42 | var_64
                                    int16_t x87status_9
                                    arg1, x87status_9 = __fldcw_memmem16(arg_8.w)
                                    
                                    if (esi_28 s>= edi_16)
                                        goto label_4f4033
                                
                                goto label_4f40f0
                            
                            int32_t edx_42 = 0
                            
                            if (edi_16 s> 0)
                                while (true)
                                    void* ecx_47 = *ebp
                                    
                                    if (ecx_47 + 4 u> ebp[1])
                                        break
                                    
                                    uint32_t eax_115 = (
                                        (zx.d(*(ecx_47 + 3)) << 8 | zx.d(*(ecx_47 + 2))) << 8
                                        | zx.d(*(ecx_47 + 1))) << 8 | zx.d(*ecx_47)
                                    void* result_7 = result_4
                                    *ebp = ecx_47 + 4
                                    *(result_7 + (edx_42 << 2)) = eax_115
                                    edx_42 += 1
                                    
                                    if (edx_42 s>= edi_16)
                                        goto label_4f4033
                                
                                goto label_4f40f0
                            
                        label_4f4033:
                            char* esi_30 = nullptr
                            char* var_40 = nullptr
                            int128_t* var_3c_1 = nullptr
                            int32_t var_38_1 = 0
                            var_4.b = 1
                            
                            if (*(arg2 + 4) s>= 2)
                                void* eax_102 = *ebp
                                
                                if (eax_102 + 4 u> ebp[1])
                                    goto label_4f415c
                                
                                uint32_t ebx_37 = (
                                    (zx.d(*(eax_102 + 3)) << 8 | zx.d(*(eax_102 + 2))) << 8
                                    | zx.d(*(eax_102 + 1))) << 8 | zx.d(*eax_102)
                                var_64 = ebx_37
                                *ebp = eax_102 + 4
                                
                                if (ebx_37 u> 0)
                                    uint32_t eax_104 = 0
                                    
                                    if (ebx_37 u> 0)
                                        eax_104 = ebx_37
                                    
                                    sub_424860(&var_40, eax_104)
                                    esi_30 = var_40
                                    void* eax_106 = esi_30 - var_3c_1
                                    
                                    if (eax_106 != neg.d(ebx_37))
                                        sub_6bc670(var_3c_1, 0, eax_106 + ebx_37)
                                    
                                    void* var_3c_2 = &esi_30[ebx_37]
                                
                                int32_t eax_108 = 0
                                
                                if (ebx_37 s<= 0)
                                    goto label_4f4168
                                
                                while (true)
                                    void* ecx_46 = *ebp
                                    
                                    if (ecx_46 + 1 u> ebp[1])
                                        break
                                    
                                    ecx_46.b = *ecx_46
                                    esi_30[eax_108] = ecx_46.b
                                    *ebp += 1
                                    eax_108 += 1
                                    
                                    if (eax_108 s>= ebx_37)
                                        goto label_4f4168
                                
                                goto label_4f414f
                            
                            var_64 = 0
                        label_4f4168:
                            int32_t ebx_40 = 0
                            int32_t var_20 = 0
                            int128_t* var_1c_1 = nullptr
                            int32_t var_18_1 = 0
                            var_4.b = 2
                            uint32_t var_68_4
                            uint32_t edi_25
                            bool cond:1_1
                            
                            if (*(arg2 + 4) s>= 3)
                                void* eax_117 = *ebp
                                
                                if (eax_117 + 4 u> ebp[1])
                                label_4f414f:
                                    
                                    if (esi_30 == 0)
                                        goto label_4f415c
                                    
                                    char* var_9c_12 = esi_30
                                    sub_6b4d5b()
                                label_4f415c:
                                    result = result_4
                                    cond:1_1 = result == 0
                                    goto label_4f40f6
                                
                                edi_25 = ((zx.d(*(eax_117 + 3)) << 8 | zx.d(*(eax_117 + 2))) << 8
                                    | zx.d(*(eax_117 + 1))) << 8 | zx.d(*eax_117)
                                var_68_4 = edi_25
                                *ebp = eax_117 + 4
                                
                                if (edi_25 != 0)
                                    uint32_t eax_119 = 0
                                    
                                    if (edi_25 != 0)
                                        eax_119 = edi_25
                                    
                                    sub_424860(&var_20, eax_119)
                                    ebx_40 = var_20
                                    void* eax_121 = edi_25 - var_1c_1
                                    
                                    if (eax_121 != neg.d(ebx_40))
                                        sub_6bc670(var_1c_1, 0, eax_121 + ebx_40)
                                    
                                    var_1c_1 = edi_25 + ebx_40
                                
                                char* eax_123 = nullptr
                                
                                if (edi_25 s> 0)
                                    do
                                        void* ecx_51 = *ebp
                                        
                                        if (ecx_51 + 1 u> ebp[1])
                                            if (ebx_40 != 0)
                                                int32_t var_9c_15 = ebx_40
                                                sub_6b4d5b()
                                            
                                            char* eax_124 = var_40
                                            
                                            if (eax_124 != 0)
                                                char* var_9c_16 = eax_124
                                                sub_6b4d5b()
                                            
                                            goto label_4f40f0
                                        
                                        ecx_51.b = *ecx_51
                                        eax_123[ebx_40] = ecx_51.b
                                        *ebp += 1
                                        eax_123 = &eax_123[1]
                                    while (eax_123 s< edi_25)
                                
                                goto label_4f4253
                            
                            edi_25 = 0
                            var_68_4 = 0
                        label_4f4253:
                            char eax_125
                            
                            if (i_3 s<= 0 || edi_25 s<= 0)
                                eax_125 = 0
                            else
                                eax_125 = 1
                            
                            *(arg3 + 0x51) = eax_125
                            void* eax_126 = *ebp
                            
                            if (eax_126 + 4 u> ebp[1])
                                if (ebx_40 != 0)
                                    int32_t var_9c_18 = ebx_40
                                    sub_6b4d5b()
                                
                                char* eax_146 = var_40
                                
                                if (eax_146 != 0)
                                    char* var_9c_19 = eax_146
                                    sub_6b4d5b()
                                
                                goto label_4f40f0
                            
                            uint32_t esi_41 = (
                                (zx.d(*(eax_126 + 3)) << 8 | zx.d(*(eax_126 + 2))) << 8
                                | zx.d(*(eax_126 + 1))) << 8 | zx.d(*eax_126)
                            void** edi_28 = &arg3[0x10]
                            *ebp = eax_126 + 4
                            arg_8 = edi_28
                            sub_4f55f0(esi_41, arg3, eax_126 + 4, edi_28)
                            int32_t var_6c_5 = 0
                            
                            if (esi_41 s<= 0)
                            label_4f499d:
                                int32_t* i_1 = *arg_8
                                int32_t* eax_181 = arg3
                                
                                for (; i_1 != eax_181[0x11]; i_1 = &i_1[0x1b])
                                    int32_t eax_182 = *var_70_1
                                    void* esi_49 = eax_182 + i_1[1] * 0x1c
                                    void* edi_36 = eax_182 + i_1[2] * 0x1c
                                    long double x87_r7_15 = fconvert.t(fconvert.s(fconvert.t(
                                        *(eax_182 + *i_1 * 0x1c + 4))))
                                    i_1[0x1a] = fconvert.s(x87_r7_15)
                                    long double x87_r6_13 = fconvert.t(*(esi_49 + 4))
                                    x87_r6_13 - x87_r7_15
                                    eax_182.w = (x87_r6_13 < x87_r7_15 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_13, x87_r7_15) ? 1 : 0) << 0xa
                                        | (x87_r6_13 == x87_r7_15 ? 1 : 0) << 0xe
                                    bool p_4 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_4))
                                        i_1[0x1a] = fconvert.s(fconvert.t(*(esi_49 + 4)))
                                    
                                    long double x87_r7_17 = fconvert.t(i_1[0x1a])
                                    long double x87_r6_14 = fconvert.t(*(edi_36 + 4))
                                    x87_r6_14 - x87_r7_17
                                    eax_182.w = (x87_r6_14 < x87_r7_17 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_14, x87_r7_17) ? 1 : 0) << 0xa
                                        | (x87_r6_14 == x87_r7_17 ? 1 : 0) << 0xe
                                    bool p_5 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_5))
                                        i_1[0x1a] = fconvert.s(fconvert.t(*(edi_36 + 4)))
                                    
                                    eax_181 = arg3
                                
                                int32_t esi_50 = eax_181[0x11]
                                void* edi_37 = *arg_8
                                sub_4f6510(edi_37, esi_50, (esi_50 - edi_37) s/ 0x6c)
                                sub_4f5270(var_70_1)
                                int32_t eax_187 = var_20
                                
                                if (eax_187 != 0)
                                    int32_t var_9c_57 = eax_187
                                    sub_6b4d5b()
                                
                                char* eax_188 = var_40
                                
                                if (eax_188 != 0)
                                    char* var_9c_58 = eax_188
                                    sub_6b4d5b()
                                
                                result = result_4
                                
                                if (result != 0)
                                    void* result_2 = result
                                    sub_6b4d5b()
                                
                                result.b = 1
                            else
                                arg2 = nullptr
                            label_4f42d0:
                                void* eax_129 = *ebp
                                void* esi_43 = *edi_28 + arg2
                                bool cond:2_1
                                
                                if (eax_129 + 4 u> ebp[1])
                                label_4f476e:
                                    cond:2_1 = ebx_40 == 0
                                label_4f4770:
                                    
                                    if (not(cond:2_1))
                                        int32_t var_9c_31 = ebx_40
                                        sub_6b4d5b()
                                    
                                    if (var_40 == 0)
                                        goto label_4f40f0
                                    
                                    char* var_9c_32 = var_40
                                    sub_6b4d5b()
                                label_4f40f0:
                                    result = result_4
                                    cond:1_1 = result == 0
                                label_4f40f6:
                                    
                                    if (cond:1_1)
                                    labelid_1e:
                                        result.b = 0
                                    else
                                        void* result_1 = result
                                        sub_6b4d5b()
                                    label_4f4101:
                                        result.b = 0
                                else
                                    *esi_43 = (
                                        (zx.d(*(eax_129 + 3)) << 8 | zx.d(*(eax_129 + 2))) << 8
                                        | zx.d(*(eax_129 + 1))) << 8 | zx.d(*eax_129)
                                    *ebp += 4
                                    void* eax_131 = *ebp
                                    
                                    if (eax_131 + 4 u> ebp[1])
                                        if (ebx_40 != 0)
                                            int32_t var_9c_33 = ebx_40
                                            sub_6b4d5b()
                                        
                                        if (var_40 != 0)
                                            char* var_9c_34 = var_40
                                            sub_6b4d5b()
                                        
                                        goto label_4f40f0
                                    
                                    *(esi_43 + 4) = (
                                        (zx.d(*(eax_131 + 3)) << 8 | zx.d(*(eax_131 + 2))) << 8
                                        | zx.d(*(eax_131 + 1))) << 8 | zx.d(*eax_131)
                                    *ebp += 4
                                    void* eax_133 = *ebp
                                    
                                    if (eax_133 + 4 u> ebp[1])
                                        if (ebx_40 != 0)
                                            int32_t var_9c_35 = ebx_40
                                            sub_6b4d5b()
                                        
                                        if (var_40 != 0)
                                            char* var_9c_36 = var_40
                                            sub_6b4d5b()
                                        
                                        goto label_4f40f0
                                    
                                    *(esi_43 + 8) = (
                                        (zx.d(*(eax_133 + 3)) << 8 | zx.d(*(eax_133 + 2))) << 8
                                        | zx.d(*(eax_133 + 1))) << 8 | zx.d(*eax_133)
                                    *ebp += 4
                                    void* eax_135 = *ebp
                                    
                                    if (eax_135 + 4 u> ebp[1])
                                        goto label_4f476e
                                    
                                    *(esi_43 + 0xc) = (
                                        (zx.d(*(eax_135 + 3)) << 8 | zx.d(*(eax_135 + 2))) << 8
                                        | zx.d(*(eax_135 + 1))) << 8 | zx.d(*eax_135)
                                    *ebp += 4
                                    void* eax_137 = *ebp
                                    bool cond:3_1
                                    
                                    if (eax_137 + 4 u> ebp[1])
                                        cond:3_1 = ebx_40 == 0
                                    label_4f47ee:
                                        
                                        if (not(cond:3_1))
                                            int32_t var_9c_37 = ebx_40
                                            sub_6b4d5b()
                                        
                                        if (var_40 == 0)
                                            goto label_4f40f0
                                        
                                        char* var_9c_38 = var_40
                                        sub_6b4d5b()
                                        goto label_4f40f0
                                    
                                    *(esi_43 + 0x10) = (
                                        (zx.d(*(eax_137 + 3)) << 8 | zx.d(*(eax_137 + 2))) << 8
                                        | zx.d(*(eax_137 + 1))) << 8 | zx.d(*eax_137)
                                    *ebp += 4
                                    void* eax_139 = *ebp
                                    
                                    if (eax_139 + 4 u> ebp[1])
                                        if (ebx_40 != 0)
                                            int32_t var_9c_39 = ebx_40
                                            sub_6b4d5b()
                                        
                                        if (var_40 != 0)
                                            char* var_9c_40 = var_40
                                            sub_6b4d5b()
                                        
                                        goto label_4f40f0
                                    
                                    *(esi_43 + 0x14) = (
                                        (zx.d(*(eax_139 + 3)) << 8 | zx.d(*(eax_139 + 2))) << 8
                                        | zx.d(*(eax_139 + 1))) << 8 | zx.d(*eax_139)
                                    *ebp += 4
                                    void* eax_141 = *ebp
                                    
                                    if (i_4 s<= 0)
                                        *(esi_43 + 0x18) = 0
                                        *(esi_43 + 0x1c) = 0
                                        *(esi_43 + 0x20) = 0
                                    label_4f44e7:
                                        
                                        if (i_3 s> 0)
                                            void* eax_147 = *ebp
                                            
                                            if (eax_147 + 4 u> ebp[1])
                                                if (ebx_40 != 0)
                                                    int32_t var_9c_41 = ebx_40
                                                    sub_6b4d5b()
                                                
                                                char* eax_171 = var_40
                                                
                                                if (eax_171 == 0)
                                                    goto label_4f415c
                                                
                                                char* var_9c_42 = eax_171
                                                sub_6b4d5b()
                                                result = result_4
                                                cond:1_1 = result == 0
                                                goto label_4f40f6
                                            
                                            *(esi_43 + 0x24) = ((zx.d(*(eax_147 + 3)) << 8
                                                | zx.d(*(eax_147 + 2))) << 8 | zx.d(*(eax_147 + 1)))
                                                << 8 | zx.d(*eax_147)
                                            *ebp += 4
                                            
                                            if (sub_5546f0(ebp, esi_43 + 0x28) == 0)
                                                if (ebx_40 != 0)
                                                    int32_t var_9c_43 = ebx_40
                                                    sub_6b4d5b()
                                                
                                                char* eax_172 = var_40
                                                
                                                if (eax_172 == 0)
                                                    goto label_4f415c
                                                
                                                char* var_9c_44 = eax_172
                                                sub_6b4d5b()
                                                result = result_4
                                                cond:1_1 = result == 0
                                                goto label_4f40f6
                                            
                                            if (sub_5546f0(ebp, esi_43 + 0x2c) == 0)
                                                goto label_4f4497
                                            
                                            goto label_4f4550
                                        
                                        *(esi_43 + 0x24) = 0
                                        *(esi_43 + 0x28) = 0
                                        *(esi_43 + 0x2c) = 0
                                    label_4f4550:
                                        void* eax_151 = *ebp
                                        
                                        if (eax_151 + 4 u> ebp[1])
                                            if (ebx_40 != 0)
                                                int32_t var_9c_45 = ebx_40
                                                sub_6b4d5b()
                                            
                                            char* eax_173 = var_40
                                            
                                            if (eax_173 == 0)
                                                goto label_4f415c
                                            
                                            char* var_9c_46 = eax_173
                                            sub_6b4d5b()
                                            result = result_4
                                            cond:1_1 = result == 0
                                            goto label_4f40f6
                                        
                                        uint32_t eax_152 = zx.d(*eax_151)
                                        uint32_t edx_107 =
                                            (zx.d(*(eax_151 + 3)) << 8 | zx.d(*(eax_151 + 2))) << 8
                                            | zx.d(*(eax_151 + 1))
                                        *ebp = eax_151 + 4
                                        uint32_t var_54
                                        
                                        if (sub_5546f0(ebp, &var_54) == 0)
                                            if (ebx_40 != 0)
                                                int32_t var_9c_47 = ebx_40
                                                sub_6b4d5b()
                                            
                                            char* eax_174 = var_40
                                            
                                            if (eax_174 != 0)
                                                char* var_9c_48 = eax_174
                                                sub_6b4d5b()
                                            
                                            goto label_4f40f0
                                        
                                        uint32_t var_50
                                        
                                        if (sub_5546f0(ebp, &var_50) == 0)
                                            goto label_4f4497
                                        
                                        void* result_6 = result_4
                                        
                                        if (result_6 == var_2c_1)
                                            *(esi_43 + 0x30) = 0xffffffff
                                            *(esi_43 + 0x34) = 0xffffffff
                                            *(esi_43 + 0x38) = 0xffffffff
                                        else
                                            uint32_t ecx_92 = var_54
                                            *(esi_43 + 0x30) =
                                                *(result_6 + ((edx_107 << 8 | eax_152) << 2))
                                            uint32_t ecx_93 = var_50
                                            *(esi_43 + 0x34) = *(result_6 + (ecx_92 << 2))
                                            *(esi_43 + 0x38) = *(result_6 + (ecx_93 << 2))
                                        
                                        if (var_64 s> 0)
                                            uint32_t var_4c
                                            
                                            if (sub_5546f0(ebp, &var_4c) == 0)
                                                goto label_4f4497
                                            
                                            int32_t* ecx_95 = ebp
                                            uint32_t var_48
                                            
                                            if (sub_5546f0(ecx_95, &var_48) == 0)
                                                goto label_4f4497
                                            
                                            uint32_t var_44
                                            
                                            if (sub_5546f0(ecx_95, &var_44) == 0)
                                                goto label_4f4497
                                            
                                            char* eax_158 = var_40
                                            *(esi_43 + 0x30) = zx.d(eax_158[var_4c]) << 0x18
                                                | (*(esi_43 + 0x30) & 0xffffff)
                                            *(esi_43 + 0x34) = zx.d(eax_158[var_48]) << 0x18
                                                | (*(esi_43 + 0x34) & 0xffffff)
                                            *(esi_43 + 0x38) = zx.d(eax_158[var_44]) << 0x18
                                                | (*(esi_43 + 0x38) & 0xffffff)
                                        
                                        if (var_68_4 s<= 0)
                                            *(esi_43 + 0x3c) = 0
                                            *(esi_43 + 0x3e) = 0
                                        else
                                            for (int32_t i_2 = 0; i_2 s< 3; i_2 += 1)
                                                if (sub_5546f0(ebp, &var_74) == 0)
                                                    goto label_4f4497
                                                
                                                uint32_t eax_162 = var_74
                                                
                                                if (eax_162 s< 0)
                                                    goto label_4f4497
                                                
                                                if (eax_162 s>= var_1c_1 - ebx_40)
                                                    goto label_4f4497
                                                
                                                eax_162.b = *(eax_162 + ebx_40)
                                                *(i_2 + esi_43 + 0x3c) = eax_162.b
                                        
                                        int32_t ebx_41 = 0
                                        void* edi_33 = esi_43 + 0x44
                                        
                                        while (true)
                                            char eax_163
                                            int32_t ecx_105
                                            eax_163, ecx_105 =
                                                sub_40ff40(edi_33 - 4, ebp, edi_33 - 4)
                                            
                                            if (eax_163 == 0)
                                                int32_t eax_175 = var_20
                                                
                                                if (eax_175 != 0)
                                                    int32_t var_9c_49 = eax_175
                                                    sub_6b4d5b()
                                                
                                                char* eax_176 = var_40
                                                
                                                if (eax_176 != 0)
                                                    char* var_9c_50 = eax_176
                                                    sub_6b4d5b()
                                                
                                                break
                                            
                                            char eax_164
                                            int32_t ecx_106
                                            eax_164, ecx_106 = sub_40ff40(ecx_105, ebp, edi_33)
                                            
                                            if (eax_164 == 0)
                                                int32_t eax_177 = var_20
                                                
                                                if (eax_177 != 0)
                                                    int32_t var_9c_51 = eax_177
                                                    sub_6b4d5b()
                                                
                                                char* eax_178 = var_40
                                                
                                                if (eax_178 != 0)
                                                    char* var_9c_52 = eax_178
                                                    sub_6b4d5b()
                                                
                                                break
                                            
                                            if (sub_40ff40(ecx_106, ebp, edi_33 + 4) == 0)
                                                goto label_4f4497
                                            
                                            ebx_41 += 1
                                            edi_33 += 0xc
                                            
                                            if (ebx_41 s>= 3)
                                                result = *ebp
                                                
                                                if (result + 4 u<= ebp[1])
                                                    arg2 += 0x6c
                                                    int32_t eax_168 = var_6c_5 + 1
                                                    *(esi_43 + 0x64) = ((zx.d(*(result + 3)) << 8
                                                        | zx.d(*(result + 2))) << 8
                                                        | zx.d(*(result + 1))) << 8 | zx.d(*result)
                                                    *ebp += 4
                                                    var_6c_5 = eax_168
                                                    
                                                    if (eax_168 s>= esi_41)
                                                        goto label_4f499d
                                                    
                                                    ebx_40 = var_20
                                                    edi_28 = arg_8
                                                    goto label_4f42d0
                                                
                                                if (var_20 != 0)
                                                    int32_t var_9c_53 = var_20
                                                    sub_6b4d5b()
                                                
                                                if (var_40 != 0)
                                                    char* var_9c_54 = var_40
                                                    sub_6b4d5b()
                                                
                                                if (result_4 == 0)
                                                    goto label_4f4101_2
                                                
                                                void* result_5 = result_4
                                                sub_6b4d5b()
                                                result.b = 0
                                                goto label_4f4a97
                                        
                                        goto label_4f40f0
                                    
                                    if (eax_141 + 4 u> ebp[1])
                                        cond:2_1 = ebx_40 == 0
                                        goto label_4f4770
                                    
                                    *(esi_43 + 0x18) = (
                                        (zx.d(*(eax_141 + 3)) << 8 | zx.d(*(eax_141 + 2))) << 8
                                        | zx.d(*(eax_141 + 1))) << 8 | zx.d(*eax_141)
                                    *ebp += 4
                                    void* eax_143 = *ebp
                                    
                                    if (eax_143 + 4 u> ebp[1])
                                        cond:3_1 = ebx_40 == 0
                                        goto label_4f47ee
                                    
                                    *(esi_43 + 0x1c) = (
                                        (zx.d(*(eax_143 + 3)) << 8 | zx.d(*(eax_143 + 2))) << 8
                                        | zx.d(*(eax_143 + 1))) << 8 | zx.d(*eax_143)
                                    *ebp += 4
                                    
                                    if (sub_5546f0(ebp, esi_43 + 0x20) != 0)
                                        goto label_4f44e7
                                    
                                label_4f4497:
                                    sub_65ab60(&var_20)
                                    sub_65ab60(&var_40)
                                    sub_65ab60(&result_4)
                                    result.b = 0
                    else
                        result = *ebp
                        
                        if (result + 4 u<= ebp[1])
                            uint32_t i_7 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                                | zx.d(*(result + 1))) << 8 | zx.d(*result)
                            *ebp = result + 4
                            uint32_t eax_56 = i_7 + i_4 + esi_13
                            i_3 = i_7
                            sub_4b3ba0(eax_56, &arg3[0xc])
                            uint32_t esi_21 = esi_13 + i_4
                            arg_8 = nullptr
                            
                            if (i_7 s> 0)
                                uint32_t esi_24 = esi_21 * 8
                                var_64 = esi_24
                                void** eax_70
                                
                                do
                                    void* ecx_27 = *ebp
                                    int32_t edx_27 = arg3[0xc]
                                    
                                    if (ecx_27 + 4 u> ebp[1])
                                        goto label_4f4101_2
                                    
                                    result = ((zx.d(*(ecx_27 + 3)) << 8 | zx.d(*(ecx_27 + 2))) << 8
                                        | zx.d(*(ecx_27 + 1))) << 8 | zx.d(*ecx_27)
                                    *ebp = ecx_27 + 4
                                    *(edx_27 + esi_24) = result
                                    void* ecx_30 = *ebp
                                    void* edx_29 = arg3[0xc] + esi_24
                                    
                                    if (ecx_30 + 4 u> ebp[1])
                                        goto label_4f4101_2
                                    
                                    uint32_t eax_69 = (
                                        (zx.d(*(ecx_30 + 3)) << 8 | zx.d(*(ecx_30 + 2))) << 8
                                        | zx.d(*(ecx_30 + 1))) << 8 | zx.d(*ecx_30)
                                    eax_70 = arg_8
                                    *ebp = ecx_30 + 4
                                    uint32_t esi_26 = var_64
                                    *(edx_29 + 4) = fconvert.s(fconvert.t(eax_69))
                                    esi_24 = esi_26 + 8
                                    arg_8 = eax_70 + 1
                                    var_64 = esi_24
                                while (eax_70 + 1 s< i_3)
                            
                            goto label_4f3e69
                        
                    label_4f4101_1:
                        result.b = 0
                else
                    result = *ebp
                    
                    if (result + 4 u<= ebp[1])
                        uint32_t i_6 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                            | zx.d(*(result + 1))) << 8 | zx.d(*result)
                        i_4 = i_6
                        *ebp = result + 4
                        sub_4b3ba0(i_6 + esi_13, &arg3[0xc])
                        arg_8 = nullptr
                        
                        if (i_6 s> 0)
                            uint32_t esi_18 = esi_13 * 8
                            var_64 = esi_18
                            void** eax_51
                            
                            do
                                void* ecx_19 = *ebp
                                int32_t edx_23 = arg3[0xc]
                                
                                if (ecx_19 + 4 u> ebp[1])
                                    goto label_4f4101_2
                                
                                result = ((zx.d(*(ecx_19 + 3)) << 8 | zx.d(*(ecx_19 + 2))) << 8
                                    | zx.d(*(ecx_19 + 1))) << 8 | zx.d(*ecx_19)
                                *ebp = ecx_19 + 4
                                *(edx_23 + esi_18) = result
                                void* ecx_22 = *ebp
                                edx_22 = arg3[0xc] + esi_18
                                
                                if (ecx_22 + 4 u> ebp[1])
                                    goto label_4f4101_2
                                
                                uint32_t eax_50 = (
                                    (zx.d(*(ecx_22 + 3)) << 8 | zx.d(*(ecx_22 + 2))) << 8
                                    | zx.d(*(ecx_22 + 1))) << 8 | zx.d(*ecx_22)
                                eax_51 = arg_8
                                *ebp = ecx_22 + 4
                                uint32_t esi_20 = var_64
                                *(edx_22 + 4) = fconvert.s(fconvert.t(eax_50))
                                esi_18 = esi_20 + 8
                                arg_8 = eax_51 + 1
                                var_64 = esi_18
                            while (eax_51 + 1 s< i_4)
                            esi_13 = var_68_1
                        
                        goto label_4f3d3f
                    
                label_4f4101_2:
                    result.b = 0

label_4f4a97:
fsbase->NtTib.ExceptionList = ExceptionList
return result
