// 函数: sub_4df390
// 地址: 0x4df390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void var_30
char result

if (sub_51b970(&var_2c, &var_30) != 0)
    if (sub_402680(0x755348, &var_2c) == 0)
        if (sub_402680(0x755350, &var_2c) != 0)
            *arg1 = 1
            goto label_4df45d
        
        if (sub_402680(0x755358, &var_2c) != 0)
            *arg1 = 2
            goto label_4df45d
        
        char* eax_6 = var_2c.d
        
        if (var_18 u< 0x10)
            eax_6 = &var_2c
        
        char* var_40_3 = eax_6
        sub_4e4340(0x755364)
        sub_401110(&var_2c)
        result = 0
    else
        *arg1 = 0
    label_4df45d:
        
        if (var_18 u>= 0x10)
            int32_t var_40_2 = var_2c.d
            sub_6b4d5b()
        
        result = 1
else
    if (var_18 u>= 0x10)
        int32_t var_40_1 = var_2c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
