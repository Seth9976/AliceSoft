// 函数: sub_68d2e0
// 地址: 0x68d2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718635
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = float.t(0)
arg1[2] = arg2
*arg1 = &guiengine::CGUIMultiTextBoxModel::`vftable'{for `guiengine::CGUIModel'}
arg1[1] = 1
arg1[3] = 0xffffffff
arg1[7] = 0xc8
arg1[8] = 0x1e
arg1[9].b = 1
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[0xa] = 0
__builtin_memcpy(&arg1[0xb], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
arg1[0x10] = fconvert.s(x87_r7)
arg1[0x11] = fconvert.s(x87_r7)
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0xff
arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
sub_401270(&arg1[0x16], nullptr, 0x72cfd3)
int32_t var_4 = 0
arg1[0x1d] = 0x7d0
arg1[0x1e] = 0xc8
arg1[0x1f] = 0xc8
arg1[0x20] = 0xc8
arg1[0x26] = 0xf
arg1[0x25] = 0
arg1[0x21].b = 0
sub_401270(&arg1[0x21], nullptr, 0x72cfe9)
var_4.b = 1
arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0
sub_401270(&arg1[0x28], nullptr, 0x72cfea)
var_4.b = 2
arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0
sub_401270(&arg1[0x2f], nullptr, 0x72cfeb)
var_4.b = 3
arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0
sub_401270(&arg1[0x36], nullptr, 0x72cff5)
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0x3d].b = 0
arg1[0xf] = 0xff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
