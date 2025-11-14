// 函数: sub_4b3270
// 地址: 0x4b3270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724dcb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_15c
int32_t eax_2 = data_78c474 ^ &var_15c
fsbase->NtTib.ExceptionList = &ExceptionList
float result

if (arg2 != 6)
    result.b = 1
else
    result = *(arg1 + 0x84)
    int32_t __saved_edi
    
    if (result s< 0 || result s>= *(arg1 + 0x80) || *(arg1 + 0x40) == 0)
        result.b = 1
    else if ((*(**(arg1 + 0x40) + 0x10))(data_78c474 ^ &__saved_edi).b == 0)
        result.b = 1
    else
        result = *(arg1 + 0x84)
        
        if (result s< 0)
            result.b = 0
        else
            int32_t ecx_1 = *(arg1 + 0x44)
            
            if (result s>= (*(arg1 + 0x48) - ecx_1) s>> 2)
                result.b = 0
            else
                void* ecx_2 = *(ecx_1 + (result << 2))
                
                if (ecx_2 != 0)
                    int32_t ecx_3 = *(arg1 + 0x54)
                    
                    if (result s>= (*(arg1 + 0x58) - ecx_3) s>> 2)
                        result.b = 0
                    else
                        int32_t edi_1 = *(ecx_3 + (result << 2))
                        
                        if (edi_1 == 0)
                            result.b = 0
                        else
                            struct sealengine::CDrawParam::VTable* var_100
                            sub_4b97d0(&var_100)
                            int32_t var_c_1 = 0
                            (*(*arg4 + 0x94))(1)
                            (*(*arg4 + 0x98))(1)
                            (*(*arg4 + 0xa0))(0)
                            int32_t var_88_1 = edi_1
                            (*(*arg4 + 0x80))(0, 1)
                            (*(*arg4 + 0x8c))(0, 5)
                            (*(*arg4 + 0x90))(0, 5)
                            
                            if ((*(**(arg1 + 0x40) + 0x20))().b == 0)
                                result.b = 0
                            else
                                long double x87_r7_1 = float.t(1)
                                char var_28_1 = 1
                                var_15c = fconvert.s(x87_r7_1)
                                float var_158_1 = fconvert.s(x87_r7_1)
                                float var_154_1 = fconvert.s(x87_r7_1)
                                float var_150_1 = fconvert.s(x87_r7_1)
                                long double x87_r7_2 = float.t(0)
                                float var_b0_1 = var_15c
                                var_15c = fconvert.s(x87_r7_2)
                                float var_ac_1 = var_158_1
                                float var_a4_1 = var_150_1
                                float var_90_1 = fconvert.s(fconvert.t(*(arg1 + 0x88)))
                                float var_a8_1 = var_154_1
                                float var_a0_1 = var_15c
                                float var_24_1 = fconvert.s(fconvert.t(*(arg1 + 0x8c)))
                                float var_98_1 = fconvert.s(x87_r7_2)
                                float var_9c_1 = fconvert.s(x87_r7_2)
                                float var_94_1 = fconvert.s(x87_r7_2)
                                float var_140
                                sub_42e110(&var_140)
                                void var_fc
                                __builtin_memcpy(&var_fc, &var_140, 0x40)
                                int32_t var_bc_1 = 0
                                int32_t var_80_1 = 0
                                int32_t var_78_1 = 0
                                int32_t var_74_1 = 0
                                int32_t var_70_1 = 0
                                
                                if (*(ecx_2 + 0x10) == 0)
                                    result = *(arg1 + 0x3c)
                                    int32_t var_170_9
                                    
                                    if (result == 0)
                                        var_170_9 = 0
                                    label_4b3501:
                                        (*(*arg4 + 0x84))(var_170_9)
                                        goto label_4b350c
                                    
                                    if (result == 1)
                                        var_170_9 = 2
                                        goto label_4b3501
                                    
                                    result.b = 0
                                else
                                    result = *(arg1 + 0x3c)
                                    
                                    if (result != 0)
                                        if (result == 1)
                                            (*(*arg4 + 0x84))(3)
                                            goto label_4b350c
                                        
                                        result.b = 0
                                    else
                                        (*(*arg4 + 0x84))(1)
                                    label_4b350c:
                                        
                                        if (sub_509e40(arg3, &var_100).b == 0)
                                            result.b = 0
                                        else
                                            result.b = (*(**(arg1 + 0x40) + 0x2c))().b != 0
                else
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_15c)
return result
