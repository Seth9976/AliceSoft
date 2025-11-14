// 函数: sub_692600
// 地址: 0x692600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d510
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4132b0(&var_48)
int32_t var_4 = 0
var_4.b = 1
int32_t var_2c
sub_401ef0(&var_48, sub_6923f0(&var_2c, &var_48))
var_4.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_1 = var_2c
    sub_6b4d5b()

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_691220(arg1, arg2, &var_48)
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_60_3 = var_48
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
