// 函数: sub_6854e0
// 地址: 0x6854e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715a60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIHScrollbarModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 4
arg1[0x36].b = 0
sub_401270(&arg1[0x2f], nullptr, 0x72d08b)
sub_401270(&arg1[0x28], nullptr, 0x72d09a)
sub_401270(&arg1[0x21], nullptr, 0x72d09b)
sub_401270(&arg1[0x1a], nullptr, 0x72d0aa)
sub_401270(&arg1[0x13], nullptr, 0x72d0ab)
arg1[0x11] = fconvert.s(float.t(0))
int32_t result = 0x18
arg1[0x12] = 1
arg1[0x10] = 0
__builtin_memcpy(&arg1[0xa], 
    "\x00\x01\x00\x00\x18\x00\x00\x00\x18\x00\x00\x00\x18\x00\x00\x00\x64\x00\x00\x00\x01\x00\x00\x00", 
    0x18)
arg1[9] = 0
arg1[8] = 0
arg1[7].b = 1
arg1[6] = 0
arg1[5] = 0
arg1[4] = 0
arg1[2] = 0

if (arg1[0x34] u>= 0x10)
    int32_t var_34_1 = arg1[0x2f]
    result = sub_6b4d5b()

arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0

if (arg1[0x2d] u>= 0x10)
    int32_t var_34_2 = arg1[0x28]
    result = sub_6b4d5b()

arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0

if (arg1[0x26] u>= 0x10)
    int32_t var_34_3 = arg1[0x21]
    result = sub_6b4d5b()

arg1[0x26] = 0xf
arg1[0x25] = 0
arg1[0x21].b = 0

if (arg1[0x1f] u>= 0x10)
    int32_t var_34_4 = arg1[0x1a]
    result = sub_6b4d5b()

arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0

if (arg1[0x18] u>= 0x10)
    int32_t var_34_5 = arg1[0x13]
    result = sub_6b4d5b()

arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
