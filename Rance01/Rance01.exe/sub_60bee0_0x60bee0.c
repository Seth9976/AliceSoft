// 函数: sub_60bee0
// 地址: 0x60bee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[3].b = arg2
int32_t ebx = 0x7352c0

if (arg2 == 0)
    ebx = 0x7352c4

int32_t var_2c
char* eax_6 = sub_61ac30(&var_2c, *arg1)
int32_t var_4 = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

int32_t var_60 = arg1[1] + 1
char* var_64 = eax_6
int32_t var_68 = ebx
char* eax_7 = sub_4104a0("%s %s(%d)")
var_4.b = 1
char* edx

if (*(eax_7 + 0x14) u< 0x10)
    edx = eax_7
else
    edx = *eax_7

char* eax_8 = edx
char i

do
    i = *eax_8
    eax_8 = &eax_8[1]
while (i != 0)
int32_t* result = sub_401270(&arg1[4], eax_8 - &eax_8[1], edx)
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_60_2 = var_48.d
    result = sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_3 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
