// 函数: sub_68b750
// 地址: 0x68b750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_34 = fconvert.s(float.t(0))
var_3c = 1
int32_t var_38 = arg2
char var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, nullptr, 0x72d025)
int32_t var_4 = 0
int32_t* result = sub_68bb50(&var_3c, arg1 + 8)

if (var_18 u>= 0x10)
    int32_t var_54_1 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
