// 函数: sub_698420
// 地址: 0x698420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dc58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_ebx
int32_t var_40 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_34 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_401180(&var_30, 0xffffffff, arg2, 0)
int32_t var_44 = arg15
int32_t var_48_1 = arg14
int32_t var_4c = arg13
int32_t var_50 = arg12
int32_t var_54 = arg11
int32_t var_58 = arg10
int32_t var_5c = arg9
int32_t var_60 = arg8
int32_t var_64 = arg7
int32_t var_68 = arg6
int32_t var_6c = arg5
int32_t var_70 = arg4
int32_t var_4 = 0
char result = sub_6009d0(arg3, arg4, &var_34, arg1, arg3)
var_34 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_1c u>= 0x10)
    int32_t var_44_1 = var_30.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
