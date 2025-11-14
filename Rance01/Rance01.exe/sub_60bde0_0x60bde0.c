// 函数: sub_60bde0
// 地址: 0x60bde0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d92b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = arg4
arg3[1] = arg1
arg3[2] = arg2
arg3[3].b = 1
arg3[9] = 0xf
arg3[8] = 0
var_4c = arg3
arg3[4].b = 0
int32_t var_4 = 0
int32_t var_2c
char* eax_6 = sub_61ac30(&var_2c, *arg3)
var_4.b = 1

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

int32_t var_64 = arg3[1] + 1
char* var_68 = eax_6
var_4.b = 2
sub_401ef0(&arg3[4], sub_4104a0(0x7352b4))
int32_t var_34

if (var_34 u>= 0x10)
    char var_48
    int32_t var_64_1 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
char var_48_1 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_64_2 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return arg3
