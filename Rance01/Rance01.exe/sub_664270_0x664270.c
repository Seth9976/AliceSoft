// 函数: sub_664270
// 地址: 0x664270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x2e8ba2e9, arg3[1] - *arg3)
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t edi = 0
int32_t result_1 = result

if (result s> 0)
    var_5c = 0
    
    while (true)
        if (*(*arg3 + var_5c + 0x14) == 4)
            int32_t* esi_1 = nullptr
            int32_t ecx_5 = (arg2[1] - *arg2) s>> 4
            int32_t var_54_1 = 0
            
            if (ecx_5 s> 0)
                while (true)
                    int32_t eax_8 = *arg2
                    void* ecx_6 = esi_1 + eax_8
                    void* eax_9 = *(*(esi_1 + eax_8) + (edi << 2))
                    
                    if (*(eax_9 + 8) != 4)
                        int32_t var_34_1 = 0xf
                        int32_t var_38_1 = 0
                        char var_48 = 0
                        sub_401270(&var_48, 0x2c, 0x7309b4)
                        int32_t var_4 = 0
                        sub_6685f0(&var_48, arg1)
                        
                        if (var_34_1 u>= 0x10)
                            int32_t var_74_3 = var_48.d
                            sub_6b4d5b()
                    else if ((*(ecx_6 + 4) - *ecx_6) s>> 2 s< edi)
                        int32_t var_4_1 = 1
                        sub_6685f0(sub_4104a0(0x7309e4), arg1)
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            int32_t var_2c
                            int32_t var_74_4 = var_2c
                            sub_6b4d5b()
                            result.b = 0
                            goto label_664383
                    else
                        sub_6691e0(eax_9 + 0x4c, *arg3 + var_5c + 4)
                        int32_t eax_11 = *(*(esi_1 + *arg2) + (edi << 2))
                        
                        if (sub_664270(eax_11 + 0x5c, eax_11 + 0x4c).b != 0)
                            int32_t eax_14 = var_54_1 + 1
                            esi_1 = &esi_1[4]
                            var_54_1 = eax_14
                            
                            if (eax_14 s< ecx_5)
                                continue
                            
                            result = result_1
                            break
                    
                    result.b = 0
                    goto label_664383
        
        var_5c += 0x58
        edi += 1
        
        if (edi s>= result)
            break

result.b = 1
label_664383:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
