// 函数: sub_6a5fb0
// 地址: 0x6a5fb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71839a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6b1670(arg5, arg3, arg4, 0, arg2, arg1, arg6, 0x87, 0)
int32_t var_4 = 0
*arg3 = &dpsound::CMainWindow::`vftable'{for `dpsound::CWindow'}
arg3[0x17] = 0x21
arg3[0x1d] = 0xf
arg3[0x1c] = 0
arg3[0x18].b = 0
sub_401270(&arg3[0x18], 0x1a, "Software\AliceSoft\DPSound")
var_4.b = 1
arg3[0x24] = 0xf
arg3[0x23] = 0
arg3[0x1f].b = 0
sub_401270(&arg3[0x1f], 0x15, "CMainWindowWindowPosX")
var_4.b = 2
arg3[0x2b] = 0xf
arg3[0x2a] = 0
arg3[0x26].b = 0
sub_401270(&arg3[0x26], 0x15, "CMainWindowWindowPosY")
var_4.b = 3
arg3[0x32] = 0xf
arg3[0x31] = 0
arg3[0x2d].b = 0
sub_401270(&arg3[0x2d], 0x16, "CMainWindowWindowWidth")
var_4.b = 4
arg3[0x39] = 0xf
arg3[0x38] = 0
arg3[0x34].b = 0
sub_401270(&arg3[0x34], 0x17, "CMainWindowWindowHeight")
__builtin_memcpy(&arg3[0x3b], 
    "\x01\x00\x00\x00\x02\x00\x00\x00\x08\x00\x00\x00\xd2\xd2\xd2\x00\x90\x01\x00\x00\xf2\x00\x00\x00\x"
"14\x00\x00\x00\x32\x00\x00\x00", 
    0x20)
__builtin_memset(&arg3[0x43], 0, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
