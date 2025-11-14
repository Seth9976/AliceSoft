// 函数: sub_6a6ff0
// 地址: 0x6a6ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6b1670(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
*arg3 = &dpsound::COptionWindow::`vftable'{for `dpsound::CWindow'}
arg3[0x17] = 0xf
arg3[0x18] = 0x10
arg3[0x19].w = 0
*(arg3 + 0x66) = 0
__builtin_memset(&arg3[0x1a], 0, 0x11)
__builtin_memset(&arg3[0x20], 0, 0x18)
arg3[0x26].b = 1
arg3[0x1f] = &dpsound::CHScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
arg3[0x28] = 0
arg3[0x29] = 0
arg3[0x2a] = 0
arg3[0x2b] = 1
arg3[0x2c] = 0
arg3[0x2d] = 0
arg3[0x2e].b = 1
arg3[0x27] = &dpsound::CVScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
var_4.b = 2
sub_6b12e0(&arg3[0x2f])
arg3[0x47] = 0
arg3[0x48] = 0
arg3[0x49] = 0
arg3[0x4a] = 0
arg3[0x4c].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
