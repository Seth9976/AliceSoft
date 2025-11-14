// 函数: sub_4037c0
// 地址: 0x4037c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t var_30 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_6 = sub_405c90(&var_2c, arg1, U"\n")
int32_t var_4 = 0

if (eax_6[5] u>= 0x10)
    eax_6 = *eax_6

void* result = sub_40da60(eax_6)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_34_1 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
