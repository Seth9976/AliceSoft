// 函数: sub_67a020
// 地址: 0x67a020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
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
        else if (sub_40fea0(arg2, arg1 + 0x24).b == 0)
            result.b = 0
        else if (sub_40fea0(arg2, arg1 + 0x25).b == 0)
            result.b = 0
        else if (sub_40fea0(arg2, arg1 + 0x26).b == 0)
            result.b = 0
        else
            sub_5546f0(arg2, arg1 + 0x28)
            sub_5546f0(arg2, arg1 + 0x2c)
            sub_5546f0(arg2, arg1 + 0x30)
            uint32_t var_4c
            uint32_t var_5c
            
            if (sub_5546f0(arg2, &var_4c).b == 0)
                result.b = 0
            else
                uint32_t var_40
                
                if (sub_5546f0(arg2, &var_5c).b == 0)
                    result.b = 0
                else
                    uint32_t var_54
                    
                    if (sub_5546f0(arg2, &var_40).b == 0)
                        result.b = 0
                    else
                        uint32_t var_44
                        
                        if (sub_5546f0(arg2, &var_54).b == 0)
                            result.b = 0
                        else if (sub_5546f0(arg2, &var_44).b == 0)
                            result.b = 0
                        else
                            float var_60
                            
                            if (sub_40ff40(arg2, arg2, &var_64).b == 0)
                                result.b = 0
                            else
                                uint32_t var_58
                                
                                if (sub_40ff40(&var_60, arg2, &var_60).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_50
                                    
                                    if (sub_5546f0(arg2, &var_58).b == 0)
                                        result.b = 0
                                    else
                                        uint32_t var_48
                                        
                                        if (sub_5546f0(arg2, &var_50).b == 0)
                                            result.b = 0
                                        else if (sub_5546f0(arg2, &var_48).b == 0)
                                            result.b = 0
                                        else
                                            uint32_t eax_13 = var_5c
                                            uint32_t esi_1 = var_40
                                            *(arg1 + 0x34) = var_4c
                                            uint32_t edx_21 = var_54
                                            uint32_t ecx_16 = var_44
                                            *(arg1 + 0x38) = eax_13
                                            void var_3c
                                            int32_t* eax_14 =
                                                sub_407320(ecx_16, edx_21, esi_1, 0xff, &var_3c)
                                            long double x87_r7_1 = fconvert.t(var_64)
                                            uint32_t esi_2 = var_58
                                            *(arg1 + 0x3c) = *eax_14
                                            *(arg1 + 0x40) = eax_14[1]
                                            *(arg1 + 0x44) = eax_14[2]
                                            int32_t eax_15 = eax_14[3]
                                            *(arg1 + 0x4c) = fconvert.s(x87_r7_1)
                                            uint32_t edx_24 = var_50
                                            *(arg1 + 0x50) = fconvert.s(fconvert.t(var_60))
                                            uint32_t ecx_18 = var_48
                                            *(arg1 + 0x48) = eax_15
                                            int32_t* eax_16 =
                                                sub_407320(ecx_18, edx_24, esi_2, 0xff, &var_3c)
                                            *(arg1 + 0x54) = *eax_16
                                            *(arg1 + 0x58) = eax_16[1]
                                            *(arg1 + 0x5c) = eax_16[2]
                                            *(arg1 + 0x60) = eax_16[3]
                                            
                                            if (sub_5546f0(arg2, arg1 + 0x64).b == 0)
                                                result.b = 0
                                            else if (sub_5546f0(arg2, arg1 + 0x68).b == 0)
                                                result.b = 0
                                            else
                                                int32_t var_18_1 = 0xf
                                                int32_t var_1c_1 = 0
                                                char var_2c = 0
                                                int32_t var_4 = 0
                                                char eax_18 = sub_410070(arg2, &var_2c)
                                                char* ecx_22 = &var_2c
                                                char eax_19
                                                
                                                if (eax_18 != 0)
                                                    sub_6797c0(arg1, &var_2c)
                                                    eax_19 = sub_410070(arg2, arg1 + 0x130)
                                                    ecx_22 = &var_2c
                                                
                                                if (eax_18 == 0 || eax_19 == 0)
                                                    sub_401110(ecx_22)
                                                    result.b = 0
                                                else
                                                    *(arg1 + 0x14c) = 1
                                                    sub_401110(ecx_22)
                                                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
