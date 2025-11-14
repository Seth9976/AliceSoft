// 函数: sub_596d40
// 地址: 0x596d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg1)(data_78c474 ^ &__saved_edi)
char* ecx_1 = eax_6
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
int32_t var_4 = 0
char var_2c
sub_401d60(&var_2c, sub_401270(&var_48, ecx_1 - &ecx_1[1], eax_6), &var_48)
var_4.b = 1
char result = sub_604500(&var_2c)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (var_34 u>= 0x10)
    int32_t var_60_3 = var_48.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
