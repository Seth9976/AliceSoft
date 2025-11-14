// 函数: sub_679500
// 地址: 0x679500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715b2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUICheckBoxModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 7
arg1[0x53].b = 0
sub_401270(&arg1[0x4c], nullptr, 0x72d223)
sub_401270(&arg1[0x1b], nullptr, 0x72d24e)
sub_401270(&arg1[0x45], nullptr, 0x72d24f)
sub_401270(&arg1[0x3e], nullptr, 0x72d25f)
sub_401270(&arg1[0x37], nullptr, 0x72d26e)
sub_401270(&arg1[0x30], nullptr, 0x72d26f)
sub_401270(&arg1[0x29], nullptr, 0x72d28d)
sub_401270(&arg1[0x22], nullptr, 0x72d28e)
long double x87_r7 = float.t(0)
float var_24 = fconvert.s(x87_r7)
int32_t result = 0x10
float var_20 = fconvert.s(x87_r7)
int32_t var_10 = 0xff
int32_t var_3c = 0
int32_t var_38
__builtin_memcpy(&var_38, 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
__builtin_memcpy(&arg1[0xd], &var_3c, 0x30)
arg1[0x1a] = 0
arg1[0x19] = 0
arg1[0xc] = 0xc8
arg1[0xb] = 0xc8
arg1[0xa] = 0xc8
*(arg1 + 0x25) = 0
arg1[9].b = 1
arg1[8] = 0x10
arg1[7] = 0x10
arg1[6] = 0
arg1[5] = 0
arg1[4] = 0
arg1[2] = 0

if (arg1[0x51] u>= 0x10)
    int32_t var_74_1 = arg1[0x4c]
    sub_6b4d5b()
    result = 0x10

arg1[0x51] = 0xf
arg1[0x50] = 0
arg1[0x4c].b = 0

if (arg1[0x4a] u>= 0x10)
    int32_t var_74_2 = arg1[0x45]
    sub_6b4d5b()
    result = 0x10

arg1[0x4a] = 0xf
arg1[0x49] = 0
arg1[0x45].b = 0

if (arg1[0x43] u>= 0x10)
    int32_t var_74_3 = arg1[0x3e]
    sub_6b4d5b()
    result = 0x10

arg1[0x43] = 0xf
arg1[0x42] = 0
arg1[0x3e].b = 0

if (arg1[0x3c] u>= 0x10)
    int32_t var_74_4 = arg1[0x37]
    sub_6b4d5b()
    result = 0x10

arg1[0x3c] = 0xf
arg1[0x3b] = 0
arg1[0x37].b = 0

if (arg1[0x35] u>= 0x10)
    int32_t var_74_5 = arg1[0x30]
    sub_6b4d5b()
    result = 0x10

arg1[0x35] = 0xf
arg1[0x34] = 0
arg1[0x30].b = 0

if (arg1[0x2e] u>= 0x10)
    int32_t var_74_6 = arg1[0x29]
    sub_6b4d5b()
    result = 0x10

arg1[0x2e] = 0xf
arg1[0x2d] = 0
arg1[0x29].b = 0

if (arg1[0x27] u>= 0x10)
    int32_t var_74_7 = arg1[0x22]
    sub_6b4d5b()
    result = 0x10

arg1[0x27] = 0xf
arg1[0x26] = 0
arg1[0x22].b = 0

if (arg1[0x20] u>= 0x10)
    int32_t var_74_8 = arg1[0x1b]
    result = sub_6b4d5b()

arg1[0x20] = 0xf
arg1[0x1f] = 0
arg1[0x1b].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
