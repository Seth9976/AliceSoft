// 函数: sub_636490
// 地址: 0x636490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71cdd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_2c
char* eax_8
int32_t* ecx_1
eax_8, ecx_1 = sub_4c1d70(arg1, &var_64, sub_405c90(&var_2c, arg3, " - "), &var_64)
char* var_88 = eax_8
var_4.b = 1
char var_48
sub_402c60(&var_48, 0x733770, ecx_1)
var_4.b = 2
sub_405150(&var_48, arg2)
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_78_1 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_78_2 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_78_3 = var_2c
    sub_6b4d5b()

int32_t ecx_4 = *arg2
int32_t result = *(ecx_4 + (arg2[1] - ecx_4) s/ 0x1c * 0x1c - 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
