// 函数: sub_6a4c90
// 地址: 0x6a4c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7183fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpsound::CDPSoundSystem::`vftable'{for `IJaffaDebugPlugin'}
__builtin_memcpy(&arg1[1], 
    "\x01\x00\x00\x00\x20\x03\x00\x00\x58\x02\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00", 0x14)
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
sub_401270(&arg1[6], 9, 0x72d2c8)
int32_t var_4 = 0
arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
sub_401270(&arg1[0xd], 0x10, 0x72d2d4)
arg1[0x14] = 0
arg1[0x15] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
