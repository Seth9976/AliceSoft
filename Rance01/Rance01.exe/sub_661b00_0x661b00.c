// 函数: sub_661b00
// 地址: 0x661b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718a8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d0
int32_t eax_2 = data_78c474 ^ &var_d0
int32_t __saved_edi
int32_t var_e4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *arg1
uint32_t result

if (&ecx[4] u> arg1[1])
    result.b = 0
else
    result = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    uint32_t result_2 = result
    *arg1 = &ecx[4]
    uint32_t result_1 = 0
    
    if (result s<= 0)
    label_661fc5:
        result.b = 1
    else
        while (true)
            int16_t var_88 = 0
            uint32_t result_3 = 0
            int32_t var_80_1 = 0
            int32_t var_7c_1 = 0
            int32_t var_4 = 0
            int32_t var_74_1 = 0
            int32_t var_5c_1 = 0xf
            int32_t var_60_1 = 0
            char var_70 = 0
            sub_401270(&var_70, nullptr, 0x72d3aa)
            var_4.b = 1
            float var_50_1 = fconvert.s(float.t(0))
            int32_t var_54_1 = 0
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            sub_401270(&var_4c, nullptr, 0x72d3ab)
            int32_t var_4_1 = 2
            char* eax_11 = *arg1
            
            if (&eax_11[4] u> arg1[1])
                int32_t var_4_3 = 0xffffffff
                
                if (var_38_1 u>= 0x10)
                    int32_t var_e8_9 = var_4c.d
                    sub_6b4d5b()
                
                int32_t var_38_2 = 0xf
                int32_t var_3c_2 = 0
                var_4c = 0
                
                if (var_5c_1 u>= 0x10)
                    int32_t var_e8_10 = var_70.d
                    sub_6b4d5b()
                
                result = result_3
                int32_t var_5c_2 = 0xf
                int32_t var_60_2 = 0
                var_70 = 0
                
                if (result != 0)
                    uint32_t result_4 = result_2
                    sub_663220(result, var_80_1)
                    uint32_t result_5 = result_3
                    sub_6b4d5b()
                
                break
            
            uint32_t ebx_7 = ((zx.d(eax_11[3]) << 8 | zx.d(eax_11[2])) << 8 | zx.d(eax_11[1])) << 8
                | zx.d(*eax_11)
            *arg1 = &eax_11[4]
            int32_t var_90_1 = 0xf
            int32_t var_94_1 = 0
            char var_a4 = 0
            sub_401270(&var_a4, nullptr, 0x72d5a9)
            var_4_1.b = 3
            char* ecx_3 = *arg1
            
            if (&ecx_3[4] u> arg1[1])
                if (var_90_1 u< 0x10)
                    goto label_661f65
                
                int32_t var_e8_11 = var_a4.d
            label_661f5d:
                sub_6b4d5b()
            label_661f65:
                int32_t var_90_2 = 0xf
                int32_t var_94_2 = 0
                var_a4 = 0
            else
                uint32_t eax_19 =
                    ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8
                    | zx.d(*ecx_3)
                *arg1 = &ecx_3[4]
                
                if (sub_40ff90(arg1, &var_a4, eax_19) == 0)
                    if (var_90_1 u< 0x10)
                        goto label_661f65
                    
                    int32_t var_e8_12 = var_a4.d
                    goto label_661f5d
                
                char* eax_21 = *arg1
                
                if (&eax_21[4] u> arg1[1])
                    if (var_90_1 u< 0x10)
                        goto label_661f65
                    
                    int32_t var_e8_13 = var_a4.d
                    goto label_661f5d
                
                uint32_t edx_5 = zx.d(eax_21[1])
                uint32_t eax_22 = zx.d(*eax_21)
                uint32_t edi_4 = (zx.d(eax_21[3]) << 8 | zx.d(eax_21[2])) << 8
                *arg1 = &eax_21[4]
                uint32_t edi_7 = (edi_4 | edx_5) << 8 | eax_22
                uint32_t var_c8 = 0
                
                if (sub_5546f0(arg1, &var_c8) != 0)
                    if (edi_7 != 1)
                    label_661e01:
                        
                        if (ebx_7 != 4)
                            goto label_661e57
                        
                        int32_t var_b4 = 0
                        int32_t var_b0_1 = 0
                        int32_t var_ac_1 = 0
                        var_4_1.b = 5
                        sub_661b00(arg1, &var_b4)
                        sub_6691e0(&result_3, &var_b4)
                        var_4_1.b = 3
                        sub_662e20(&var_b4)
                    label_661e57:
                        uint32_t var_74_2 = ebx_7
                        sub_401180(&var_70, 0xffffffff, &var_a4, 0)
                        var_88.b = edi_7 == 1
                        var_88:1.b = var_c8 == 1
                        sub_662e60(&var_88, arg2)
                        sub_401110(&var_a4)
                        int32_t var_4_2 = 0xffffffff
                        sub_66e880(&var_88)
                        result = result_1 + 1
                        result_1 = result
                        
                        if (result s>= result_2)
                            goto label_661fc5
                        
                        continue
                    else
                        float var_cc
                        
                        if (ebx_7 == 1)
                            var_cc = 0f
                            
                            if (sub_5546f0(arg1, &var_cc) != 0)
                                float var_54_2 = var_cc
                                goto label_661e57
                        else if (ebx_7 == 2)
                            var_cc = fconvert.s(float.t(0))
                            
                            if (sub_40ff40(arg1, arg1, &var_cc) != 0)
                                float var_50_2 = fconvert.s(fconvert.t(var_cc))
                                goto label_661e57
                        else
                            if (ebx_7 != 3)
                                goto label_661e01
                            
                            var_cc = 0f
                            void var_2c
                            sub_402be0(&var_2c, 0x72d5aa)
                            var_4_1.b = 4
                            
                            if (sub_5546f0(arg1, &var_cc) == 0)
                                sub_401110(&var_2c)
                            else
                                if (sub_40ff90(arg1, &var_2c, var_cc) != 0)
                                    sub_401180(&var_4c, 0xffffffff, &var_2c, 0)
                                    var_4_1.b = 3
                                    sub_401110(&var_2c)
                                    goto label_661e57
                                
                                sub_401110(&var_2c)
                
                sub_401110(&var_a4)
            
            int32_t var_4_4 = 0xffffffff
            sub_66e880(&var_88)
            result.b = 0
            goto label_661fce
        
        result.b = 0

label_661fce:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d0)
return result
