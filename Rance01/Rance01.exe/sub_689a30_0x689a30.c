// 函数: sub_689a30
// 地址: 0x689a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg2

if (&result[4] u> arg2[1])
    result.b = 0
else
    *(arg1 + 0x5c) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    result = *arg2
    
    if (&result[4] u> arg2[1])
        result.b = 0
    else
        *(arg1 + 0x60) =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, arg1 + 0x64).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x68).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x6c).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x70).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x74).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x78).b == 0)
            result.b = 0
        else if (sub_40fea0(arg2, arg1 + 0x7c).b == 0)
            result.b = 0
        else if (sub_410070(arg2, arg1 + 0x80).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x9c).b == 0)
            result.b = 0
        else
            uint32_t var_30
            
            if (sub_5546f0(arg2, &var_54).b == 0)
                result.b = 0
            else
                uint32_t var_48
                
                if (sub_5546f0(arg2, &var_30).b == 0)
                    result.b = 0
                else
                    uint32_t var_38
                    
                    if (sub_5546f0(arg2, &var_48).b == 0)
                        result.b = 0
                    else
                        uint32_t var_40
                        
                        if (sub_5546f0(arg2, &var_38).b == 0)
                            result.b = 0
                        else
                            float var_50
                            
                            if (sub_5546f0(arg2, &var_40).b == 0)
                                result.b = 0
                            else
                                float var_4c
                                
                                if (sub_40ff40(arg2, arg2, &var_50).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_44
                                    
                                    if (sub_40ff40(&var_4c, arg2, &var_4c).b == 0)
                                        result.b = 0
                                    else
                                        uint32_t var_3c
                                        
                                        if (sub_5546f0(arg2, &var_44).b == 0)
                                            result.b = 0
                                        else
                                            uint32_t var_34
                                            
                                            if (sub_5546f0(arg2, &var_3c).b == 0)
                                                result.b = 0
                                            else if (sub_5546f0(arg2, &var_34).b == 0)
                                                result.b = 0
                                            else
                                                uint32_t eax_11 = var_30
                                                uint32_t esi_1 = var_48
                                                *(arg1 + 0xa0) = var_54
                                                uint32_t edx_21 = var_38
                                                uint32_t ecx_17 = var_40
                                                *(arg1 + 0xa4) = eax_11
                                                void var_2c
                                                int32_t* eax_12 =
                                                    sub_407320(ecx_17, edx_21, esi_1, 0xff, &var_2c)
                                                long double x87_r7_1 = fconvert.t(var_50)
                                                uint32_t esi_2 = var_44
                                                *(arg1 + 0xa8) = *eax_12
                                                *(arg1 + 0xac) = eax_12[1]
                                                *(arg1 + 0xb0) = eax_12[2]
                                                int32_t eax_13 = eax_12[3]
                                                *(arg1 + 0xb8) = fconvert.s(x87_r7_1)
                                                uint32_t edx_24 = var_3c
                                                *(arg1 + 0xbc) = fconvert.s(fconvert.t(var_4c))
                                                uint32_t ecx_19 = var_34
                                                *(arg1 + 0xb4) = eax_13
                                                int32_t* eax_14 =
                                                    sub_407320(ecx_19, edx_24, esi_2, 0xff, &var_2c)
                                                *(arg1 + 0xc0) = *eax_14
                                                *(arg1 + 0xc4) = eax_14[1]
                                                *(arg1 + 0xc8) = eax_14[2]
                                                int32_t esi_3 = 0
                                                *(arg1 + 0xcc) = eax_14[3]
                                                var_54 = 0
                                                
                                                if (sub_5546f0(arg2, &var_54).b == 0)
                                                    result.b = 0
                                                else if (var_54 s<= 0)
                                                label_689d4c:
                                                    
                                                    if (sub_5546f0(arg2, arg1 + 0xe0).b == 0)
                                                        result.b = 0
                                                    else
                                                        *(arg1 + 0xe4) = 1
                                                        result.b = 1
                                                else
                                                    while (true)
                                                        sub_402be0(&var_2c, 0x72d059)
                                                        int32_t var_4 = 0
                                                        struct _EXCEPTION_REGISTRATION_RECORD** 
                                                            ecx_22 = &var_2c
                                                        
                                                        if (sub_410070(arg2, &var_2c) == 0)
                                                            sub_401110(ecx_22)
                                                            break
                                                        
                                                        sub_405220(ecx_22, arg1 + 0xd0)
                                                        int32_t var_4_1 = 0xffffffff
                                                        sub_401110(&var_2c)
                                                        esi_3 += 1
                                                        
                                                        if (esi_3 s>= var_54)
                                                            goto label_689d4c
                                                    
                                                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
