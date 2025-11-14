// 函数: sub_4c2e10
// 地址: 0x4c2e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7152c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s< 0)
    result.b = 0
else if (arg1 s>= (*(arg2 + 0x2c) - *(arg2 + 0x28)) s/ 0xb4)
    result.b = 0
else
    void* ecx_1 = arg1 * 0xb4 + *(arg2 + 0x28)
    
    if (ecx_1 == 0)
        result.b = 0
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        sub_4addb0(3, &result_3)
        int32_t ebp_1 = 0
        int32_t var_4 = 0
        int32_t* result_4 = result_3
        int32_t* var_40_2 = ecx_1 + 4
        
        while (true)
            int32_t ecx_4 = *var_40_2
            int32_t var_1c = 0
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            int32_t var_2c = 0
            int32_t var_28_1 = 0
            int32_t var_24_1 = 0
            var_4.b = 2
            
            if (ecx_4 s>= 0)
                int32_t eax_6
                int32_t edx_6
                edx_6:eax_6 = muls.dp.d(0x2e8ba2e9, *(arg4 + 0x64) - *(arg4 + 0x60))
                int32_t edx_7 = edx_6 s>> 3
                
                if (ecx_4 s< (edx_7 u>> 0x1f) + edx_7)
                    int32_t* ecx_6 = ecx_4 * 0x2c + *(arg4 + 0x60)
                    *result_4 = *ecx_6
                    result_4[1] = ecx_6[1]
                    result_4[2] = ecx_6[2]
                    sub_4b55f0(&var_1c, &ecx_6[3])
                    sub_4b55f0(&var_2c, &ecx_6[7])
                    int32_t eax_13 = var_2c
                    
                    if (eax_13 != 0)
                        int32_t var_58_3 = eax_13
                        sub_6b4d5b()
                    
                    var_4.b = 0
                    int32_t eax_14 = var_1c
                    var_2c = 0
                    int32_t var_28_2 = 0
                    int32_t var_24_2 = 0
                    
                    if (eax_14 != 0)
                        int32_t var_58_4 = eax_14
                        sub_6b4d5b()
                    
                    var_40_2 = &var_40_2[0xf]
                    ebp_1 += 1
                    result_4 = &result_4[3]
                    var_1c = 0
                    int32_t var_18_2 = 0
                    int32_t var_14_2 = 0
                    
                    if (ebp_1 s>= 3)
                        break
                    
                    continue
            
            result = result_3
            goto label_4c2fb6
        
        bool cond:0_1 = sub_4c2fd0(arg3, &result_3) == 0
        result = result_3
        
        if (cond:0_1)
        label_4c2fb6:
            
            if (result == 0)
                result.b = 0
            else
                struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                sub_6b4d5b()
                result.b = 0
        else
            if (result != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                sub_6b4d5b()
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
