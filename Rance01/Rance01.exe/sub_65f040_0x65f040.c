// 函数: sub_65f040
// 地址: 0x65f040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718b2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpparts::DPParts::`vftable'{for `IJaffaDebugPlugin'}
__builtin_memcpy(&arg1[1], 
    "\x01\x00\x00\x00\x20\x03\x00\x00\x58\x02\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00", 0x14)
arg1[6] = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_401270(&arg1[7], 8, 0x7317d8)
int32_t var_4 = 0
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
sub_401270(&arg1[0xe], 0xb, 0x7317e4)
arg1[0x15] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
