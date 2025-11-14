// 函数: sub_6a90d0
// 地址: 0x6a90d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720c31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6b1670(arg5, arg3, arg4, 8, arg6, arg2, arg1, 0, arg7)
int32_t var_4 = 0
*arg3 = &dpsound::CSoundListWindow::`vftable'{for `dpsound::CWindow'}
arg3[0x17] = 0x18
arg3[0x18] = 0xf
arg3[0x19] = 0x10
arg3[0x1a] = arg8
arg3[0x1b] = 0x42
arg3[0x21] = 0xf
arg3[0x20] = 0
arg3[0x1c].b = 0
sub_401180(&arg3[0x1c], 0xffffffff, arg9, 0)
var_4.b = 1
arg3[0x28] = 0xf
arg3[0x27] = 0
arg3[0x23].b = 0
sub_401270(&arg3[0x23], 0x1a, "CSoundListWindowWindowPosX")
var_4.b = 2
arg3[0x2f] = 0xf
arg3[0x2e] = 0
arg3[0x2a].b = 0
sub_401270(&arg3[0x2a], 0x1a, "CSoundListWindowWindowPosY")
var_4.b = 3
arg3[0x36] = 0xf
arg3[0x35] = 0
arg3[0x31].b = 0
sub_401270(&arg3[0x31], 0x1c, "CSoundListWindowwWindowWidth")
var_4.b = 4
arg3[0x3d] = 0xf
arg3[0x3c] = 0
arg3[0x38].b = 0
sub_401270(&arg3[0x38], 0x1c, "CSoundListWindowWindowHeight")
var_4.b = 5
arg3[0x44] = 0xf
arg3[0x43] = 0
arg3[0x3f].b = 0
sub_401270(&arg3[0x3f], 0xb, "ShowsMaster")
var_4.b = 6
arg3[0x4b] = 0xf
arg3[0x4a] = 0
arg3[0x46].b = 0
sub_401270(&arg3[0x46], 8, "ShowsBGM")
var_4.b = 7
arg3[0x52] = 0xf
arg3[0x51] = 0
arg3[0x4d].b = 0
sub_401270(&arg3[0x4d], 7, "ShowsSE")
var_4.b = 8
arg3[0x59] = 0xf
arg3[0x58] = 0
arg3[0x54].b = 0
sub_401270(&arg3[0x54], 0xa, "ShowsVoice")
var_4.b = 9
arg3[0x60] = 0xf
arg3[0x5f] = 0
arg3[0x5b].b = 0
sub_401270(&arg3[0x5b], 0xc, "ShowsGimicSE")
var_4.b = 0xa
arg3[0x67] = 0xf
arg3[0x66] = 0
arg3[0x62].b = 0
sub_401270(&arg3[0x62], 0xe, "ShowsBackVoice")
var_4.b = 0xb
arg3[0x6e] = 0xf
arg3[0x6d] = 0
arg3[0x69].b = 0
sub_401270(&arg3[0x69], 8, "ShowsEtc")
var_4.b = 0xc
arg3[0x75] = 0xf
arg3[0x74] = 0
arg3[0x70].b = 0
sub_401270(&arg3[0x70], 0xe, 0x72cfb4)
var_4.b = 0xd
arg3[0x7c] = 0xf
arg3[0x7b] = 0
arg3[0x77].b = 0
sub_401270(&arg3[0x77], 0xc, 0x72cfc4)
var_4.b = 0xe
arg3[0x83] = 0xf
arg3[0x82] = 0
arg3[0x7e].b = 0
sub_401270(&arg3[0x7e], 0x14, 0x72cfd4)
var_4.b = 0xf
arg3[0x8a] = 0xf
arg3[0x89] = 0
arg3[0x85].b = 0
sub_401270(&arg3[0x85], 8, 0x72cfec)
var_4.b = 0x10
arg3[0x91] = 0xf
arg3[0x90] = 0
arg3[0x8c].b = 0
sub_401270(&arg3[0x8c], 0xa, 0x72cff8)
arg3[0x93] = 0
arg3[0x94] = 0
arg3[0x95] = 0
arg3[0x97] = 0
arg3[0x98] = 0
arg3[0x99] = 0
arg3[0x9b] = 0
arg3[0x9c] = 0
arg3[0x9d] = 0
arg3[0x9f] = 0
arg3[0xa0] = 0
arg3[0xa1] = 0
__builtin_memset(&arg3[0xa3], 0, 0x15)
arg3[0xa9] = 0x1010101
arg3[0xaa].w = 0x101
*(arg3 + 0x2aa) = 1
arg3[0xac] = 0
arg3[0xad] = 0
arg3[0xae] = 0
arg3[0xaf] = 1
arg3[0xb0] = 0
arg3[0xb1] = 0
arg3[0xb2].b = 1
arg3[0xab] = &dpsound::CVScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
__builtin_memset(&arg3[0xb4], 0, 0x18)
arg3[0xba].b = 1
arg3[0xb3] = &dpsound::CHScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
arg3[0xbb] = 0
arg3[0xbc] = 0
arg3[0xbd] = 0
arg3[0xbf] = 0
arg3[0xc0] = 0
arg3[0xc1] = 0
var_4.b = 0x18
sub_6a50b0(&arg3[0xc3])
var_4.b = 0x19
sub_6a5a30(&arg3[0xe2])
arg3[0x112] = 0
arg3[0x113] = 0x2710
arg3[0x114].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
