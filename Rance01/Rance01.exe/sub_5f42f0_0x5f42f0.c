// 函数: sub_5f42f0
// 地址: 0x5f42f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dd78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_88 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_5ee3e0(sub_5edbc0(arg4, arg5, &var_7c, arg3, arg6, arg1), *(arg2 + 0xc) + 0x98)
int32_t result = sub_4329b0(&var_7c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
