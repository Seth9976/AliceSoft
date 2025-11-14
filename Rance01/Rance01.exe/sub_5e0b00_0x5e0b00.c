// 函数: sub_5e0b00
// 地址: 0x5e0b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x5397829d, *(edi + 0x2c) - *(edi + 0x28))
int32_t edx_1 = edx s>> 6
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
uint8_t var_3e1 = eax_3.b
int32_t* esi = arg2 + 4
void* var_3d0 = edi
sub_54e400(&var_3e1, esi)
var_3e1 = (eax_3 u>> 8).b
sub_54e400(&var_3e1, esi)
var_3e1 = (eax_3 u>> 0x10).b
sub_54e400(&var_3e1, esi)
var_3e1 = (eax_3 u>> 0x18).b
sub_54e400(&var_3e1, esi)
int32_t eax_12
int32_t edx_2
edx_2:eax_12 = muls.dp.d(0x5397829d, *(edi + 0x2c) - *(edi + 0x28))
int32_t edx_3 = edx_2 s>> 6
int32_t eax_15 = (edx_3 u>> 0x1f) + edx_3
int32_t var_3cc = 0

if (eax_15 s> 0)
    int32_t eax_228
    
    do
        void* edi_3 = var_3cc * 0xc4 + *(var_3d0 + 0x28)
        int32_t eax_16 = *(edi_3 + 4)
        var_3e1 = eax_16.b
        int32_t eax_17 = esi[1]
        int32_t edx_5
        
        if (&var_3e1 u< eax_17)
            edx_5 = *esi
        
        char* eax_28
        int32_t ecx_10
        
        if (&var_3e1 u>= eax_17 || edx_5 u> &var_3e1)
            ecx_10 = esi[2]
            
            if (eax_17 == ecx_10)
                int32_t edx_8 = *esi
                int32_t eax_23 = eax_17 - edx_8
                
                if (eax_23 u> 0xfffffffe)
                    goto label_5e156d
                
                ecx_10 -= edx_8
                
                if (eax_23 + 1 u> ecx_10)
                    uint32_t eax_26 = ecx_10 u>> 1
                    uint32_t ecx_11
                    
                    if (0xffffffff - eax_26 u>= ecx_10)
                        ecx_11 = ecx_10 + eax_26
                    else
                        ecx_11 = 0
                    
                    if (ecx_11 u< eax_23 + 1)
                        ecx_11 = eax_23 + 1
                    
                    sub_424860(esi, ecx_11)
            
            eax_28 = esi[1]
            
            if (eax_28 != 0)
                ecx_10.b = eax_16.b
                *eax_28 = ecx_10.b
        else
            int32_t ecx_7 = esi[2]
            
            if (eax_17 == ecx_7)
                int32_t eax_18 = eax_17 - edx_5
                
                if (eax_18 u> 0xfffffffe)
                    goto label_5e156d
                
                int32_t ecx_8 = ecx_7 - edx_5
                
                if (eax_18 + 1 u> ecx_8)
                    uint32_t eax_21 = ecx_8 u>> 1
                    uint32_t ecx_9
                    
                    if (0xffffffff - eax_21 u>= ecx_8)
                        ecx_9 = ecx_8 + eax_21
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_18 + 1)
                        ecx_9 = eax_18 + 1
                    
                    sub_424860(esi, ecx_9)
            
            eax_28 = esi[1]
            
            if (eax_28 != 0)
                ecx_10.b = *(&var_3e1 - edx_5 + *esi)
                *eax_28 = ecx_10.b
        esi[1] += 1
        int32_t eax_29 = esi[1]
        var_3e1 = (eax_16 u>> 8).b
        int32_t edx_12
        
        if (&var_3e1 u< eax_29)
            edx_12 = *esi
        
        char* eax_40
        int32_t ecx_16
        
        if (&var_3e1 u>= eax_29 || edx_12 u> &var_3e1)
            ecx_16 = esi[2]
            
            if (eax_29 == ecx_16)
                int32_t edx_15 = *esi
                int32_t eax_35 = eax_29 - edx_15
                
                if (eax_35 u> 0xfffffffe)
                    goto label_5e156d
                
                ecx_16 -= edx_15
                
                if (eax_35 + 1 u> ecx_16)
                    uint32_t eax_38 = ecx_16 u>> 1
                    uint32_t ecx_17
                    
                    if (0xffffffff - eax_38 u>= ecx_16)
                        ecx_17 = ecx_16 + eax_38
                    else
                        ecx_17 = 0
                    
                    if (ecx_17 u< eax_35 + 1)
                        ecx_17 = eax_35 + 1
                    
                    sub_424860(esi, ecx_17)
            
            eax_40 = esi[1]
            
            if (eax_40 != 0)
                ecx_16.b = var_3e1
                *eax_40 = ecx_16.b
        else
            int32_t ecx_13 = esi[2]
            
            if (eax_29 == ecx_13)
                int32_t eax_30 = eax_29 - edx_12
                
                if (eax_30 u> 0xfffffffe)
                    goto label_5e156d
                
                int32_t ecx_14 = ecx_13 - edx_12
                
                if (eax_30 + 1 u> ecx_14)
                    uint32_t eax_33 = ecx_14 u>> 1
                    uint32_t ecx_15
                    
                    if (0xffffffff - eax_33 u>= ecx_14)
                        ecx_15 = ecx_14 + eax_33
                    else
                        ecx_15 = 0
                    
                    if (ecx_15 u< eax_30 + 1)
                        ecx_15 = eax_30 + 1
                    
                    sub_424860(esi, ecx_15)
            
            eax_40 = esi[1]
            
            if (eax_40 != 0)
                ecx_16.b = *(&var_3e1 - edx_12 + *esi)
                *eax_40 = ecx_16.b
        esi[1] += 1
        int32_t eax_41 = esi[1]
        var_3e1 = (eax_16 u>> 0x10).b
        int32_t edx_19
        
        if (&var_3e1 u< eax_41)
            edx_19 = *esi
        
        char* eax_52
        int32_t ecx_22
        
        if (&var_3e1 u>= eax_41 || edx_19 u> &var_3e1)
            ecx_22 = esi[2]
            
            if (eax_41 == ecx_22)
                int32_t edx_22 = *esi
                int32_t eax_47 = eax_41 - edx_22
                
                if (eax_47 u> 0xfffffffe)
                    goto label_5e156d
                
                ecx_22 -= edx_22
                
                if (eax_47 + 1 u> ecx_22)
                    uint32_t eax_50 = ecx_22 u>> 1
                    uint32_t ecx_23
                    
                    if (0xffffffff - eax_50 u>= ecx_22)
                        ecx_23 = ecx_22 + eax_50
                    else
                        ecx_23 = 0
                    
                    if (ecx_23 u< eax_47 + 1)
                        ecx_23 = eax_47 + 1
                    
                    sub_424860(esi, ecx_23)
            
            eax_52 = esi[1]
            
            if (eax_52 != 0)
                ecx_22.b = var_3e1
                *eax_52 = ecx_22.b
        else
            int32_t ecx_19 = esi[2]
            
            if (eax_41 == ecx_19)
                int32_t eax_42 = eax_41 - edx_19
                
                if (eax_42 u> 0xfffffffe)
                    goto label_5e156d
                
                int32_t ecx_20 = ecx_19 - edx_19
                
                if (eax_42 + 1 u> ecx_20)
                    uint32_t eax_45 = ecx_20 u>> 1
                    uint32_t ecx_21
                    
                    if (0xffffffff - eax_45 u>= ecx_20)
                        ecx_21 = ecx_20 + eax_45
                    else
                        ecx_21 = 0
                    
                    if (ecx_21 u< eax_42 + 1)
                        ecx_21 = eax_42 + 1
                    
                    sub_424860(esi, ecx_21)
            
            eax_52 = esi[1]
            
            if (eax_52 != 0)
                ecx_22.b = *(&var_3e1 - edx_19 + *esi)
                *eax_52 = ecx_22.b
        esi[1] += 1
        var_3e1 = (eax_16 u>> 0x18).b
        int32_t eax_55 = esi[1]
        uint8_t* edx_24 = &var_3e1
        
        if (&var_3e1 u< eax_55)
            edx_24 = *esi
        
        char* eax_66
        void* ecx_28
        
        if (&var_3e1 u>= eax_55 || edx_24 u> &var_3e1)
            ecx_28 = esi[2]
            
            if (eax_55 == ecx_28)
                edx_24 = *esi
                void* eax_61 = eax_55 - edx_24
                
                if (eax_61 u> 0xfffffffe)
                    goto label_5e156d
                
                ecx_28 -= edx_24
                
                if (eax_61 + 1 u> ecx_28)
                    uint32_t eax_64 = ecx_28 u>> 1
                    void* ecx_29
                    
                    if (0xffffffff - eax_64 u>= ecx_28)
                        ecx_29 = ecx_28 + eax_64
                    else
                        ecx_29 = nullptr
                    
                    if (ecx_29 u< eax_61 + 1)
                        ecx_29 = eax_61 + 1
                    
                    ecx_28, edx_24 = sub_424860(esi, ecx_29)
            
            eax_66 = esi[1]
            
            if (eax_66 != 0)
                ecx_28.b = var_3e1
                *eax_66 = ecx_28.b
        else
            uint8_t* ecx_24 = &var_3e1 - edx_24
            int32_t ecx_25 = esi[2]
            
            if (eax_55 == ecx_25)
                void* eax_56 = eax_55 - edx_24
                
                if (eax_56 u> 0xfffffffe)
                    goto label_5e156d
                
                void* ecx_26 = ecx_25 - edx_24
                
                if (eax_56 + 1 u> ecx_26)
                    uint32_t eax_59 = ecx_26 u>> 1
                    void* ecx_27
                    
                    if (0xffffffff - eax_59 u>= ecx_26)
                        ecx_27 = ecx_26 + eax_59
                    else
                        ecx_27 = nullptr
                    
                    if (ecx_27 u< eax_56 + 1)
                        ecx_27 = eax_56 + 1
                    
                    edx_24 = sub_424860(esi, ecx_27)
            
            eax_66 = esi[1]
            
            if (eax_66 != 0)
                edx_24 = ecx_24
                ecx_28.b = *(edx_24 + *esi)
                *eax_66 = ecx_28.b
        esi[1] += 1
        int32_t eax_94
        void* eax_129
        int32_t edx_51
        
        switch (*(edi_3 + 4))
            case 0
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
            case 1
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
            case 2
                sub_410280(edi_3 + 0xa4, edx_24, arg2)
            case 3
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
            case 4
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
                sub_4101f0(arg2, *(edi_3 + 0x40))
            case 5
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                eax_94 = *(edi_3 + 0x30)
            label_5e150f:
                sub_4101f0(arg2, eax_94)
                sub_4101f0(arg2, *(edi_3 + 0x40))
            case 6
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
                sub_4101f0(arg2, *(edi_3 + 0x40))
            case 7
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                int32_t var_c8
                sub_5e6a60(&var_c8, 
                    sub_410280(edi_3 + 0x88, sub_4101f0(arg2, *(edi_3 + 0x20)), arg2), edi_3)
                void var_368
                sub_5e6a60(&var_368, sub_4101f0(arg2, var_c8), edi_3)
                int32_t var_364
                void var_68
                sub_5e6a60(&var_68, sub_4101f0(arg2, var_364), edi_3)
                void var_308
                int32_t var_60
                sub_5e6a60(&var_308, sub_4101f0(arg2, var_60), edi_3)
                int32_t var_2fc
                void var_188
                sub_5e6a60(&var_188, sub_4101f0(arg2, var_2fc), edi_3)
                void var_2a8
                int32_t var_178
                int32_t var_3f4_42 = sub_5e6a60(&var_2a8, sub_4101f0(arg2, var_178), edi_3)
                void var_3c8
                float var_290
                sub_5e6a60(&var_3c8, sub_4101f0(arg2, fconvert.s(fconvert.t(var_290))), edi_3)
                int32_t var_3a8
                void var_248
                sub_5e6a60(&var_248, sub_4101f0(arg2, var_3a8), edi_3)
                int32_t var_224
                void var_128
                sub_5e6a60(&var_128, sub_4101f0(arg2, var_224), edi_3)
                int32_t var_100
                edx_51 = sub_4101f0(arg2, var_100)
                void var_1e8
                eax_129 = &var_1e8
            label_5e115e:
                int32_t var_3f4_47 = sub_5e6a60(eax_129, edx_51, edi_3)
                sub_4101f0(arg2, fconvert.s(fconvert.t(*(eax_129 + 0x1c))))
                sub_4101f0(arg2, *(edi_3 + 0x50))
                sub_4101f0(arg2, *(edi_3 + 0x54))
            case 8
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                int32_t var_398
                sub_5e6a60(&var_398, 
                    sub_410280(edi_3 + 0x88, sub_4101f0(arg2, *(edi_3 + 0x20)), arg2), edi_3)
                void var_338
                sub_5e6a60(&var_338, sub_4101f0(arg2, var_398), edi_3)
                int32_t var_334
                void var_2d8
                sub_5e6a60(&var_2d8, sub_4101f0(arg2, var_334), edi_3)
                int32_t var_2d0
                void var_278
                sub_5e6a60(&var_278, sub_4101f0(arg2, var_2d0), edi_3)
                int32_t var_26c
                void var_218
                sub_5e6a60(&var_218, sub_4101f0(arg2, var_26c), edi_3)
                int32_t var_208
                void var_1b8
                int32_t var_3f4_57 = sub_5e6a60(&var_1b8, sub_4101f0(arg2, var_208), edi_3)
                float var_1a0
                void var_158
                sub_5e6a60(&var_158, sub_4101f0(arg2, fconvert.s(fconvert.t(var_1a0))), edi_3)
                int32_t var_138
                void var_f8
                sub_5e6a60(&var_f8, sub_4101f0(arg2, var_138), edi_3)
                int32_t var_d4
                void var_98
                sub_5e6a60(&var_98, sub_4101f0(arg2, var_d4), edi_3)
                int32_t var_70
                edx_51 = sub_4101f0(arg2, var_70)
                void var_38
                eax_129 = &var_38
                goto label_5e115e
            case 9
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
                sub_4101f0(arg2, *(edi_3 + 0x44))
                sub_4101f0(arg2, *(edi_3 + 0x48))
                sub_4101f0(arg2, *(edi_3 + 0x4c))
            case 0xa
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
            case 0xb, 0xc
                sub_410280(edi_3 + 0xa4, edx_24, arg2)
                sub_4101f0(arg2, *(edi_3 + 0xc))
                sub_4101f0(arg2, *(edi_3 + 0x10))
                sub_4101f0(arg2, *(edi_3 + 0x14))
                sub_4101f0(arg2, *(edi_3 + 0x18))
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 8))
            case 0xd
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                var_3e1 = *(edi_3 + 0xc0) != 0
                sub_54e400(&var_3e1, esi)
            case 0xe
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
                var_3e1 = *(edi_3 + 0xc0) != 0
                sub_54e400(&var_3e1, esi)
            case 0xf
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x2c))
                sub_4101f0(arg2, *(edi_3 + 0x30))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                sub_4101f0(arg2, *(edi_3 + 0x3c))
                var_3e1 = *(edi_3 + 0xc0) != 0
                sub_54e400(&var_3e1, esi)
            case 0x10
                sub_4101f0(arg2, *(edi_3 + 0x1c))
                sub_4101f0(arg2, *(edi_3 + 0x20))
                sub_4101f0(arg2, *(edi_3 + 0x24))
                sub_4101f0(arg2, *(edi_3 + 0x28))
                sub_4101f0(arg2, *(edi_3 + 0x34))
                sub_4101f0(arg2, *(edi_3 + 0x38))
                eax_94 = *(edi_3 + 0x3c)
                goto label_5e150f
        
        eax_228 = var_3cc + 1
        var_3cc = eax_228
    while (eax_228 s< eax_15)
    edi = var_3d0

