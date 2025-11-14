// 函数: sub_644dc0
// 地址: 0x644dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c875
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_65e270(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
*arg3 = &dpparts::CDPSpriteListWindow::`vftable'{for `dpparts::CWindow'}
arg3[0x17] = 0x18
arg3[0x18] = 8
arg3[0x19] = 0xc
arg3[0x1f] = 0xf
arg3[0x1e] = 0
arg3[0x1a].b = 0
sub_401270(&arg3[0x1a], 0xc, "          No")
var_4.b = 1
arg3[0x26] = 0xf
arg3[0x25] = 0
arg3[0x21].b = 0
sub_401270(&arg3[0x21], 8, " (    X,")
var_4.b = 2
arg3[0x2d] = 0xf
arg3[0x2c] = 0
arg3[0x28].b = 0
sub_401270(&arg3[0x28], 6, "    Y)")
var_4.b = 3
arg3[0x34] = 0xf
arg3[0x33] = 0
arg3[0x2f].b = 0
sub_401270(&arg3[0x2f], 8, " [  ")
var_4.b = 4
arg3[0x3b] = 0xf
arg3[0x3a] = 0
arg3[0x36].b = 0
sub_401270(&arg3[0x36], 6, 0x732dc8)
var_4.b = 5
arg3[0x42] = 0xf
arg3[0x41] = 0
arg3[0x3d].b = 0
sub_401270(&arg3[0x3d], 4, 0x732dd0)
var_4.b = 6
arg3[0x49] = 0xf
arg3[0x48] = 0
arg3[0x44].b = 0
sub_401270(&arg3[0x44], 0xb, "          Z")
var_4.b = 7
arg3[0x50] = 0xf
arg3[0x4f] = 0
arg3[0x4b].b = 0
sub_401270(&arg3[0x4b], 6, 0x732de4)
var_4.b = 8
arg3[0x57] = 0xf
arg3[0x56] = 0
arg3[0x52].b = 0
sub_401270(&arg3[0x52], 5, 0x732dec)
var_4.b = 9
arg3[0x5e] = 0xf
arg3[0x5d] = 0
arg3[0x59].b = 0
sub_401270(&arg3[0x59], 5, " AMap")
arg3[0x61].b = 0
int32_t edi_2 = arg3[0x5d] + arg3[0x56] + arg3[0x4f]
arg3[0x62] = 0
int32_t edi_3 = edi_2 + arg3[0x48]
arg3[0x63] = 0
arg3[0x60] = edi_3 + arg3[0x41] + arg3[0x3a] + arg3[0x25] + arg3[0x33] + arg3[0x2c] + arg3[0x1e]
arg3[0x64] = 0
arg3[0x65] = 0
arg3[0x66] = 0
arg3[0x68].b = 0
__builtin_memset(&arg3[0x69], 0, 0x15)
arg3[0x70] = 0
arg3[0x71] = 0
arg3[0x72] = 1
arg3[0x73] = 0
arg3[0x74] = 0
arg3[0x75].b = 1
arg3[0x6f] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&arg3[0x77], 0, 0x14)
arg3[0x7c].b = 1
arg3[0x76] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
arg3[0x7d] = 0
arg3[0x7e] = 0
arg3[0x7f] = 0
arg3[0x81] = 0
arg3[0x82] = 0
arg3[0x83] = 0
var_4.b = 0xf
sub_64dcc0(&arg3[0x85])
var_4.b = 0x10
sub_64e6c0(&arg3[0xa5])
arg3[0xc6] = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
