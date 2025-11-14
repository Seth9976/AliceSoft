// 函数: sub_651d00
// 地址: 0x651d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7211a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_65e270(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
*arg3 = &dpparts::CPartsWindow::`vftable'{for `dpparts::CWindow'}
arg3[0x17] = 8
arg3[0x18] = 0xc
arg3[0x19] = 0x18
arg3[0x1a] = 0
arg3[0x1b] = 0
arg3[0x1c] = 0
arg3[0x1d] = 0
arg3[0x23] = 0xf
arg3[0x22] = 0
arg3[0x1e].b = 0
sub_401270(&arg3[0x1e], nullptr, 0x72d633)
var_4.b = 1
arg3[0x25] = 0
arg3[0x26] = 0
sub_64dcc0(&arg3[0x27])
var_4.b = 2
sub_64e6c0(&arg3[0x47])
__builtin_memset(&arg3[0x68], 0, 0x15)
arg3[0x6f] = 0
arg3[0x70] = 0
arg3[0x71] = 1
arg3[0x72] = 0
arg3[0x73] = 0
arg3[0x74].b = 1
arg3[0x6e] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&arg3[0x76], 0, 0x14)
arg3[0x7b].b = 1
arg3[0x75] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
arg3[0x7c] = 0
arg3[0x7d] = 0
arg3[0x7e] = 0
arg3[0x80] = 0
arg3[0x81] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
