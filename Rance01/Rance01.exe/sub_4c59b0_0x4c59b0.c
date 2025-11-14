// 函数: sub_4c59b0
// 地址: 0x4c59b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b2a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0
int32_t eax_5 = *(arg2 + 8)
uint8_t var_61 = eax_5.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (eax_5 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (eax_5 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (eax_5 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
int32_t edi_1 = *(arg2 + 0x20)
void* eax_14 = arg2 + 0xc
void* esi_1

if (edi_1 u< 0x10)
    esi_1 = eax_14
else
    esi_1 = *eax_14

if (edi_1 u>= 0x10)
    eax_14 = *eax_14

int32_t var_7c = eax_5
sub_4102d0(arg1 + 4, *(arg1 + 8), eax_14, esi_1 + *(arg2 + 0x1c))
var_61 = 0
sub_54e400(&var_61, arg1 + 4)
float var_5c = fconvert.s(fconvert.t(*(arg2 + 0x28)))
var_61 = var_5c.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_1 = fconvert.s(fconvert.t(*(arg2 + 0x2c)))
var_61 = var_5c_1.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_1 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_1 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_1 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_2 = fconvert.s(fconvert.t(*(arg2 + 0x30)))
var_61 = var_5c_2.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_2 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_2 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_2 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_3 = fconvert.s(fconvert.t(*(arg2 + 0x34)))
var_61 = var_5c_3.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_3 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_3 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_3 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_4 = fconvert.s(fconvert.t(*(arg2 + 0x38)))
var_61 = var_5c_4.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_4 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_4 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_4 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_5 = fconvert.s(fconvert.t(*(arg2 + 0x3c)))
var_61 = var_5c_5.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_5 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_5 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_5 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_6 = fconvert.s(fconvert.t(*(arg2 + 0x40)))
var_61 = var_5c_6.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_6 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_6 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_6 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_7 = fconvert.s(fconvert.t(*(arg2 + 0x44)))
var_61 = var_5c_7.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_7 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_7 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_7 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_8 = fconvert.s(fconvert.t(*(arg2 + 0x48)))
var_61 = var_5c_8.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_8 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_8 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_8 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_9 = fconvert.s(fconvert.t(*(arg2 + 0x4c)))
var_61 = var_5c_9.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_9 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_9 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_9 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_10 = fconvert.s(fconvert.t(*(arg2 + 0x50)))
var_61 = var_5c_10.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_10 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_10 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_10 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_5c_11 = fconvert.s(fconvert.t(*(arg2 + 0x54)))
var_61 = var_5c_11.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_11 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_11 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_5c_11 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
int32_t eax_112
int32_t edx_13
edx_13:eax_112 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x5c) - *(arg2 + 0x58))
int32_t edx_14 = edx_13 s>> 1
int32_t eax_115 = (edx_14 u>> 0x1f) + edx_14
var_61 = eax_115.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (eax_115 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (eax_115 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (eax_115 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float* ecx_29 = *(arg2 + 0x58)
float* var_60_2 = ecx_29

if (ecx_29 != *(arg2 + 0x5c))
    while (true)
        int32_t eax_124 = *(arg1 + 8)
        float var_4c_1 = fconvert.s(fconvert.t(*var_60_2))
        var_61 = var_4c_1.b
        int32_t edx_18
        
        if (&var_61 u< eax_124)
            edx_18 = *(arg1 + 4)
        
        if (&var_61 u>= eax_124 || edx_18 u> &var_61)
            int32_t ecx_35 = *(arg1 + 0xc)
            
            if (eax_124 != ecx_35)
            label_4c5fa5:
                char* eax_130 = *(arg1 + 8)
                
                if (eax_130 != 0)
                    ecx_35.b = var_4c_1.b
                    *eax_130 = ecx_35.b
                
            label_4c5fb2:
                *(arg1 + 8) += 1
                int32_t eax_131 = *(arg1 + 8)
                var_61 = (var_4c_1 u>> 8).b
                int32_t edx_26
                
                if (&var_61 u< eax_131)
                    edx_26 = *(arg1 + 4)
                
                if (&var_61 u>= eax_131 || edx_26 u> &var_61)
                    int32_t ecx_41 = *(arg1 + 0xc)
                    
                    if (eax_131 != ecx_41)
                    label_4c605e:
                        char* eax_137 = *(arg1 + 8)
                        
                        if (eax_137 != 0)
                            ecx_41.b = var_61
                            *eax_137 = ecx_41.b
                        
                    label_4c606b:
                        *(arg1 + 8) += 1
                        int32_t eax_138 = *(arg1 + 8)
                        var_61 = (var_4c_1 u>> 0x10).b
                        int32_t edx_34
                        
                        if (&var_61 u< eax_138)
                            edx_34 = *(arg1 + 4)
                        
                        if (&var_61 u>= eax_138 || edx_34 u> &var_61)
                            int32_t ecx_47 = *(arg1 + 0xc)
                            
                            if (eax_138 != ecx_47)
                            label_4c6117:
                                char* eax_144 = *(arg1 + 8)
                                
                                if (eax_144 != 0)
                                    ecx_47.b = var_61
                                    *eax_144 = ecx_47.b
                                
                            label_4c6128:
                                *(arg1 + 8) += 1
                                var_61 = (var_4c_1 u>> 0x18).b
                                int32_t eax_147 = *(arg1 + 8)
                                int32_t edx_40
                                
                                if (&var_61 u< eax_147)
                                    edx_40 = *(arg1 + 4)
                                
                                if (&var_61 u>= eax_147 || edx_40 u> &var_61)
                                    int32_t ecx_53 = *(arg1 + 0xc)
                                    
                                    if (eax_147 != ecx_53)
                                    label_4c61d4:
                                        char* eax_150 = *(arg1 + 8)
                                        
                                        if (eax_150 != 0)
                                            ecx_53.b = var_61
                                            *eax_150 = ecx_53.b
                                        
                                    label_4c61e1:
                                        *(arg1 + 8) += 1
                                        float var_5c_12 = fconvert.s(fconvert.t(var_60_2[1]))
                                        eax_150.b = var_5c_12.b
                                        var_61 = eax_150.b
                                        int32_t eax_153 = *(arg1 + 8)
                                        int32_t edx_47
                                        
                                        if (&var_61 u< eax_153)
                                            edx_47 = *(arg1 + 4)
                                        
                                        if (&var_61 u>= eax_153 || edx_47 u> &var_61)
                                            int32_t ecx_59 = *(arg1 + 0xc)
                                            
                                            if (eax_153 != ecx_59)
                                            label_4c6295:
                                                char* eax_159 = *(arg1 + 8)
                                                
                                                if (eax_159 != 0)
                                                    ecx_59.b = var_5c_12.b
                                                    *eax_159 = ecx_59.b
                                                
                                            label_4c62a2:
                                                *(arg1 + 8) += 1
                                                int32_t eax_160 = *(arg1 + 8)
                                                var_61 = (var_5c_12 u>> 8).b
                                                int32_t edx_55
                                                
                                                if (&var_61 u< eax_160)
                                                    edx_55 = *(arg1 + 4)
                                                
                                                if (&var_61 u>= eax_160 || edx_55 u> &var_61)
                                                    int32_t ecx_65 = *(arg1 + 0xc)
                                                    
                                                    if (eax_160 != ecx_65)
                                                    label_4c634e:
                                                        char* eax_166 = *(arg1 + 8)
                                                        
                                                        if (eax_166 != 0)
                                                            ecx_65.b = var_61
                                                            *eax_166 = ecx_65.b
                                                        
                                                    label_4c635b:
                                                        *(arg1 + 8) += 1
                                                        int32_t eax_167 = *(arg1 + 8)
                                                        var_61 = (var_5c_12 u>> 0x10).b
                                                        int32_t edx_63
                                                        
                                                        if (&var_61 u< eax_167)
                                                            edx_63 = *(arg1 + 4)
                                                        
                                                        if (&var_61 u>= eax_167
                                                                || edx_63 u> &var_61)
                                                            int32_t ecx_71 = *(arg1 + 0xc)
                                                            
                                                            if (eax_167 != ecx_71)
                                                            label_4c6407:
                                                                char* eax_173 = *(arg1 + 8)
                                                                
                                                                if (eax_173 != 0)
                                                                    ecx_71.b = var_61
                                                                    *eax_173 = ecx_71.b
                                                                
                                                            label_4c6418:
                                                                *(arg1 + 8) += 1
                                                                var_61 = (var_5c_12 u>> 0x18).b
                                                                int32_t eax_176 = *(arg1 + 8)
                                                                uint8_t* edx_69
                                                                
                                                                if (&var_61 u< eax_176)
                                                                    edx_69 = *(arg1 + 4)
                                                                
                                                                if (&var_61 u>= eax_176
                                                                        || edx_69 u> &var_61)
                                                                    void* ecx_77 = *(arg1 + 0xc)
                                                                    
                                                                    if (eax_176 != ecx_77)
                                                                    label_4c64c4:
                                                                        char* eax_182 = *(arg1 + 8)
                                                                        
                                                                        if (eax_182 != 0)
                                                                            ecx_77.b = var_61
                                                                            *eax_182 = ecx_77.b
                                                                        
                                                                    label_4c64d1:
                                                                        *(arg1 + 8) += 1
                                                                        float var_54_1 =
                                                                            fconvert.s(fconvert.t(var_60_2[2]))
                                                                        edx_69.b = var_54_1.b
                                                                        var_61 = edx_69.b
                                                                        sub_54e400(&var_61, arg1 + 4)
                                                                        var_61 = (var_54_1 u>> 8).b
                                                                        sub_54e400(&var_61, arg1 + 4)
                                                                        var_61 = (var_54_1 u>> 0x10).b
                                                                        sub_54e400(&var_61, arg1 + 4)
                                                                        var_61 = (var_54_1 u>> 0x18).b
                                                                        sub_54e400(&var_61, arg1 + 4)
                                                                        void* edi_12 = &var_60_2[3]
                                                                        var_60_2 = edi_12
                                                                        
                                                                        if (edi_12 == *(arg2 + 0x5c))
                                                                            break
                                                                        
                                                                        continue
                                                                    else
                                                                        edx_69 = *(arg1 + 4)
                                                                        void* eax_180 = eax_176 - edx_69
                                                                        
                                                                        if (eax_180 u<= 0xfffffffe)
                                                                            ecx_77 -= edx_69
                                                                            
                                                                            if (eax_180 + 1 u> ecx_77)
                                                                                uint32_t edx_73 = ecx_77 u>> 1
                                                                                void* ecx_78
                                                                                
                                                                                if (0xffffffff - edx_73 u>= ecx_77)
                                                                                    ecx_78 = ecx_77 + edx_73
                                                                                else
                                                                                    ecx_78 = nullptr
                                                                                
                                                                                if (ecx_78 u< eax_180 + 1)
                                                                                    ecx_78 = eax_180 + 1
                                                                                
                                                                                ecx_77, edx_69 =
                                                                                    sub_424860(arg1 + 4, ecx_78)
                                                                            
                                                                            goto label_4c64c4
                                                                else
                                                                    int32_t ecx_73 = *(arg1 + 0xc)
                                                                    
                                                                    if (eax_176 != ecx_73)
                                                                    label_4c6476:
                                                                        char* ecx_76 = *(arg1 + 8)
                                                                        
                                                                        if (ecx_76 != 0)
                                                                            edx_69.b =
                                                                                (*(arg1 + 4))[&var_61 - edx_69]
                                                                            *ecx_76 = edx_69.b
                                                                        
                                                                        goto label_4c64d1
                                                                    
                                                                    void* eax_177 = eax_176 - edx_69
                                                                    
                                                                    if (eax_177 u<= 0xfffffffe)
                                                                        void* ecx_74 = ecx_73 - edx_69
                                                                        
                                                                        if (eax_177 + 1 u> ecx_74)
                                                                            uint32_t edx_71 = ecx_74 u>> 1
                                                                            void* ecx_75
                                                                            
                                                                            if (0xffffffff - edx_71 u>= ecx_74)
                                                                                ecx_75 = ecx_74 + edx_71
                                                                            else
                                                                                ecx_75 = nullptr
                                                                            
                                                                            if (ecx_75 u< eax_177 + 1)
                                                                                ecx_75 = eax_177 + 1
                                                                            
                                                                            sub_424860(arg1 + 4, ecx_75)
                                                                        
                                                                        goto label_4c6476
                                                            else
                                                                int32_t edx_66 = *(arg1 + 4)
                                                                int32_t eax_171 = eax_167 - edx_66
                                                                
                                                                if (eax_171 u<= 0xfffffffe)
                                                                    ecx_71 -= edx_66
                                                                    
                                                                    if (eax_171 + 1 u> ecx_71)
                                                                        uint32_t edx_68 = ecx_71 u>> 1
                                                                        uint32_t ecx_72
                                                                        
                                                                        if (0xffffffff - edx_68 u>= ecx_71)
                                                                            ecx_72 = ecx_71 + edx_68
                                                                        else
                                                                            ecx_72 = 0
                                                                        
                                                                        if (ecx_72 u< eax_171 + 1)
                                                                            ecx_72 = eax_171 + 1
                                                                        
                                                                        sub_424860(arg1 + 4, ecx_72)
                                                                    
                                                                    goto label_4c6407
                                                        else
                                                            int32_t ecx_67 = *(arg1 + 0xc)
                                                            
                                                            if (eax_167 != ecx_67)
                                                            label_4c63b9:
                                                                char* ecx_70 = *(arg1 + 8)
                                                                
                                                                if (ecx_70 != 0)
                                                                    edx_63.b =
                                                                        *(*(arg1 + 4) + &var_61 - edx_63)
                                                                    *ecx_70 = edx_63.b
                                                                
                                                                goto label_4c6418
                                                            
                                                            int32_t eax_168 = eax_167 - edx_63
                                                            
                                                            if (eax_168 u<= 0xfffffffe)
                                                                int32_t ecx_68 = ecx_67 - edx_63
                                                                
                                                                if (eax_168 + 1 u> ecx_68)
                                                                    uint32_t edx_65 = ecx_68 u>> 1
                                                                    uint32_t ecx_69
                                                                    
                                                                    if (0xffffffff - edx_65 u>= ecx_68)
                                                                        ecx_69 = ecx_68 + edx_65
                                                                    else
                                                                        ecx_69 = 0
                                                                    
                                                                    if (ecx_69 u< eax_168 + 1)
                                                                        ecx_69 = eax_168 + 1
                                                                    
                                                                    sub_424860(arg1 + 4, ecx_69)
                                                                
                                                                goto label_4c63b9
                                                    else
                                                        int32_t edx_58 = *(arg1 + 4)
                                                        int32_t eax_164 = eax_160 - edx_58
                                                        
                                                        if (eax_164 u<= 0xfffffffe)
                                                            ecx_65 -= edx_58
                                                            
                                                            if (eax_164 + 1 u> ecx_65)
                                                                uint32_t edx_60 = ecx_65 u>> 1
                                                                uint32_t ecx_66
                                                                
                                                                if (0xffffffff - edx_60 u>= ecx_65)
                                                                    ecx_66 = ecx_65 + edx_60
                                                                else
                                                                    ecx_66 = 0
                                                                
                                                                if (ecx_66 u< eax_164 + 1)
                                                                    ecx_66 = eax_164 + 1
                                                                
                                                                sub_424860(arg1 + 4, ecx_66)
                                                            
                                                            goto label_4c634e
                                                else
                                                    int32_t ecx_61 = *(arg1 + 0xc)
                                                    
                                                    if (eax_160 != ecx_61)
                                                    label_4c6300:
                                                        char* ecx_64 = *(arg1 + 8)
                                                        
                                                        if (ecx_64 != 0)
                                                            edx_55.b =
                                                                *(*(arg1 + 4) + &var_61 - edx_55)
                                                            *ecx_64 = edx_55.b
                                                        
                                                        goto label_4c635b
                                                    
                                                    int32_t eax_161 = eax_160 - edx_55
                                                    
                                                    if (eax_161 u<= 0xfffffffe)
                                                        int32_t ecx_62 = ecx_61 - edx_55
                                                        
                                                        if (eax_161 + 1 u> ecx_62)
                                                            uint32_t edx_57 = ecx_62 u>> 1
                                                            uint32_t ecx_63
                                                            
                                                            if (0xffffffff - edx_57 u>= ecx_62)
                                                                ecx_63 = ecx_62 + edx_57
                                                            else
                                                                ecx_63 = 0
                                                            
                                                            if (ecx_63 u< eax_161 + 1)
                                                                ecx_63 = eax_161 + 1
                                                            
                                                            sub_424860(arg1 + 4, ecx_63)
                                                        
                                                        goto label_4c6300
                                            else
                                                int32_t edx_50 = *(arg1 + 4)
                                                int32_t eax_157 = eax_153 - edx_50
                                                
                                                if (eax_157 u<= 0xfffffffe)
                                                    ecx_59 -= edx_50
                                                    
                                                    if (eax_157 + 1 u> ecx_59)
                                                        uint32_t edx_52 = ecx_59 u>> 1
                                                        uint32_t ecx_60
                                                        
                                                        if (0xffffffff - edx_52 u>= ecx_59)
                                                            ecx_60 = ecx_59 + edx_52
                                                        else
                                                            ecx_60 = 0
                                                        
                                                        if (ecx_60 u< eax_157 + 1)
                                                            ecx_60 = eax_157 + 1
                                                        
                                                        sub_424860(arg1 + 4, ecx_60)
                                                    
                                                    goto label_4c6295
                                        else
                                            int32_t ecx_55 = *(arg1 + 0xc)
                                            
                                            if (eax_153 != ecx_55)
                                            label_4c6247:
                                                char* ecx_58 = *(arg1 + 8)
                                                
                                                if (ecx_58 != 0)
                                                    edx_47.b = *(*(arg1 + 4) + &var_61 - edx_47)
                                                    *ecx_58 = edx_47.b
                                                
                                                goto label_4c62a2
                                            
                                            int32_t eax_154 = eax_153 - edx_47
                                            
                                            if (eax_154 u<= 0xfffffffe)
                                                int32_t ecx_56 = ecx_55 - edx_47
                                                
                                                if (eax_154 + 1 u> ecx_56)
                                                    uint32_t edx_49 = ecx_56 u>> 1
                                                    uint32_t ecx_57
                                                    
                                                    if (0xffffffff - edx_49 u>= ecx_56)
                                                        ecx_57 = ecx_56 + edx_49
                                                    else
                                                        ecx_57 = 0
                                                    
                                                    if (ecx_57 u< eax_154 + 1)
                                                        ecx_57 = eax_154 + 1
                                                    
                                                    sub_424860(arg1 + 4, ecx_57)
                                                
                                                goto label_4c6247
                                    else
                                        int32_t edx_43 = *(arg1 + 4)
                                        int32_t eax_151 = eax_147 - edx_43
                                        
                                        if (eax_151 u<= 0xfffffffe)
                                            ecx_53 -= edx_43
                                            
                                            if (eax_151 + 1 u> ecx_53)
                                                uint32_t edx_45 = ecx_53 u>> 1
                                                uint32_t ecx_54
                                                
                                                if (0xffffffff - edx_45 u>= ecx_53)
                                                    ecx_54 = ecx_53 + edx_45
                                                else
                                                    ecx_54 = 0
                                                
                                                if (ecx_54 u< eax_151 + 1)
                                                    ecx_54 = eax_151 + 1
                                                
                                                sub_424860(arg1 + 4, ecx_54)
                                            
                                            goto label_4c61d4
                                else
                                    int32_t ecx_49 = *(arg1 + 0xc)
                                    
                                    if (eax_147 != ecx_49)
                                    label_4c6186:
                                        char* ecx_52 = *(arg1 + 8)
                                        
                                        if (ecx_52 != 0)
                                            edx_40.b = *(*(arg1 + 4) + &var_61 - edx_40)
                                            *ecx_52 = edx_40.b
                                        
                                        goto label_4c61e1
                                    
                                    int32_t eax_148 = eax_147 - edx_40
                                    
                                    if (eax_148 u<= 0xfffffffe)
                                        int32_t ecx_50 = ecx_49 - edx_40
                                        
                                        if (eax_148 + 1 u> ecx_50)
                                            uint32_t edx_42 = ecx_50 u>> 1
                                            uint32_t ecx_51
                                            
                                            if (0xffffffff - edx_42 u>= ecx_50)
                                                ecx_51 = ecx_50 + edx_42
                                            else
                                                ecx_51 = 0
                                            
                                            if (ecx_51 u< eax_148 + 1)
                                                ecx_51 = eax_148 + 1
                                            
                                            sub_424860(arg1 + 4, ecx_51)
                                        
                                        goto label_4c6186
                            else
                                int32_t edx_37 = *(arg1 + 4)
                                int32_t eax_142 = eax_138 - edx_37
                                
                                if (eax_142 u<= 0xfffffffe)
                                    ecx_47 -= edx_37
                                    
                                    if (eax_142 + 1 u> ecx_47)
                                        uint32_t edx_39 = ecx_47 u>> 1
                                        uint32_t ecx_48
                                        
                                        if (0xffffffff - edx_39 u>= ecx_47)
                                            ecx_48 = ecx_47 + edx_39
                                        else
                                            ecx_48 = 0
                                        
                                        if (ecx_48 u< eax_142 + 1)
                                            ecx_48 = eax_142 + 1
                                        
                                        sub_424860(arg1 + 4, ecx_48)
                                    
                                    goto label_4c6117
                        else
                            int32_t ecx_43 = *(arg1 + 0xc)
                            
                            if (eax_138 != ecx_43)
                            label_4c60c9:
                                char* ecx_46 = *(arg1 + 8)
                                
                                if (ecx_46 != 0)
                                    edx_34.b = *(*(arg1 + 4) + &var_61 - edx_34)
                                    *ecx_46 = edx_34.b
                                
                                goto label_4c6128
                            
                            int32_t eax_139 = eax_138 - edx_34
                            
                            if (eax_139 u<= 0xfffffffe)
                                int32_t ecx_44 = ecx_43 - edx_34
                                
                                if (eax_139 + 1 u> ecx_44)
                                    uint32_t edx_36 = ecx_44 u>> 1
                                    uint32_t ecx_45
                                    
                                    if (0xffffffff - edx_36 u>= ecx_44)
                                        ecx_45 = ecx_44 + edx_36
                                    else
                                        ecx_45 = 0
                                    
                                    if (ecx_45 u< eax_139 + 1)
                                        ecx_45 = eax_139 + 1
                                    
                                    sub_424860(arg1 + 4, ecx_45)
                                
                                goto label_4c60c9
                    else
                        int32_t edx_29 = *(arg1 + 4)
                        int32_t eax_135 = eax_131 - edx_29
                        
                        if (eax_135 u<= 0xfffffffe)
                            ecx_41 -= edx_29
                            
                            if (eax_135 + 1 u> ecx_41)
                                uint32_t edx_31 = ecx_41 u>> 1
                                uint32_t ecx_42
                                
                                if (0xffffffff - edx_31 u>= ecx_41)
                                    ecx_42 = ecx_41 + edx_31
                                else
                                    ecx_42 = 0
                                
                                if (ecx_42 u< eax_135 + 1)
                                    ecx_42 = eax_135 + 1
                                
                                sub_424860(arg1 + 4, ecx_42)
                            
                            goto label_4c605e
                else
                    int32_t ecx_37 = *(arg1 + 0xc)
                    
                    if (eax_131 != ecx_37)
                    label_4c6010:
                        char* ecx_40 = *(arg1 + 8)
                        
                        if (ecx_40 != 0)
                            edx_26.b = *(*(arg1 + 4) + &var_61 - edx_26)
                            *ecx_40 = edx_26.b
                        
                        goto label_4c606b
                    
                    int32_t eax_132 = eax_131 - edx_26
                    
                    if (eax_132 u<= 0xfffffffe)
                        int32_t ecx_38 = ecx_37 - edx_26
                        
                        if (eax_132 + 1 u> ecx_38)
                            uint32_t edx_28 = ecx_38 u>> 1
                            uint32_t ecx_39
                            
                            if (0xffffffff - edx_28 u>= ecx_38)
                                ecx_39 = ecx_38 + edx_28
                            else
                                ecx_39 = 0
                            
                            if (ecx_39 u< eax_132 + 1)
                                ecx_39 = eax_132 + 1
                            
                            sub_424860(arg1 + 4, ecx_39)
                        
                        goto label_4c6010
            else
                int32_t edx_21 = *(arg1 + 4)
                int32_t eax_128 = eax_124 - edx_21
                
                if (eax_128 u<= 0xfffffffe)
                    ecx_35 -= edx_21
                    
                    if (eax_128 + 1 u> ecx_35)
                        uint32_t edx_23 = ecx_35 u>> 1
                        uint32_t ecx_36
                        
                        if (0xffffffff - edx_23 u>= ecx_35)
                            ecx_36 = ecx_35 + edx_23
                        else
                            ecx_36 = 0
                        
                        if (ecx_36 u< eax_128 + 1)
                            ecx_36 = eax_128 + 1
                        
                        sub_424860(arg1 + 4, ecx_36)
                    
                    goto label_4c5fa5
        else
            int32_t ecx_31 = *(arg1 + 0xc)
            
            if (eax_124 != ecx_31)
            label_4c5f57:
                char* ecx_34 = *(arg1 + 8)
                
                if (ecx_34 != 0)
                    edx_18.b = *(*(arg1 + 4) + &var_61 - edx_18)
                    *ecx_34 = edx_18.b
                
                goto label_4c5fb2
            
            int32_t eax_125 = eax_124 - edx_18
            
            if (eax_125 u<= 0xfffffffe)
                int32_t ecx_32 = ecx_31 - edx_18
                
                if (eax_125 + 1 u> ecx_32)
                    uint32_t edx_20 = ecx_32 u>> 1
                    uint32_t ecx_33
                    
                    if (0xffffffff - edx_20 u>= ecx_32)
                        ecx_33 = ecx_32 + edx_20
                    else
                        ecx_33 = 0
                    
                    if (ecx_33 u< eax_125 + 1)
                        ecx_33 = eax_125 + 1
                    
                    sub_424860(arg1 + 4, ecx_33)
                
                goto label_4c5f57
        
        sub_6b47bf("vector<T> too long")
        noreturn

sub_4101f0(arg1, (*(arg2 + 0x6c) - *(arg2 + 0x68)) s>> 3)

for (float* i = *(arg2 + 0x68); i != *(arg2 + 0x6c); i = &i[2])
    float var_60_3 = fconvert.s(fconvert.t(*i))
    var_61 = var_60_3.b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (var_60_3 u>> 8).b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (var_60_3 u>> 0x10).b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (var_60_3 u>> 0x18).b
    sub_54e400(&var_61, arg1 + 4)
    float var_54_2 = fconvert.s(fconvert.t(i[1]))
    var_61 = var_54_2.b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (var_54_2 u>> 8).b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (var_54_2 u>> 0x10).b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (var_54_2 u>> 0x18).b
    sub_54e400(&var_61, arg1 + 4)

float var_60_4 = fconvert.s(fconvert.t(*(arg2 + 0x78)))
var_61 = var_60_4.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_4 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_4 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_4 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_60_5 = fconvert.s(fconvert.t(*(arg2 + 0x7c)))
var_61 = var_60_5.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_5 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_5 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_5 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_60_6 = fconvert.s(fconvert.t(*(arg2 + 0x80)))
var_61 = var_60_6.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_6 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_6 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_6 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_60_7 = fconvert.s(fconvert.t(*(arg2 + 0x84)))
var_61 = var_60_7.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_7 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_7 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_7 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
float var_60_8 = fconvert.s(fconvert.t(*(arg2 + 0x88)))
var_61 = var_60_8.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_8 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_8 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_8 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x8c))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x90))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x94))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x98))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x9c))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0xa0))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0xa4))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0xa8))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0xac))))
sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0xb0))))
var_61 = *(arg2 + 0xb4) != 0
sub_54e400(&var_61, arg1 + 4)
var_61 = *(arg2 + 0xb5) != 0
sub_54e400(&var_61, arg1 + 4)
var_61 = *(arg2 + 0xb6) != 0
sub_54e400(&var_61, arg1 + 4)
var_61 = *(arg2 + 0xb7) != 0
sub_54e400(&var_61, arg1 + 4)
sub_4101f0(arg1, (*(arg2 + 0xbc) - *(arg2 + 0xb8)) s>> 2)

