// 函数: sub_66dcf0
// 地址: 0x66dcf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726410
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double result

if (arg2 != 0 && arg3 != 0)
    result = float.t(0)
    
    if (arg4 != 0)
        int32_t* eax_5 = *arg4
        var_4c = fconvert.s(result)
        int32_t var_2c
        sub_402be0(&var_2c, (*eax_5)(eax_4))
        int32_t var_4 = 0
        char var_48
        sub_402be0(&var_48, (**arg3)())
        var_4.b = 1
        int32_t ebx
        ebx.b = sub_66aa80(arg1 + 8, arg2, &var_48, &var_2c, &var_4c) == 0
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_64_2 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_64_3 = var_2c
            sub_6b4d5b()
        
        if (ebx.b != 0)
            result = float.t(0)
        else
            result = fconvert.t(var_4c)
else
    result = float.t(0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
