// 函数: sub_50ceb0
// 地址: 0x50ceb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71afe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_68 = 0
int32_t var_2c
int32_t edx
sub_401ab0(&var_2c, edx, arg1)
int32_t var_4 = 0
char var_48
int32_t* eax_6
int32_t edx_2
eax_6, edx_2 = sub_401800(0, arg1, &var_48)
var_4.b = 1
char var_64
int32_t* var_84 = sub_4b3c20(eax_6, edx_2, &var_2c, &var_64)
var_4.b = 2
sub_402c60(arg2, ".3de", nullptr)
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_80_1 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_80_2 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_80_3 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return arg2
