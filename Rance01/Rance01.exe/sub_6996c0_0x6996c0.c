// 函数: sub_6996c0
// 地址: 0x6996c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726ac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t var_40 = data_78c474 ^ &var_3c
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_34 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_401180(&var_30, 0xffffffff, arg1, 0)
int32_t var_4 = 0
int32_t result_1
sub_407f10(&var_34, &result_1)
var_34 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_1c u>= 0x10)
    int32_t var_44_1 = var_30.d
    sub_6b4d5b()

int32_t result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
