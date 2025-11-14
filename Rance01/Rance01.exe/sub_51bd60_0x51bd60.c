// 函数: sub_51bd60
// 地址: 0x51bd60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result_1
void* result

if (sub_51b970(&var_2c, &result_1).b != 0)
    result = result_1
    
    if (result == 2)
        char* eax_7 = var_2c.d
        
        if (var_18 u< 0x10)
            eax_7 = &var_2c
        
        int32_t* var_40_5 = &var_34
        
        if (sub_6b51b5(eax_7, 0x757588) != 1)
        label_51be23:
            
            if (var_18 u< 0x10)
                result.b = 0
            else
                int32_t var_40_4 = var_2c.d
                sub_6b4d5b()
                result.b = 0
        else
            *arg1 = fconvert.s(float.t(var_34))
        label_51be6f:
            
            if (var_18 u>= 0x10)
                int32_t var_40_6 = var_2c.d
                sub_6b4d5b()
            
            result.b = 1
    else
        if (result == 3)
            char* eax_6 = var_2c.d
            
            if (var_18 u< 0x10)
                eax_6 = &var_2c
            
            float* var_40_3 = arg1
            
            if (sub_6b51b5(eax_6, 0x757594) == 1)
                goto label_51be6f
            
            goto label_51be23
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_40_2 = var_2c.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_18 u>= 0x10)
        int32_t var_40_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
