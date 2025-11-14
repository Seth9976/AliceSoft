// 函数: sub_61af60
// 地址: 0x61af60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713ccb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = arg4
arg3[6] = 0xf
arg3[5] = 0
arg3[1].b = 0
sub_401180(&arg3[1], 0xffffffff, arg2, 0)
int32_t var_4 = 0
arg3[0xd] = 0xf
arg3[0xc] = 0
arg3[8].b = 0
sub_401180(&arg3[8], 0xffffffff, arg5, 0)
arg3[0xf] = arg6
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
