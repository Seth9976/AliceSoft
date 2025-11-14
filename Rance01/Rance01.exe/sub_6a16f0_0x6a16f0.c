// 函数: sub_6a16f0
// 地址: 0x6a16f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_esi
int32_t var_38 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* eax_6 = sub_67f6e0(&var_2c, arg1, arg3)
int32_t var_4 = 0

if (eax_6[5] u>= 0x10)
    eax_6 = *eax_6

int32_t result = (*(*arg2 + 4))(eax_6)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_3c_2 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
