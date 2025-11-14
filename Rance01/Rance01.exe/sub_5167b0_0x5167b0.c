// 函数: sub_5167b0
// 地址: 0x5167b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722258
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_3
int32_t eax_2 = data_78c474 ^ &result_3
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5169c0(arg1)
int32_t result

if (arg2 == 0)
    result.b = 0
else
    int32_t edi_3 = (*(arg2 + 0x44) - *(arg2 + 0x40)) s>> 6
    
    if (edi_3 s<= 0)
        result.b = 1
    else
        result_3 = 0
        int32_t var_60_1 = 0
        int32_t var_5c_1 = 0
        sub_65a090(&result_3, edi_3)
        int32_t edx_1 = 0
        int32_t i = 0
        int32_t var_4 = 0
        int32_t result_4
        
        if (edi_3 s> 0)
            while (i s>= 0)
                if (i s>= (*(arg2 + 0x44) - *(arg2 + 0x40)) s>> 6)
                    break
                
                int32_t ecx_5 = *(*(arg2 + 0x40) + edx_1 + 0x1c)
                
                if (ecx_5 != 0xffffffff)
                    if (ecx_5 s< 0)
                        break
                    
                    if (ecx_5 s>= edi_3)
                        break
                
                result_4 = result_3
                *(result_4 + (i << 2)) = ecx_5
                i += 1
                edx_1 += 0x40
                
                if (i s>= edi_3)
                    goto label_51689a
            
            goto label_516876
        
        result_4 = result_3
    label_51689a:
        
        if (sub_4b58e0(&result_3, arg1 + 4).b != 0)
            sub_518070(arg1)
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            sub_401270(&var_4c, 5, ".bone")
            var_4.b = 1
            var_4.b = 2
            char var_30
            sub_401ef0(arg1 + 0x40, sub_401e10(&var_30, &var_4c))
            int32_t var_1c
            
            if (var_1c u>= 0x10)
                int32_t var_7c_4 = var_30.d
                sub_6b4d5b()
            
            var_4.b = 0
            int32_t var_1c_1 = 0xf
            int32_t var_20_1 = 0
            var_30 = 0
            
            if (var_38_1 u>= 0x10)
                int32_t var_7c_5 = var_4c.d
                sub_6b4d5b()
            
            char eax_9
            int80_t st0_1
            st0_1, eax_9 = sub_517790(arg3, arg1)
            
            if (eax_9 == 0)
            label_516876:
                result = result_3
                
                if (result != 0)
                    int32_t result_1 = result
                    sub_6b4d5b()
                
                result.b = 0
            else
                void* eax_10 = *(arg1 + 8)
                int32_t ecx_10 = *(arg1 + 0xc)
                
                if (eax_10 == ecx_10)
                label_51697f:
                    eax_10.b = 0
                else
                    while (*(eax_10 + 0x50) == 0)
                        eax_10 += 0xac
                        
                        if (eax_10 == ecx_10)
                            goto label_51697f
                    
                    eax_10.b = 1
                
                *(arg1 + 0x28) = eax_10.b
                result = result_3
                
                if (result != 0)
                    int32_t result_2 = result
                    sub_6b4d5b()
                
                result.b = 1
        else if (result_4 == 0)
            result.b = 0
        else
            int32_t result_5 = result_4
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_3)
return result