for (int32_t* i_1 = *(arg2 + 0xb8); i_1 != *(arg2 + 0xbc); i_1 = &i_1[1])
    int32_t eax_261 = *i_1
    var_61 = eax_261.b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (eax_261 u>> 8).b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (eax_261 u>> 0x10).b
    sub_54e400(&var_61, arg1 + 4)
    var_61 = (eax_261 u>> 0x18).b
    sub_54e400(&var_61, arg1 + 4)

float var_60_20 = fconvert.s(fconvert.t(*(arg2 + 0x128)))
var_61 = var_60_20.b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_20 u>> 8).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_20 u>> 0x10).b
sub_54e400(&var_61, arg1 + 4)
var_61 = (var_60_20 u>> 0x18).b
sub_54e400(&var_61, arg1 + 4)
char result

if (sub_4dad20(arg1, arg2 + 0x12c) == 0)
    result = 0
else if (sub_4dad20(arg1, arg2 + 0x144) == 0)
    result = 0
else
    void* eax_280 = *(arg2 + 0x15c)
    int32_t var_58_1
    char var_48
    int32_t var_34
    char var_2c
    int32_t var_18
    char* eax_282
    
    if (eax_280 == 0)
        int32_t var_38_1 = 0
        var_34 = 0xf
        var_48 = 0
        sub_401270(&var_48, nullptr, 0x72d9e3)
        int32_t var_4_1 = 1
        eax_282 = &var_48
        var_58_1 = 2
    else
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_401180(&var_2c, 0xffffffff, eax_280 + 0xc, 0)
        int32_t var_4 = 0
        eax_282 = &var_2c
        var_58_1 = 1
    
    int32_t ecx_107 = *(eax_282 + 0x14)
    int32_t edi_16 = *(eax_282 + 0x10)
    char* edx_100
    
    if (ecx_107 u< 0x10)
        edx_100 = eax_282
    else
        edx_100 = *eax_282
    
    if (ecx_107 u>= 0x10)
        eax_282 = *eax_282
    
    float var_7c_29 = var_60_20
    sub_4102d0(arg1 + 4, *(arg1 + 8), eax_282, &edx_100[edi_16])
    var_61 = 0
    sub_54e400(&var_61, arg1 + 4)
    
    if ((var_58_1.b & 2) != 0)
        var_58_1 &= 0xfffffffd
        
        if (var_34 u>= 0x10)
            int32_t var_7c_30 = var_48.d
            sub_6b4d5b()
        
        var_34 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
    
    int32_t var_4_2 = 0xffffffff
    
    if ((var_58_1.b & 1) != 0)
        var_58_1 &= 0xfffffffe
        
        if (var_18 u>= 0x10)
            int32_t var_7c_31 = var_2c.d
            sub_6b4d5b()
    
    int32_t var_58_2
    char* eax_287
    
    if (*(arg2 + 0x164) == 0)
        var_34 = 0xf
        int32_t var_38_3 = 0
        var_48 = 0
        sub_401270(&var_48, nullptr, 0x72da06)
        int32_t var_4_4 = 3
        var_58_2 = var_58_1 | 8
        eax_287 = &var_48
    else
        int32_t* eax_286 = *(arg2 + 0x15c) + 0xc
        var_18 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_401180(&var_2c, 0xffffffff, eax_286, 0)
        int32_t var_4_3 = 2
        var_58_2 = var_58_1 | 4
        eax_287 = &var_2c
    
    int32_t ecx_110 = *(eax_287 + 0x10)
    int32_t ecx_111 = *(eax_287 + 0x14)
    char* edx_103
    
    if (ecx_111 u< 0x10)
        edx_103 = eax_287
    else
        edx_103 = *eax_287
    
    if (ecx_111 u>= 0x10)
        eax_287 = *eax_287
    
    int32_t var_7c_32 = ecx_110
    sub_4102d0(arg1 + 4, *(arg1 + 8), eax_287, &edx_103[ecx_110])
    var_61 = 0
    sub_54e400(&var_61, arg1 + 4)
    
    if ((var_58_2.b & 8) != 0)
        var_58_2 &= 0xfffffff7
        
        if (var_34 u>= 0x10)
            int32_t var_7c_33 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_4 = 0
        var_48 = 0
    
    int32_t var_4_5 = 0xffffffff
    
    if ((var_58_2.b & 4) != 0 && var_18 u>= 0x10)
        int32_t var_7c_34 = var_2c.d
        sub_6b4d5b()
    
    var_61 = *(arg2 + 0x1a4) != 0
    sub_54e400(&var_61, arg1 + 4)
    var_61 = *(arg2 + 0x1a5) != 0
    int32_t var_7c_35 = sub_54e400(&var_61, arg1 + 4)
    sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x1a8))))
    int32_t ecx_117 = sub_4101f0(arg1, (*(arg2 + 0x1c0) - *(arg2 + 0x1bc)) s>> 2)
    
    for (int32_t* i_2 = *(arg2 + 0x1bc); i_2 != *(arg2 + 0x1c0); i_2 = &i_2[1])
        ecx_117 = sub_4101f0(arg1, *i_2)
    
    int32_t var_7c_39 = ecx_117
    sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x1cc))))
    sub_4101f0(arg1, *(arg2 + 0x260))
    uint8_t* eax_300 = &var_61
    int32_t ecx_119
    
    if (*(arg2 + 0x264) == 0)
        var_61 = 0
        ecx_119 = sub_54e400(eax_300, arg1 + 4)
    label_4c6d22:
        int32_t var_7c_43 = ecx_119
        int32_t var_7c_45 = sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x284))))
        sub_4101f0(arg1, fconvert.s(fconvert.t(*(arg2 + 0x288))))
        var_61 = *(arg2 + 0x28c) != 0
        sub_54e400(&var_61, arg1 + 4)
        var_61 = *(arg2 + 0x28d) != 0
        sub_54e400(&var_61, arg1 + 4)
        result = 1
    else
        var_61 = 1
        sub_54e400(eax_300, arg1 + 4)
        result, ecx_119 = sub_4cb8a0(*(arg2 + 0x264), arg1)
        
        if (result != 0)
            goto label_4c6d22
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
