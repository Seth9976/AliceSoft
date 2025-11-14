// 函数: sub_6043b0
// 地址: 0x6043b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
sub_401ef0(&var_2c, arg2 - 0x1c)
int32_t var_4 = 0
sub_401ef0(arg2 - 0x1c, arg1)
int128_t* result = sub_6040d0(arg1, nullptr, (arg2 - arg1 - 0x1c) s/ 0x1c, &var_2c)

if (var_18 u>= 0x10)
    int32_t var_44_1 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
