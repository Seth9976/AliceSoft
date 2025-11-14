// 函数: sub_688bb0
// 地址: 0x688bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71968b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIListBoxModel::`vftable'{for `guiengine::CGUIModel'}
arg1[1] = 1
arg1[2] = arg2
arg1[3] = 0xffffffff
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_401270(&arg1[4], nullptr, 0x72d049)
int32_t var_4 = 0
long double x87_r7 = float.t(0)
arg1[0xb] = 0
__builtin_memcpy(&arg1[0xc], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
arg1[0x11] = fconvert.s(x87_r7)
arg1[0x12] = fconvert.s(x87_r7)
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0xff
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
__builtin_memcpy(&arg1[0x1a], 
    "\xc8\x00\x00\x00\x10\x00\x00\x00\x96\x00\x00\x00\x08\x00\x00\x00\x02\x00\x00\x00\x01", 0x15)
arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0
sub_401270(&arg1[0x20], nullptr, 0x72d04a)
long double x87_r7_1 = float.t(0)
arg1[0x27] = 0
arg1[0x2e] = fconvert.s(x87_r7_1)
arg1[0x2f] = fconvert.s(x87_r7_1)
arg1[0x28] = 0
arg1[0x29] = 0x10
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x33] = 0xff
arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x36] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x38] = 0xffffffff
arg1[0x39].b = 0
arg1[0x2d] = 0xff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
