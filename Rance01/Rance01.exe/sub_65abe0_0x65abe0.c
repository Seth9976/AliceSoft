// 函数: sub_65abe0
// 地址: 0x65abe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721108
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_65e270(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
*arg3 = &dpparts::CTabWindow::`vftable'{for `dpparts::CWindow'}
arg3[0x17] = 0x18
arg3[0x18] = 8
arg3[0x19] = 0xc
arg3[0x1a].w = 0
*(arg3 + 0x6a) = 0
__builtin_memset(&arg3[0x1b], 0, 0x11)
arg3[0x20] = 0
arg3[0x21] = 0
sub_64dcc0(&arg3[0x22])
arg3[0x42] = 0
arg3[0x43] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
