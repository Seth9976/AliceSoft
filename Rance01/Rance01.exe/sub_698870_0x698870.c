// 函数: sub_698870
// 地址: 0x698870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728178
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_3c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_401180(&var_38, 0xffffffff, arg5, 0)
int32_t var_c_1 = 0
int32_t ecx_1 = arg1[9]
int32_t var_74 = ecx_1
int32_t var_84 = ecx_1
char eax_9 = sub_601160(arg4, arg2, &var_3c, arg2, arg3, arg4, *arg1, arg1[1], arg1[2], arg1[3], 
    arg1[4], fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[6])))), arg1[8], ecx_1, arg1[0xa], 
    fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[7])))), arg6, arg7, arg8)
int32_t ebx_2
ebx_2.b = eax_9
var_3c = &common::CStringWrapper::`vftable'{for `IString'}

if (var_24 u>= 0x10)
    int32_t var_68_1 = var_38.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return ebx_2.b
