// 函数: sub_699450
// 地址: 0x699450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_727738
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t var_44 = data_78c474 ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_3c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_401180(&var_38, 0xffffffff, arg6, 0)
int32_t var_c_1 = 0
void* result = sub_601be0(arg5, arg1, &var_3c, arg1, fconvert.s(fconvert.t(arg2)), 
    fconvert.s(fconvert.t(arg3)), arg4, arg5)
var_3c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_24 u>= 0x10)
    int32_t var_48_1 = var_38.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
