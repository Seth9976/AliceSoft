// 函数: sub_5cf0b0
// 地址: 0x5cf0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e0d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5d03c0(*(*(arg2 + 0x24) + 4))
void* eax_6 = *(arg2 + 0x24)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg2 + 0x24)
*eax_7 = eax_7
void* eax_8 = *(arg2 + 0x24)
*(eax_8 + 8) = eax_8
*(arg2 + 0x28) = 0
uint32_t result = *arg1
int32_t edi_1 = arg1[1]

if (result == edi_1)
label_5cf33e:
    result.b = 1
else if (result + 4 u> edi_1)
    result.b = 0
else
    uint32_t edi_8 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    int32_t ebp_1 = 0
    void* var_60 = result + 4
    
    if (edi_8 s<= 0)
    label_5cf33e_1:
        result.b = 1
    else
        while (true)
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            int32_t var_4 = 0
            
            if (sub_410070(&var_60, &var_4c).b == 0)
                if (var_38_1 u>= 0x10)
                    int32_t var_7c_10 = var_4c.d
                    sub_6b4d5b()
                
                break
            
            char* ecx_3 = var_60
            
            if (&ecx_3[4] u> edi_1)
                if (var_38_1 u< 0x10)
                    break
                
                int32_t var_7c_11 = var_4c.d
                sub_6b4d5b()
                result.b = 0
                goto label_5cf344
            
            uint32_t ecx_4 = zx.d(*ecx_3)
            result =
                (((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8 | ecx_4) - 1
            var_60 = &ecx_3[4]
            
            if (result u> 3)
                if (var_38_1 u< 0x10)
                    break
                
                int32_t var_7c_12 = var_4c.d
                sub_6b4d5b()
                result.b = 0
                goto label_5cf344
            
            char* ecx_6
            
            switch (result)
                case 0
                    ecx_6 = &var_4c
                    uint32_t var_50
                    
                    if (sub_5546f0(&var_60, &var_50) == 0)
                        goto label_5cf31d
                    
                    void* eax_17 = sub_5d0240(ecx_6, arg2 + 0x20)
                    uint32_t ecx_7 = var_50
                    *(eax_17 + 4) = 1
                    *(eax_17 + 8) = ecx_7
                label_5cf2c7:
                    int32_t var_4_1 = 0xffffffff
                    sub_401110(&var_4c)
                    ebp_1 += 1
                    
                    if (ebp_1 s>= edi_8)
                        goto label_5cf33e_1
                    
                    continue
                case 1
                    ecx_6 = &var_4c
                    float var_54
                    
                    if (sub_40ff40(ecx_4, &var_60, &var_54) == 0)
                        goto label_5cf31d
                    
                    void* eax_19 = sub_5d0240(ecx_6, arg2 + 0x20)
                    *(eax_19 + 0xc) = fconvert.s(fconvert.t(var_54))
                    *(eax_19 + 4) = 2
                    goto label_5cf2c7
                case 2
                    int32_t var_1c_1 = 0xf
                    int32_t var_20_1 = 0
                    char var_30 = 0
                    var_4.b = 1
                    
                    if (sub_410070(&var_60, &var_30) != 0)
                        void* eax_21 = sub_5d0240(&var_4c, arg2 + 0x20)
                        *(eax_21 + 4) = 3
                        sub_401180(eax_21 + 0x10, 0xffffffff, &var_30, 0)
                        sub_401110(&var_30)
                        goto label_5cf2c7
                    
                    sub_401110(&var_30)
                    ecx_6 = &var_4c
                label_5cf31d:
                    sub_401110(ecx_6)
                    result.b = 0
                    goto label_5cf344
                case 3
                    ecx_6 = &var_4c
                    uint32_t var_58
                    
                    if (sub_5546f0(&var_60, &var_58) == 0)
                        goto label_5cf31d
                    
                    uint32_t ebx_4
                    ebx_4.b = var_58 != 0
                    void* eax_23 = sub_5d0240(ecx_6, arg2 + 0x20)
                    *(eax_23 + 4) = 4
                    *(eax_23 + 0x2c) = ebx_4.b
                    goto label_5cf2c7
        
        result.b = 0

label_5cf344:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
