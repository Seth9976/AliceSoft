// 函数: sub_66de10
// 地址: 0x66de10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7189c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg5
result_1 = result

if (arg2 != 0 && arg4 != 0 && result != 0)
    int32_t* var_48
    sub_402be0(&var_48, 0x72d4ea)
    int32_t var_4 = 0
    int32_t var_2c
    sub_402be0(&var_2c, (**arg4)(eax_4))
    var_4.b = 1
    char var_64
    sub_402be0(&var_64, (**arg3)())
    var_4.b = 2
    int32_t ebx
    ebx.b = sub_66aaf0(arg1 + 8, arg2, &var_64, &var_2c, &var_48) == 0
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_80_2 = var_64.d
        sub_6b4d5b()
    
    var_4.b = 0
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_80_3 = var_2c
        sub_6b4d5b()
    
    if (ebx.b == 0)
        int32_t* eax_14 = var_48
        int32_t var_34
        
        if (var_34 u< 0x10)
            eax_14 = &var_48
        
        (*(*result_1 + 4))(eax_14)
    
    result = sub_401110(&var_48)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
