// 函数: sub_4ad520
// 地址: 0x4ad520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s>= 0 && arg1 s< (*(arg4 + 0x2c) - *(arg4 + 0x28)) s/ 0xb4)
    void* ecx_1 = arg1 * 0xb4 + *(arg4 + 0x28)
    
    if (ecx_1 != 0)
        int32_t* result_4 = nullptr
        int32_t var_3c_1 = 0
        int32_t var_38_1 = 0
        sub_4addb0(3, &result_4)
        int32_t var_4 = 0
        int32_t var_50 = 0
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        sub_65a090(&var_50, 3)
        int32_t* result_5 = result_4
        int32_t ebx_1 = 0
        arg4 = ecx_1 + 4
        
        while (true)
            int32_t ecx_4 = *arg4
            int32_t eax_6 = var_50
            *(eax_6 + (ebx_1 << 2)) = ecx_4
            int32_t var_20 = 0
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            int32_t var_30 = 0
            int32_t var_2c_1 = 0
            int32_t var_28_1 = 0
            var_4.b = 3
            
            if (ecx_4 s>= 0)
                int32_t eax_7
                int32_t edx_7
                edx_7:eax_7 = muls.dp.d(0x2e8ba2e9, *(arg3 + 0x64) - *(arg3 + 0x60))
                int32_t edx_8 = edx_7 s>> 3
                
                if (ecx_4 s>= (edx_8 u>> 0x1f) + edx_8)
                    eax_6 = var_50
                else
                    int32_t* ecx_6 = ecx_4 * 0x2c + *(arg3 + 0x60)
                    *result_5 = *ecx_6
                    result_5[1] = ecx_6[1]
                    result_5[2] = ecx_6[2]
                    sub_4b55f0(&var_20, &ecx_6[3])
                    sub_4b55f0(&var_30, &ecx_6[7])
                    int32_t eax_14 = var_30
                    
                    if (eax_14 != 0)
                        int32_t var_6c_3 = eax_14
                        sub_6b4d5b()
                    
                    var_4.b = 1
                    int32_t eax_15 = var_20
                    var_30 = 0
                    int32_t var_2c_2 = 0
                    int32_t var_28_2 = 0
                    
                    if (eax_15 != 0)
                        int32_t var_6c_4 = eax_15
                        sub_6b4d5b()
                    
                    arg4 += 0x3c
                    ebx_1 += 1
                    result_5 = &result_5[3]
                    var_20 = 0
                    int32_t var_1c_2 = 0
                    int32_t var_18_2 = 0
                    
                    if (ebx_1 s< 3)
                        continue
                    
                    bool cond:0_1 = sub_4ad750(arg2, &result_4, &var_50) != 0
                    int32_t eax_17 = var_50
                    
                    if (cond:0_1)
                        if (eax_17 != 0)
                            int32_t var_6c_8 = eax_17
                            sub_6b4d5b()
                        
                        result = result_4
                        
                        if (result != 0)
                            struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result
                            sub_6b4d5b()
                        
                        result.b = 1
                        goto label_4ad731
                    
                    if (eax_17 != 0)
                        int32_t var_6c_6 = eax_17
                        sub_6b4d5b()
                    
                    result = result_4
                    
                    if (result == 0)
                        goto label_4ad709
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                    sub_6b4d5b()
                    result.b = 0
                    goto label_4ad731
            
            if (eax_6 != 0)
                int32_t var_6c_7 = eax_6
                sub_6b4d5b()
            
            result = result_4
            
            if (result != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                sub_6b4d5b()
            
            break

label_4ad709:
result.b = 0
label_4ad731:
fsbase->NtTib.ExceptionList = ExceptionList
return result
