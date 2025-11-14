// 函数: sub_4f6ae0
// 地址: 0x4f6ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714c9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401180(arg2, 0xffffffff, arg1, 0)
int32_t var_4 = 0
*(arg2 + 0x1c) = arg1[7]
sub_4f6bc0(&arg2[0x20], &arg1[8])
var_4.b = 1
sub_614380(&arg2[0x30], &arg1[0xc])
var_4.b = 2
sub_4f6ca0(&arg2[0x40], &arg1[0x10])
arg2[0x50] = arg1[0x14].b
arg2[0x51] = *(arg1 + 0x51)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
