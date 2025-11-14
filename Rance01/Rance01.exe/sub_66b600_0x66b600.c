// 函数: sub_66b600
// 地址: 0x66b600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_esi
int32_t var_50 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = sub_405c90(&var_48, arg1, U"\n")
int32_t var_4 = 0

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

sub_40da60(eax_5)
int32_t var_4_1 = 0xffffffff
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_54_1 = var_48
    sub_6b4d5b()

int32_t var_4_2 = 1
int32_t var_2c
int32_t* result = sub_402000(arg2 + 4, sub_405c90(&var_2c, arg1, U"\n"), 0, 0xffffffff)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_54_2 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
