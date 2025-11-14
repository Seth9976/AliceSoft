// 函数: sub_68dea0
// 地址: 0x68dea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg2

if (&result[4] u> arg2[1])
    result.b = 0
else
    *(arg1 + 0x10) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    result = *arg2
    
    if (&result[4] u> arg2[1])
        result.b = 0
    else
        *(arg1 + 0x14) =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, arg1 + 0x18).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x1c).b == 0)
            result.b = 0
        else if (sub_5546f0(arg2, arg1 + 0x20).b == 0)
            result.b = 0
        else
            uint32_t var_50
            
            if (sub_40fea0(arg2, arg1 + 0x24).b == 0)
                result.b = 0
            else
                uint32_t var_30
                
                if (sub_5546f0(arg2, &var_50).b == 0)
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
                            else if (sub_5546f0(arg2, &var_40).b == 0)
                                result.b = 0
                            else
                                int32_t ecx_12
                                result, ecx_12 = sub_40ff40(&var_54, arg2, &var_54)
                                float var_4c
                                
                                if (result.b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_44
                                    
                                    if (sub_40ff40(ecx_12, arg2, &var_4c).b == 0)
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
                                                uint32_t eax_9 = var_50
                                                uint32_t esi_1 = var_48
                                                *(arg1 + 0x2c) = var_30
                                                uint32_t ecx_16 = var_40
                                                uint32_t edx_18 = var_38
                                                *(arg1 + 0x28) = eax_9
                                                char var_2c
                                                int32_t* eax_10 =
                                                    sub_407320(ecx_16, edx_18, esi_1, 0xff, &var_2c)
                                                long double x87_r7_1 = fconvert.t(var_54)
                                                uint32_t esi_2 = var_44
                                                *(arg1 + 0x30) = *eax_10
                                                *(arg1 + 0x34) = eax_10[1]
                                                *(arg1 + 0x38) = eax_10[2]
                                                int32_t edx_20 = eax_10[3]
                                                *(arg1 + 0x40) = fconvert.s(x87_r7_1)
                                                uint32_t ecx_19 = var_34
                                                *(arg1 + 0x44) = fconvert.s(fconvert.t(var_4c))
                                                *(arg1 + 0x3c) = edx_20
                                                int32_t* eax_11 =
                                                    sub_407320(ecx_19, var_3c, esi_2, 0xff, &var_2c)
                                                *(arg1 + 0x48) = *eax_11
                                                *(arg1 + 0x4c) = eax_11[1]
                                                *(arg1 + 0x50) = eax_11[2]
                                                *(arg1 + 0x54) = eax_11[3]
                                                
                                                if (sub_410070(arg2, arg1 + 0x58).b == 0)
                                                    result.b = 0
                                                else if (sub_5546f0(arg2, arg1 + 0x74).b == 0)
                                                    result.b = 0
                                                else if (sub_5546f0(arg2, arg1 + 0x78).b == 0)
                                                    result.b = 0
                                                else if (sub_5546f0(arg2, arg1 + 0x7c).b == 0)
                                                    result.b = 0
                                                else if (sub_5546f0(arg2, arg1 + 0x80).b == 0)
                                                    result.b = 0
                                                else
                                                    int32_t var_18_1 = 0xf
                                                    int32_t var_1c_1 = 0
                                                    var_2c = 0
                                                    int32_t var_4 = 0
                                                    
                                                    if (sub_410070(arg2, &var_2c) != 0)
                                                        sub_68d6b0(arg1, &var_2c)
                                                        *(arg1 + 0xf4) = 1
                                                        sub_401110(&var_2c)
                                                        result.b = 1
                                                    else
                                                        sub_401110(&var_2c)
                                                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
