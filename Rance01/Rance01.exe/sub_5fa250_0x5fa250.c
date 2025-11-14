// 函数: sub_5fa250
// 地址: 0x5fa250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dc58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_esi
int32_t var_40 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_34 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_401180(&var_30, 0xffffffff, arg1, 0)
int32_t var_4 = 0
int32_t result = sub_408360(&var_34)
var_34 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_1c u>= 0x10)
    int32_t var_44_1 = var_30.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
