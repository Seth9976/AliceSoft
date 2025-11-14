// 函数: sub_60a7d0
// 地址: 0x60a7d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713e4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = *arg1
arg2[1] = arg1[1]
arg2[2] = arg1[2]
arg2[8] = 0xf
arg2[7] = 0
arg2[3].b = 0
sub_401180(&arg2[3], 0xffffffff, &arg1[3], 0)
int32_t var_4 = 0
arg2[0xf] = 0xf
arg2[0xe] = 0
arg2[0xa].b = 0
sub_401180(&arg2[0xa], 0xffffffff, &arg1[0xa], 0)
arg2[0x11] = arg1[0x11]
arg2[0x12] = arg1[0x12]
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
