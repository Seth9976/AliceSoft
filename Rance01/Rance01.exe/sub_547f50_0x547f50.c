// 函数: sub_547f50
// 地址: 0x547f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726580
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* result_1 = arg5
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x6bca1af3, arg3[0x2f] - arg3[0x2e])
int32_t edx_1 = edx s>> 5
int32_t result

if (arg2 u>= (edx_1 u>> 0x1f) + edx_1)
    result.b = 0
else
    int32_t esi_1 = arg2 * 0x4c
    int32_t esi_2 = esi_1 + arg3[0x2e]
    
    if (esi_1 != neg.d(arg3[0x2e]))
        int32_t ecx_2 = arg3[0xa4]
        int32_t edx_3 = arg3[0xa3] - ecx_2
        arg3[0xa3] = ecx_2 + *esi_2
        int32_t var_58
        
        if (sub_552a10(esi_2, &arg3[0x77], &var_58) == 0)
            result.b = 0
        else
            char* eax_9 = arg4
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            char i
            
            do
                i = *eax_9
                eax_9 = &eax_9[1]
            while (i != 0)
            sub_401270(&var_4c, eax_9 - &eax_9[1], arg4)
            int32_t var_4 = 0
            int32_t var_60
            bool var_65_1 = sub_552d50(&arg3[0x77], &var_4c, &var_60).b == 0
            int32_t var_4_1 = 0xffffffff
            
            if (var_38_1 u>= 0x10)
                int32_t var_84_4 = var_4c.d
                sub_6b4d5b()
            
            if (var_65_1 != 0)
                result.b = 0
            else
                char var_30
                sub_402be0(&var_30, result_1)
                int32_t var_4_2 = 1
                bool var_65_2 = sub_552d50(&arg3[0x77], &var_30, &result_1).b == 0
                int32_t var_4_3 = 0xffffffff
                int32_t var_1c
                
                if (var_1c u>= 0x10)
                    int32_t var_84_6 = var_30.d
                    sub_6b4d5b()
                
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                var_30 = 0
                
                if (var_65_2 != 0)
                    result.b = 0
                else
                    int32_t edi_2 = var_58
                    result = result_1
                    int32_t ecx_8 = (arg3[0x7a] - arg3[0x79]) s>> 2
                    var_60 = var_60
                    int32_t result_2 = result
                    
                    if (edi_2 u>= ecx_8)
                        result.b = 0
                    else
                        int32_t* esi_4 = *(arg3[0x79] + (edi_2 << 2))
                        
                        if (esi_4 == 0)
                            result.b = 0
                        else if (sub_5501a0(2, esi_4, &var_60).b == 0)
                            result.b = 0
                        else if (sub_53ada0(arg3, edi_2).b == 0)
                            result.b = 0
                        else
                            *arg3[0x3af] = 6
                            arg3[0x3af] += 4
                            
                            while (arg3[0xa6].b != 0)
                                int16_t* eax_12 = arg3[0xa3]
                                int16_t ecx_11 = *eax_12
                                arg3[0xa3] = &eax_12[1]
                                sub_53b4f0(arg3, ecx_11)
                            
                            arg3[0xa6].b = 1
                            arg3[0xa3] = arg3[0xa4] + edx_3
                            arg3[0xac] -= 4
                            *arg1 = *arg3[0xac]
                            result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
