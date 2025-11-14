// 函数: sub_56b0b0
// 地址: 0x56b0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t var_30 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_56b310(arg1)

if (result != 0)
    sub_56b140(&var_2c, arg1)
    int32_t var_4 = 0
    result = sub_570360(&var_2c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_34_3 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
