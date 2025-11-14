// 函数: sub_65c3a0
// 地址: 0x65c3a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c357
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_65e270(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
arg3[0x1c] = fconvert.s(float.t(1))
*arg3 = &dpparts::CViewWindow::`vftable'{for `dpparts::CWindow'}
arg3[0x17] = 0x1c
arg3[0x18] = 0x10
arg3[0x19] = 0x22
arg3[0x1a].b = 0
arg3[0x1b] = 0
arg3[0x1d].b = 0
arg3[0x1e] = 0
arg3[0x1f] = 0
arg3[0x20] = 0
__builtin_memset(&arg3[0x22], 0, 0x11)
__builtin_memset(&arg3[0x27], 0, 0x4c)
arg3[0x3b].b = 0
__builtin_memset(&arg3[0x3c], 0, 0x1d)
arg3[0x45] = 0
arg3[0x46] = 0
arg3[0x47] = 1
arg3[0x48] = 0
arg3[0x49] = 0
arg3[0x4a].b = 1
arg3[0x44] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&arg3[0x4c], 0, 0x14)
arg3[0x51].b = 1
arg3[0x4b] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
arg3[0x52] = &dpparts::CGuiToolbar::`vftable'
arg3[0x53] = 0
arg3[0x54] = 0
arg3[0x55] = 0
arg3[0x56] = 0
arg3[0x58] = 0
arg3[0x59].b = 0
arg3[0x5a] = 0
arg3[0x5b] = 0
arg3[0x5c] = 0
var_4.b = 7
sub_64d620(&arg3[0x5d])
arg3[0x6d] = 0
arg3[0x6e] = 0
arg3[0x6f] = 0
arg3[0x70] = 0
arg3[0x6c] = &dpparts::CBrush::`vftable'
arg3[0x71] = &dpparts::CBrush::`vftable'
arg3[0x72] = 0
arg3[0x73] = 0
arg3[0x74] = 0
arg3[0x75] = 0
arg3[0x76] = 0xff00ff
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
