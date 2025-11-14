// 函数: sub_699840
// 地址: 0x699840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7286d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* const var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_esi
int32_t var_44 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_3c = &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_401180(&var_38, 0xffffffff, arg1, 0)
int32_t var_c_1 = 0
int32_t result = sub_408360(&var_3c)
var_3c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_24 u>= 0x10)
    int32_t var_48_1 = var_38.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
