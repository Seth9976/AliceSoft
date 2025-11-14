// 函数: sub_56fef0
// 地址: 0x56fef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t edi
int32_t var_34 = edi
int32_t var_38 = data_78c474 ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5 = arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&var_2c, eax_5 - &eax_5[1], arg1)
int32_t var_4 = 0
int32_t result = sub_570360(&var_2c)

if (var_18 u>= 0x10)
    int32_t var_3c_2 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
