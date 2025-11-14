// 函数: sub_5582e0
// 地址: 0x5582e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[3]
void* result = arg1[1]

if (result s< &ecx[1])
    result.b = 0
else
    if (result != 0)
        result = *arg1
    
    int32_t ecx_1 = *(ecx + result)
    arg1[3] = &ecx[1]
    
    if (ecx_1 s>= 0)
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        int32_t var_4 = 0
        
        if (sub_5568e0(arg1, &var_48).b != 0)
            int32_t var_4c
            
            if (sub_556800(arg1, &var_54) == 0)
                sub_401110(&var_48)
                result.b = 0
            else if (sub_556840(arg1, &var_4c) == 0)
                sub_401110(&var_48)
                result.b = 0
            else
                int32_t var_50
                int32_t* var_6c_5 = &var_50
                
                if (sub_537dc0(&var_50, &var_48, arg2 + 0x4c) == 0)
                    sub_401110(&var_48)
                    result.b = 0
                else
                    int32_t* eax_10 = sub_537d90(arg2 + 0x4c, var_50)
                    
                    if (eax_10 == 0)
                        sub_401110(&var_48)
                        result.b = 0
                    else
                        int32_t edx_1 = var_4c
                        
                        if (eax_10[0xe] == edx_1)
                            *arg4 = *eax_10 + var_54
                            sub_401110(&var_48)
                            result.b = 1
                        else
                            char* ecx_4 = var_48.d
                            *(arg3 + 0x10) = 1
                            
                            if (var_34_1 u< 0x10)
                                ecx_4 = &var_48
                            
                            int32_t var_6c_6 = edx_1
                            int32_t var_70_3 = eax_10[0xe]
                            char* var_74_1 = ecx_4
                            var_4.b = 1
                            sub_401ef0(arg3 + 0x14, sub_4104a0(0x74c910))
                            void var_2c
                            sub_401110(&var_2c)
                            sub_401110(&var_48)
                            result.b = 0
        else
            if (var_34_1 u>= 0x10)
                int32_t var_6c_2 = var_48.d
                sub_6b4d5b()
            
            result.b = 0
    else
        *arg4 = ecx_1
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