int32_t edx_89 = *(edi + 0x38)
int32_t eax_229 = esi[1]
int32_t var_3e0_2 = edx_89
var_3e1 = edx_89.b
int32_t edi_4

if (&var_3e1 u< eax_229)
    edi_4 = *esi

if (&var_3e1 u< eax_229 && edi_4 u<= &var_3e1)
    int32_t ecx_91 = esi[2]
    
    if (eax_229 != ecx_91)
    label_5e159c:
        char* eax_232 = esi[1]
        
        if (eax_232 != 0)
            void* edx_84
            edx_84.b = *(&var_3e1 - edi_4 + *esi)
            *eax_232 = edx_84.b
        
        edx_89 = var_3e0_2
        goto label_5e15fd
    
    int32_t eax_230 = eax_229 - edi_4
    
    if (eax_230 u<= 0xfffffffe)
        int32_t ecx_92 = ecx_91 - edi_4
        
        if (eax_230 + 1 u> ecx_92)
            uint32_t edx_86 = ecx_92 u>> 1
            uint32_t ecx_93
            
            if (0xffffffff - edx_86 u>= ecx_92)
                ecx_93 = ecx_92 + edx_86
            else
                ecx_93 = 0
            
            if (ecx_93 u< eax_230 + 1)
                ecx_93 = eax_230 + 1
            
            sub_424860(esi, ecx_93)
        
        goto label_5e159c
    
