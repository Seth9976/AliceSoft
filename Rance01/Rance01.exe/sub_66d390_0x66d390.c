// 函数: sub_66d390
// 地址: 0x66d390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
result_1 = result

if (arg2 != 0 && result != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, nullptr, 0x72d49e)
    int32_t var_4 = 0
    result = *(arg1 + 8)
    
    if ((*(arg1 + 0xc) - result) s>> 2 s< arg2)
    label_66d488:
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_3 = var_2c.d
            result = sub_6b4d5b()
    else
        result = result[arg2 - 1]
        
        if (result == 0 || result[2] != 3)
            goto label_66d488
        
        sub_401180(&var_2c, 0xffffffff, &result[0xc], 0)
        char* eax_6 = var_2c.d
        
        if (var_18_1 u< 0x10)
            eax_6 = &var_2c
        
        result = (*(*result_1 + 4))(eax_6)
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_2 = var_2c.d
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
