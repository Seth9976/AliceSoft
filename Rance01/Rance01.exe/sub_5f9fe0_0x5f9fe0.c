// 函数: sub_5f9fe0
// 地址: 0x5f9fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725c58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_ebx
int32_t var_3c = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_30 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result = sub_407d30(arg1, sub_401180(&var_2c, 0xffffffff, arg2, 0), &var_30, arg1)
var_30 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_18 u>= 0x10)
    int32_t var_40_1 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
