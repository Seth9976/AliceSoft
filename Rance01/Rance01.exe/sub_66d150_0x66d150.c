// 函数: sub_66d150
// 地址: 0x66d150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg2 != 0 && arg3 != 0 && arg4 != 0)
    int32_t __saved_edi
    int32_t var_2c
    sub_402be0(&var_2c, (**arg4)(data_78c474 ^ &__saved_edi))
    int32_t var_4 = 0
    sub_402be0(&var_48, (**arg3)())
    var_4.b = 1
    int32_t ebx
    ebx.b = sub_66a650(arg1 + 8, arg2, &var_48, &var_2c)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_60_2 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_60_3 = var_2c
        sub_6b4d5b()
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
