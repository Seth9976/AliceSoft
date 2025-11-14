// 函数: sub_698530
// 地址: 0x698530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7286d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* const var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_ebx
int32_t var_44 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
var_3c = &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
int32_t var_c_1 = 0
char result = sub_600bf0(arg3, sub_401180(&var_38, 0xffffffff, arg2, 0), &var_3c, arg1, arg3)
var_3c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_24 u>= 0x10)
    int32_t var_48_1 = var_38.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
