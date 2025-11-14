// 函数: sub_5dc800
// 地址: 0x5dc800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg1)(data_78c474 ^ &__saved_edi)
char result = 0
char* ecx_1 = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
int32_t var_4 = 0
void* eax_7 = data_797d9c

if (sub_5da970(eax_7 + 0xc, &var_2c) != 0)
    sub_5db340(*(eax_7 + 0x3c))
    result = 1

if (var_18 u>= 0x10)
    int32_t var_40_3 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
