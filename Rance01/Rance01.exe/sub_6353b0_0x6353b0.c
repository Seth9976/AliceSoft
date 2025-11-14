// 函数: sub_6353b0
// 地址: 0x6353b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ce13
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_65e270(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
*arg3 = &dpparts::CChildWindow::`vftable'{for `dpparts::CWindow'}
arg3[0x17] = 8
arg3[0x18] = 0xc
__builtin_memset(&arg3[0x19], 0, 0x14)
var_4.b = 1
sub_64e6c0(&arg3[0x1f])
__builtin_memset(&arg3[0x40], 0, 0x15)
arg3[0x47] = 0
arg3[0x48] = 0
arg3[0x49] = 1
arg3[0x4a] = 0
arg3[0x4b] = 0
arg3[0x4c].b = 1
arg3[0x46] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&arg3[0x4e], 0, 0x14)
arg3[0x53].b = 1
arg3[0x4d] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
arg3[0x54] = 0
arg3[0x55] = 0
arg3[0x56] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
