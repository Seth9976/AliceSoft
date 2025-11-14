// 函数: sub_401e10
// 地址: 0x401e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_esi
int32_t var_3c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = 0
int32_t var_2c
int32_t* ecx
int32_t edx
sub_401940(&var_2c, edx, ecx)
int32_t var_4 = 0
int32_t* eax_6 = sub_402000(&var_2c, arg2, 0, 0xffffffff)
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401180(arg1, 0xffffffff, eax_6, 0)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_40_1 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return arg1
