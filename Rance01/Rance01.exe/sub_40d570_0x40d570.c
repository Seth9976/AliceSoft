// 函数: sub_40d570
// 地址: 0x40d570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    char* eax_5 = sub_6b26f0(&var_2c)
    int32_t var_4 = 0
    
    if (*(eax_5 + 0x14) u>= 0x10)
        eax_5 = *eax_5
    
    result = (*(*arg1 + 4))(eax_5)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_38_2 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