label_5e156d:
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t ecx_95 = esi[2]

if (eax_229 == ecx_95)
    int32_t edi_6 = *esi
    int32_t eax_233 = eax_229 - edi_6
    
    if (eax_233 u> 0xfffffffe)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t ecx_96 = ecx_95 - edi_6
    
    if (eax_233 + 1 u> ecx_96)
        uint32_t edx_88 = ecx_96 u>> 1
        uint32_t ecx_97
        
        if (0xffffffff - edx_88 u>= ecx_96)
            ecx_97 = ecx_96 + edx_88
        else
            ecx_97 = 0
        
        if (ecx_97 u< eax_233 + 1)
            ecx_97 = eax_233 + 1
        
        sub_424860(esi, ecx_97)
        edx_89 = var_3e0_2

char* eax_235 = esi[1]

if (eax_235 != 0)
    *eax_235 = edx_89.b

label_5e15fd:
esi[1] += 1
var_3e1 = (edx_89 u>> 8).b
int32_t eax_238 = esi[1]
int32_t edi_8

if (&var_3e1 u< eax_238)
    edi_8 = *esi

if (&var_3e1 u>= eax_238 || edi_8 u> &var_3e1)
    int32_t ecx_102 = esi[2]
    
    if (eax_238 == ecx_102)
        int32_t edi_10 = *esi
        int32_t eax_242 = eax_238 - edi_10
        
        if (eax_242 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_102 -= edi_10
        
        if (eax_242 + 1 u> ecx_102)
            uint32_t edx_94 = ecx_102 u>> 1
            uint32_t ecx_103
            
            if (0xffffffff - edx_94 u>= ecx_102)
                ecx_103 = ecx_102 + edx_94
            else
                ecx_103 = 0
            
            if (ecx_103 u< eax_242 + 1)
                ecx_103 = eax_242 + 1
            
            sub_424860(esi, ecx_103)
            edx_89 = var_3e0_2
    
    char* eax_244 = esi[1]
    
    if (eax_244 != 0)
        ecx_102.b = var_3e1
        *eax_244 = ecx_102.b
else
    int32_t ecx_98 = esi[2]
    
    if (eax_238 == ecx_98)
        int32_t eax_239 = eax_238 - edi_8
        
        if (eax_239 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_99 = ecx_98 - edi_8
        
        if (eax_239 + 1 u> ecx_99)
            uint32_t edx_92 = ecx_99 u>> 1
            uint32_t ecx_100
            
            if (0xffffffff - edx_92 u>= ecx_99)
                ecx_100 = ecx_99 + edx_92
            else
                ecx_100 = 0
            
            if (ecx_100 u< eax_239 + 1)
                ecx_100 = eax_239 + 1
            
            sub_424860(esi, ecx_100)
    
    char* eax_241 = esi[1]
    
    if (eax_241 != 0)
        void* edx_90
        edx_90.b = *(&var_3e1 - edi_8 + *esi)
        *eax_241 = edx_90.b
    
    edx_89 = var_3e0_2

esi[1] += 1
var_3e1 = (edx_89 u>> 0x10).b
int32_t eax_247 = esi[1]
int32_t edi_12

if (&var_3e1 u< eax_247)
    edi_12 = *esi

if (&var_3e1 u>= eax_247 || edi_12 u> &var_3e1)
    int32_t ecx_108 = esi[2]
    
    if (eax_247 == ecx_108)
        int32_t edi_14 = *esi
        int32_t eax_251 = eax_247 - edi_14
        
        if (eax_251 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_108 -= edi_14
        
        if (eax_251 + 1 u> ecx_108)
            uint32_t edx_99 = ecx_108 u>> 1
            uint32_t ecx_109
            
            if (0xffffffff - edx_99 u>= ecx_108)
                ecx_109 = ecx_108 + edx_99
            else
                ecx_109 = 0
            
            if (ecx_109 u< eax_251 + 1)
                ecx_109 = eax_251 + 1
            
            sub_424860(esi, ecx_109)
            edx_89 = var_3e0_2
    
    char* eax_253 = esi[1]
    
    if (eax_253 != 0)
        ecx_108.b = var_3e1
        *eax_253 = ecx_108.b
else
    int32_t ecx_104 = esi[2]
    
    if (eax_247 == ecx_104)
        int32_t eax_248 = eax_247 - edi_12
        
        if (eax_248 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_105 = ecx_104 - edi_12
        
        if (eax_248 + 1 u> ecx_105)
            uint32_t edx_97 = ecx_105 u>> 1
            uint32_t ecx_106
            
            if (0xffffffff - edx_97 u>= ecx_105)
                ecx_106 = ecx_105 + edx_97
            else
                ecx_106 = 0
            
            if (ecx_106 u< eax_248 + 1)
                ecx_106 = eax_248 + 1
            
            sub_424860(esi, ecx_106)
    
    char* eax_250 = esi[1]
    
    if (eax_250 != 0)
        void* edx_95
        edx_95.b = *(&var_3e1 - edi_12 + *esi)
        *eax_250 = edx_95.b
    
    edx_89 = var_3e0_2

esi[1] += 1
int32_t eax_254 = esi[1]
var_3e1 = (edx_89 u>> 0x18).b
uint8_t* edx_101

if (&var_3e1 u< eax_254)
    edx_101 = *esi

if (&var_3e1 u>= eax_254 || edx_101 u> &var_3e1)
    int32_t ecx_112 = esi[2]
    
    if (eax_254 == ecx_112)
        edx_101 = *esi
        void* eax_258 = eax_254 - edx_101
        
        if (eax_258 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_113 = ecx_112 - edx_101
        
        if (eax_258 + 1 u> ecx_113)
            uint32_t edx_106 = ecx_113 u>> 1
            void* ecx_114
            
            if (0xffffffff - edx_106 u>= ecx_113)
                ecx_114 = ecx_113 + edx_106
            else
                ecx_114 = nullptr
            
            if (ecx_114 u< eax_258 + 1)
                ecx_114 = eax_258 + 1
            
            sub_424860(esi, ecx_114)
    
    char* eax_260 = esi[1]
    
    if (eax_260 != 0)
        edx_101.b = var_3e1
        *eax_260 = edx_101.b
else
    void* ecx_110 = esi[2]
    
    if (eax_254 == ecx_110)
        void* eax_255 = eax_254 - edx_101
        
        if (eax_255 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        ecx_110 -= edx_101
        
        if (eax_255 + 1 u> ecx_110)
            uint32_t edx_103 = ecx_110 u>> 1
            void* ecx_111
            
            if (0xffffffff - edx_103 u>= ecx_110)
                ecx_111 = ecx_110 + edx_103
            else
                ecx_111 = nullptr
            
            if (ecx_111 u< eax_255 + 1)
                ecx_111 = eax_255 + 1
            
            sub_424860(esi, ecx_111)
    
    char* eax_257 = esi[1]
    
    if (eax_257 != 0)
        ecx_110.b = (&var_3e1 - edx_101)[*esi]
        *eax_257 = ecx_110.b

esi[1] += 1
int32_t ecx_115 = *(var_3d0 + 0x3c)
int32_t eax_262 = esi[1]
uint8_t* edx_107 = &var_3e1
int32_t var_3e0_3 = ecx_115
var_3e1 = ecx_115.b

if (&var_3e1 u< eax_262)
    edx_107 = *esi

if (&var_3e1 u>= eax_262 || edx_107 u> &var_3e1)
    if (eax_262 == esi[2])
        sub_4247b0(esi, edx_107, 1)
        ecx_115 = var_3e0_3
    
    char* eax_267 = esi[1]
    
    if (eax_267 != 0)
        *eax_267 = ecx_115.b
else
    int32_t ecx_116 = esi[2]
    
    if (eax_262 == ecx_116)
        void* eax_263 = eax_262 - edx_107
        
        if (eax_263 u> 0xfffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        void* ecx_117 = ecx_116 - edx_107
        
        if (eax_263 + 1 u> ecx_117)
            uint32_t edx_109 = ecx_117 u>> 1
            void* ecx_118
            
            if (0xffffffff - edx_109 u>= ecx_117)
                ecx_118 = ecx_117 + edx_109
            else
                ecx_118 = nullptr
            
            if (ecx_118 u< eax_263 + 1)
                ecx_118 = eax_263 + 1
            
            sub_424860(esi, ecx_118)
    
    char* eax_265 = esi[1]
    
    if (eax_265 != 0)
        edx_107.b = (&var_3e1 - edx_107)[*esi]
        *eax_265 = edx_107.b

esi[1] += 1
var_3e1 = (var_3e0_3 u>> 8).b
sub_54e400(&var_3e1, esi)
var_3e1 = (var_3e0_3 u>> 0x10).b
sub_54e400(&var_3e1, esi)
var_3e1 = (var_3e0_3 u>> 0x18).b
sub_54e400(&var_3e1, esi)
sub_4101f0(arg2, *(var_3d0 + 0x40))
sub_4101f0(arg2, *(var_3d0 + 0x44))
char* result
result.b = 1
return result
