// 函数: sub_692ee0
// 地址: 0x692ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71842b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = float.t(0)
*arg2 = &guiengine::CGUITextBoxModel::`vftable'{for `guiengine::CGUIModel'}
arg2[2] = arg1
arg2[3] = 0xffffffff
arg2[7] = 0xc8
arg2[8] = 0x1e
arg2[4] = 0
arg2[5] = 0
arg2[6] = 0
arg2[1] = 1
arg2[9].b = 1
arg2[0xa] = 0
__builtin_memcpy(&arg2[0xb], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
arg2[0x10] = fconvert.s(x87_r7)
arg2[0x11] = fconvert.s(x87_r7)
arg2[0x12] = 0
arg2[0x13] = 0
arg2[0x14] = 0
arg2[0x15] = 0xff
arg2[0x1b] = 0xf
arg2[0x1a] = 0
arg2[0x16].b = 0
sub_401270(&arg2[0x16], nullptr, 0x72cec7)
int32_t var_4 = 0
arg2[0x1d] = 0x7d0
arg2[0x1e] = 0xc8
arg2[0x1f] = 0xc8
arg2[0x20] = 0xc8
arg2[0x26] = 0xf
arg2[0x25] = 0
arg2[0x21].b = 0
sub_401270(&arg2[0x21], nullptr, 0x72cee3)
arg2[0xc] = 0
arg2[0xd] = 0
arg2[0xe] = 0
arg2[0x28].b = 0
arg2[0xf] = 0xff
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
