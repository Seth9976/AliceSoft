// 函数: sub_432890
// 地址: 0x432890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b4c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_f8
int32_t eax_2 = data_78c474 ^ &var_f8
int32_t __saved_edi
int32_t var_10c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_f8 = arg1
int32_t var_4 = 0
void var_e8
sub_5ee3e0(sub_5edbc0(arg5, arg6, &var_e8, arg4, arg7, arg8), arg3 + 0x78)
int32_t var_4_1 = 0xffffffff
sub_4329b0(&var_e8)
int32_t var_4_2 = 1
void var_7c
sub_5ee3e0(sub_5edbc0(arg2, arg6, &var_7c, var_f8, arg7, arg8), arg3 + 0x88)
int32_t result = sub_4329b0(&var_7c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_f8)
return result
