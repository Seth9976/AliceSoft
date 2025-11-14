// 函数: sub_5d10c0
// 地址: 0x5d10c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401180(arg2, 0xffffffff, arg3, 0)
int32_t var_4 = 0
*(arg2 + 0x1c) = &commonsystemdata::CProperty::`vftable'
*(arg2 + 0x20) = *(arg1 + 4)
*(arg2 + 0x24) = *(arg1 + 8)
*(arg2 + 0x28) = fconvert.s(fconvert.t(*(arg1 + 0xc)))
*(arg2 + 0x40) = 0xf
*(arg2 + 0x3c) = 0
arg2[0x2c] = 0
sub_401180(&arg2[0x2c], 0xffffffff, arg1 + 0x10, 0)
arg2[0x48] = *(arg1 + 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
