// 函数: sub_5331f0
// 地址: 0x5331f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg4 = 0
arg2[0x27] = 0
sub_533150(arg1, arg2)
int32_t* result = *(arg6 + 0x18)

if (result s< 0)
labelid_2:
    result.b = 0
else
    int32_t ecx = *(arg6 + 8)
    
    if (result u>= (*(arg6 + 0xc) - ecx) s>> 2)
    labelid_2:
        result.b = 0
    else
        result = *(ecx + (result << 2))
        int32_t* result_1 = result
        
        if (result == 0)
        label_533464:
            result.b = 0
        else
            int32_t* ebp_1 = arg5 + 0xbc
            int32_t* var_40_1 = ebp_1
            
            if (ebp_1 == 0)
            label_533464_1:
                result.b = 0
            else
                int32_t eax_7
                int32_t edx_3
                edx_3:eax_7 = muls.dp.d(0x2e8ba2e9, ebp_1[1] - *ebp_1)
                int32_t edx_4 = edx_3 s>> 3
                int32_t ebx_3 = (edx_4 u>> 0x1f) + edx_4
                int32_t eax_10 = sub_539610(arg5, &arg2[0x18])
                sub_534c00(sub_5322a0(&arg2[4], ebx_3 + 1), arg2)
                int32_t ecx_5 = 0
                **arg2 = 0
                int32_t var_54_1 = 0
                
                if (ebx_3 s> 0)
                    int32_t var_5c_1 = 0
                    
                    do
                        result = *ebp_1 + var_5c_1
                        
                        if (arg2[0x1f].b == 0)
                        label_533317:
                            int32_t edx_8 = result_1[1]
                            uint32_t edi_1 = result[7]
                            
                            if (ecx_5 u>= edx_8 u>> 2)
                                goto label_533464_2
                            
                            if (edx_8 != 0)
                                edx_8 = *result_1
                            
                            uint32_t ebp_4 = *(edx_8 + (ecx_5 << 2))
                            int32_t var_18_1 = 0xf
                            int32_t var_1c_1 = 0
                            char var_2c = 0
                            int32_t var_4 = 0
                            uint32_t var_34 = edi_1
                            sub_401180(&var_2c, 0xffffffff, result, 0)
                            uint32_t var_30
                            
                            if (sub_534460(arg2, edi_1, ebp_4, &var_30, arg6).b == 0)
                                if (var_18_1 u>= 0x10)
                                    int32_t var_78_6 = var_2c.d
                                    sub_6b4d5b()
                                
                                goto label_533464_2
                            
                            void* edi_2 = *arg2
                            int32_t eax_14
                            int32_t edx_10
                            edx_10:eax_14 = muls.dp.d(0x38e38e39, arg2[5] - arg2[4])
                            int32_t edx_11 = edx_10 s>> 3
                            int32_t var_50 = (edx_11 u>> 0x1f) + edx_11
                            sub_416780(&var_50, edi_2 + 4)
                            sub_531e20(&var_34, &arg2[4])
                            arg2[0x27] += 1
                            int32_t var_4_1 = 0xffffffff
                            
                            if (var_18_1 u>= 0x10)
                                int32_t var_78_4 = var_2c.d
                                sub_6b4d5b()
                            
                            ecx_5 = var_54_1
                            ebp_1 = var_40_1
                            int32_t var_18_2 = 0xf
                            int32_t var_1c_2 = 0
                            var_2c = 0
                        else
                            int32_t edx_6 = result[0xa]
                            
                            if (edx_6 != 0xffffffff && edx_6 == eax_10)
                                goto label_533317
                        
                        var_5c_1 += 0x2c
                        ecx_5 += 1
                        var_54_1 = ecx_5
                    while (ecx_5 s< ebx_3)
                
                sub_533470(arg2)
                void* ecx_14
                result, ecx_14 = sub_5336f0(arg2, ebx_3, arg3, arg1)
                
                if (result.b == 0)
                label_533464_2:
                    result.b = 0
                else
                    sub_533150(ecx_14, arg2)
                    *arg4 = arg2[0x27]
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
