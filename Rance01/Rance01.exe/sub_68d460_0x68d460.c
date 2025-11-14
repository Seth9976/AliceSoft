// 函数: sub_68d460
// 地址: 0x68d460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715943
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIMultiTextBoxModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 4
arg1[0x3d].b = 0
sub_401270(&arg1[0x36], nullptr, &data_72cff6)
sub_401270(&arg1[0x2f], nullptr, &data_72cff7)
sub_401270(&arg1[0x28], nullptr, &data_72d003)
sub_401270(&arg1[0x21], nullptr, &data_72d015)
int128_t* var_68_4 = &data_72d016
arg1[0x1d] = 0x7d0
sub_401270(&arg1[0x16], nullptr, var_68_4)
long double x87_r7 = float.t(0)
int32_t result = 0xff
float var_24 = fconvert.s(x87_r7)
float var_20 = fconvert.s(x87_r7)
int32_t var_3c = 0
int32_t var_38
__builtin_memcpy(&var_38, 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0xff
__builtin_memcpy(&arg1[0xa], &var_3c, 0x30)
arg1[9].b = 1
arg1[8] = 0x1e
arg1[7] = 0xc8
arg1[6] = 0
arg1[5] = 0
arg1[4] = 0
arg1[2] = 0

if (arg1[0x3b] u>= 0x10)
    int32_t var_68_5 = arg1[0x36]
    result = sub_6b4d5b()

arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0

if (arg1[0x34] u>= 0x10)
    int32_t var_68_6 = arg1[0x2f]
    result = sub_6b4d5b()

arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0

if (arg1[0x2d] u>= 0x10)
    int32_t var_68_7 = arg1[0x28]
    result = sub_6b4d5b()

arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0

if (arg1[0x26] u>= 0x10)
    int32_t var_68_8 = arg1[0x21]
    result = sub_6b4d5b()

arg1[0x26] = 0xf
arg1[0x25] = 0
arg1[0x21].b = 0

if (arg1[0x1b] u>= 0x10)
    int32_t var_68_9 = arg1[0x16]
    result = sub_6b4d5b()

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
