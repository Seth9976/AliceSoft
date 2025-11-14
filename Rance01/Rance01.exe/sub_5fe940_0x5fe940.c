// 函数: sub_5fe940
// 地址: 0x5fe940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7281e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_dc
int32_t eax_2 = data_78c474 ^ &var_dc
int32_t __saved_edi
int32_t var_ec = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t* var_ac = esi
sub_5fc4a0(arg1)
sub_5fc500(arg1)
char* ecx = *esi
char* result

if (&ecx[4] u> esi[1])
labelid_b:
    result.b = 0
else
    uint32_t edx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *esi = &ecx[4]
    
    if (&ecx[8] u> esi[1])
    labelid_b:
        result.b = 0
    else
        uint32_t ecx_8 =
            ((zx.d(ecx[7]) << 8 | zx.d(ecx[6])) << 8 | zx.d(ecx[5])) << 8 | zx.d(ecx[4])
        *esi = &ecx[8]
        uint32_t var_94
        uint32_t var_8c
        
        if (sub_5546f0(esi, &var_94).b == 0)
        labelid_b:
            result.b = 0
        else
            uint32_t var_84
            
            if (sub_5546f0(esi, &var_8c).b == 0)
            labelid_b:
                result.b = 0
            else
                float var_88
                
                if (sub_5546f0(esi, &var_84).b == 0)
                labelid_b:
                    result.b = 0
                else
                    float var_78
                    
                    if (sub_40ff40(esi, esi, &var_88).b == 0)
                    labelid_b:
                        result.b = 0
                    else
                        uint32_t var_a4
                        
                        if (sub_40ff40(&var_78, esi, &var_78).b == 0)
                        labelid_b:
                            result.b = 0
                        else
                            uint32_t var_90
                            
                            if (sub_5546f0(esi, &var_a4).b == 0)
                            labelid_b:
                                result.b = 0
                            else
                                uint32_t var_9c
                                
                                if (sub_5546f0(esi, &var_90).b == 0)
                                labelid_b:
                                    result.b = 0
                                else
                                    uint32_t var_7c
                                    
                                    if (sub_5546f0(esi, &var_9c).b == 0)
                                    labelid_b:
                                        result.b = 0
                                    else
                                        uint32_t var_74
                                        
                                        if (sub_5546f0(esi, &var_7c).b == 0)
                                        labelid_b:
                                            result.b = 0
                                        else
                                            char var_d5
                                            
                                            if (sub_5546f0(esi, &var_74).b == 0)
                                            labelid_b:
                                                result.b = 0
                                            else if (sub_40fea0(esi, &var_d5).b == 0)
                                            labelid_b:
                                                result.b = 0
                                            else
                                                result.b = var_d5
                                                
                                                if (*(arg1 + 0x94) != result.b)
                                                    *(arg1 + 0x94) = result.b
                                                    *(arg1 + 0x95) = 1
                                                
                                                uint32_t var_d4
                                                
                                                if (sub_5546f0(esi, &var_d4).b == 0)
                                                labelid_b:
                                                    result.b = 0
                                                else
                                                    int32_t edi_3 = 0
                                                    int32_t var_a8_1 = 0
                                                    uint32_t var_d0
                                                    uint32_t var_cc
                                                    uint32_t var_c8
                                                    float var_c4
                                                    uint32_t var_c0
                                                    uint32_t var_bc
                                                    uint32_t var_b8
                                                    uint32_t var_b4
                                                    uint32_t var_b0
                                                    void var_68
                                                    
                                                    if (var_d4 s> 0)
                                                        int32_t eax_11
                                                        
                                                        do
                                                            if (sub_5546f0(esi, &var_bc).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_b4).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_c8).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_c0).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_b8).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            int32_t ecx_18
                                                            result, ecx_18 =
                                                                sub_40ff40(esi, esi, &var_c4)
                                                            
                                                            if (result.b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            float var_98
                                                            
                                                            if (sub_40ff40(ecx_18, esi, &var_98).b
                                                                    == 0)
                                                                goto label_5feea0_2
                                                            
                                                            uint32_t var_70
                                                            
                                                            if (sub_5546f0(esi, &var_70).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            uint32_t var_80
                                                            
                                                            if (sub_5546f0(esi, &var_80).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_cc).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_d0).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            if (sub_5546f0(esi, &var_b0).b == 0)
                                                                goto label_5feea0_2
                                                            
                                                            int32_t var_24_1 = 0xf
                                                            int32_t var_28_1 = 0
                                                            char var_38 = 0
                                                            int32_t var_c_1 = 0
                                                            
                                                            if (sub_410070(esi, &var_38) == 0)
                                                                sub_401110(&var_38)
                                                                goto label_5feea0_2
                                                            
                                                            sub_5fdc40(
                                                                sub_5e0090(var_b8, var_c0, var_c8, 
                                                                    var_cc, &var_68, var_bc, var_b4, 
                                                                    fconvert.s(fconvert.t(var_c4)), 
                                                                    fconvert.s(fconvert.t(var_98)), var_80, 
                                                                    var_70), 
                                                                arg1)
                                                            uint32_t ecx_24 = var_d0
                                                            
                                                            if (*(arg1 + 0x38) != ecx_24)
                                                                *(arg1 + 0x38) = ecx_24
                                                                *(arg1 + 0x95) = 1
                                                            
                                                            uint32_t ecx_25 = var_b0
                                                            
                                                            if (*(arg1 + 0x3c) != ecx_25)
                                                                *(arg1 + 0x3c) = ecx_25
                                                                *(arg1 + 0x95) = 1
                                                            
                                                            char* var_f0_28 = &var_38
                                                            sub_5fd0b0(arg1)
                                                            int32_t var_c_2 = 0xffffffff
                                                            sub_401110(&var_38)
                                                            esi = var_ac
                                                            eax_11 = var_a8_1 + 1
                                                            edi_3 = 0
                                                            var_a8_1 = eax_11
                                                        while (eax_11 s< var_d4)
                                                    
                                                    if (sub_5546f0(esi, &var_b4).b == 0)
                                                    labelid_b:
                                                        result.b = 0
                                                    else if (sub_5546f0(esi, &var_bc).b == 0)
                                                    labelid_b:
                                                        result.b = 0
                                                    else if (sub_5546f0(esi, &var_c4).b == 0)
                                                    label_5feea0:
                                                        result.b = 0
                                                    else if (sub_5546f0(esi, &var_cc).b == 0)
                                                    label_5feea0_1:
                                                        result.b = 0
                                                    else if (sub_5546f0(esi, &var_d4).b == 0)
                                                    label_5feea0_2:
                                                        result.b = 0
                                                    else
                                                        sub_5fdd40(esi, arg1)
                                                        
                                                        if (var_d4 s> 0)
                                                            do
                                                                if (sub_5546f0(var_ac, &var_c8).b == 0)
                                                                    goto label_5feea0_2
                                                                
                                                                if (sub_5546f0(var_ac, &var_c0).b == 0)
                                                                    goto label_5feea0_2
                                                                
                                                                if (sub_5546f0(var_ac, &var_b8).b == 0)
                                                                    goto label_5feea0_2
                                                                
                                                                if (sub_5546f0(var_ac, &var_d0).b == 0)
                                                                    goto label_5feea0_2
                                                                
                                                                if (sub_5546f0(var_ac, &var_b0).b == 0)
                                                                    goto label_5feea0_2
                                                                
                                                                sub_5fdcf0(var_c8, var_c0, arg1, 
                                                                    var_b8, var_d0, var_b0)
                                                                edi_3 += 1
                                                            while (edi_3 s< var_d4)
                                                        
                                                        sub_5fdc40(
                                                            sub_5e0090(var_84, var_8c, var_94, 
                                                                var_9c, &var_68, edx_7, ecx_8, 
                                                                fconvert.s(fconvert.t(var_88)), 
                                                                fconvert.s(fconvert.t(var_78)), var_90, 
                                                                var_a4), 
                                                            arg1)
                                                        uint32_t eax_16 = var_7c
                                                        
                                                        if (*(arg1 + 0x38) != eax_16)
                                                            *(arg1 + 0x38) = eax_16
                                                            *(arg1 + 0x95) = 1
                                                        
                                                        uint32_t eax_17 = var_74
                                                        
                                                        if (*(arg1 + 0x3c) != eax_17)
                                                            *(arg1 + 0x3c) = eax_17
                                                            *(arg1 + 0x95) = 1
                                                        
                                                        sub_5fd780(var_c4, arg1, var_b4, var_bc, 
                                                            var_cc)
                                                        *(arg1 + 0x95) = 1
                                                        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_dc)
return result
