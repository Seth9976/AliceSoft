// 函数: sub_42a220
// 地址: 0x42a220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b53b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatEmitterData::`vftable'{for `IInterface'}
arg1[1] = 1
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401270(&arg1[2], nullptr, 0x72daf3)
int32_t var_4 = 0
long double x87_r7 = float.t(0)
arg1[0xa] = fconvert.s(x87_r7)
arg1[0xb] = fconvert.s(x87_r7)
arg1[9] = 0
arg1[0xe] = fconvert.s(x87_r7)
arg1[0xc] = 0
arg1[0xf] = fconvert.s(x87_r7)
arg1[0xd] = 0
arg1[0x10] = fconvert.s(x87_r7)
arg1[0x14] = 0
arg1[0x11] = fconvert.s(x87_r7)
arg1[0x19].b = 0
arg1[0x12] = fconvert.s(x87_r7)
arg1[0x1e].b = 0
arg1[0x13] = fconvert.s(x87_r7)
__builtin_memset(&arg1[0x27], 0, 0x14)
arg1[0x15] = fconvert.s(x87_r7)
arg1[0x16] = fconvert.s(x87_r7)
arg1[0x17] = fconvert.s(x87_r7)
arg1[0x18] = fconvert.s(x87_r7)
arg1[0x1a] = fconvert.s(x87_r7)
arg1[0x1b] = fconvert.s(x87_r7)
arg1[0x1c] = fconvert.s(x87_r7)
arg1[0x1d] = fconvert.s(x87_r7)
arg1[0x1f] = fconvert.s(x87_r7)
arg1[0x20] = fconvert.s(x87_r7)
arg1[0x21] = fconvert.s(x87_r7)
arg1[0x22] = fconvert.s(x87_r7)
arg1[0x23] = fconvert.s(x87_r7)
arg1[0x24] = fconvert.s(x87_r7)
arg1[0x25] = fconvert.s(x87_r7)
arg1[0x26] = fconvert.s(x87_r7)
arg1[0x2c] = fconvert.s(x87_r7)
arg1[0x2d] = fconvert.s(x87_r7)
arg1[0x2e] = fconvert.s(x87_r7)
arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0
sub_401270(&arg1[0x2f], nullptr, 0x72db22)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
