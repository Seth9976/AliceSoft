// 函数: sub_560760
// 地址: 0x560760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401180(arg1, 0xffffffff, arg2, 0)
int32_t var_4 = 0
*(arg1 + 0x30) = 0xf
*(arg1 + 0x2c) = 0
arg1[0x1c] = 0
sub_401180(&arg1[0x1c], 0xffffffff, arg3, 0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
