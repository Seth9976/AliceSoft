// 函数: sub_5cbe60
// 地址: 0x5cbe60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = &var_2c
sub_5cb030(eax_5)
int32_t var_4 = 0
int32_t var_18

if (var_18 u>= 0x10)
    eax_5 = var_2c

int32_t result = (*(*arg1 + 4))(eax_5)

if (var_18 u>= 0x10)
    int32_t* var_38_1 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
