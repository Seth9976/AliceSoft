// 函数: sub_4ffea0
// 地址: 0x4ffea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401180(arg2, 0xffffffff, arg1, 0)
int32_t var_4 = 0
arg2[0x1c] = arg3
sub_501270(&arg2[0x20], arg4)
*(arg2 + 0x30) = 0
*(arg2 + 0x34) = 0
*(arg2 + 0x38) = 0
*(arg2 + 0x40) = 0
*(arg2 + 0x44) = 0
void* eax_4
eax_4.b = sub_405360(arg1, "(sprite)", 8) != 0xffffffff
arg2[0x48] = eax_4.b
*(arg2 + 0x4c) = 0
*(arg2 + 0x50) = 0
*(arg2 + 0x54) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
