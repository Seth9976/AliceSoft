// 函数: sub_698ef0
// 地址: 0x698ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_727770
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_3c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_401180(&var_38, 0xffffffff, arg6, 0)
int32_t var_c_1 = 0
struct IString::common::CStringWrapper::VTable* const var_5c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_401180(&var_58, 0xffffffff, arg2, 0)
var_c_1.b = 1
char result = sub_601630(arg3, &var_5c, &var_3c, arg3, &var_5c, arg4, arg1, arg1, arg5)
var_5c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_44 u>= 0x10)
    int32_t var_78_1 = var_58.d
    sub_6b4d5b()

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0
var_3c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_24 u>= 0x10)
    int32_t var_78_2 = var_38.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
