// 函数: sub_4ae170
// 地址: 0x4ae170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4f7750(arg2, arg1)
int32_t var_4 = 0
arg2[4] = arg1[4]
arg2[5] = arg1[5]
arg2[6] = arg1[6]
arg2[7] = arg1[7]
arg2[8] = arg1[8]
arg2[9] = arg1[9]
sub_4f7750(&arg2[0xa], &arg1[0xa])
arg2[0xe] = arg1[0xe]
arg2[0xf] = arg1[0xf]
arg2[0x10] = arg1[0x10]
arg2[0x11] = arg1[0x11]
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
