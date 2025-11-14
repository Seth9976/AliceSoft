// 函数: sub_4042e0
// 地址: 0x4042e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718269
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_esi
int32_t var_5c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_50 = 0
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
char* var_4c = arg2
*arg2 = 0
int32_t var_4 = 0
var_50 = 1
char var_48
sub_401940(&var_48, arg2, arg1)
int32_t var_4_1 = 1
int32_t var_2c
sub_401c00(&var_2c, &var_48)
var_4_1.b = 3
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_60_1 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
sub_4043c0(&var_2c, arg2)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_2 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return arg2
