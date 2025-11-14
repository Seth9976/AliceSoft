// 函数: sub_6322e0
// 地址: 0x6322e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5 = arg2
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&var_2c, eax_5 - &eax_5[1], arg2)
int32_t var_4 = 0
void** result = sub_632fc0(&var_2c, *(arg1 + 0x14), arg1 + 0x24, *(arg1 + 0x1c))

if (var_18 u>= 0x10)
    int32_t var_40_2 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
