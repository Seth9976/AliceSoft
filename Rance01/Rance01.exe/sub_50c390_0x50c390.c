// 函数: sub_50c390
// 地址: 0x50c390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71afa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_ebx
int32_t var_40 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* eax_7 = sub_426250(&var_2c, arg2 + 4, arg1)
int32_t var_4 = 0
var_38 = 0xffffffff
int32_t var_34 = 0
int32_t var_30 = 0
int32_t esi
int32_t var_44_1 = esi
var_4.b = 1
int32_t ebx
ebx.b = sub_601f80(eax_7)
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_44_2 = var_2c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return ebx.b
