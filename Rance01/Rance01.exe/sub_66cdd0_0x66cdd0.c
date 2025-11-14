// 函数: sub_66cdd0
// 地址: 0x66cdd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 0 && arg3 != 0 && arg4 != 0)
    int32_t edx_1 = **arg4
    int32_t var_4c = 0
    int32_t var_2c
    sub_402be0(&var_2c, edx_1(eax_4))
    int32_t var_4 = 0
    char var_48
    sub_402be0(&var_48, (**arg3)())
    var_4.b = 1
    bool cond:0_1 = sub_66a4c0(arg1 + 8, arg2, &var_48, &var_2c, &var_4c) == 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_68_2 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_68_3 = var_2c
        sub_6b4d5b()
    
    int32_t eax_13
    eax_13.b = cond:0_1 != 0
    result = (eax_13 - 1) & var_4c
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
