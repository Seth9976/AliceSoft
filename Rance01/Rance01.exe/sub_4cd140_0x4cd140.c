// 函数: sub_4cd140
// 地址: 0x4cd140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725beb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CMesh::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4 = 0
arg1[9].w = 0
*(arg1 + 0x26) = 0
sub_4be7c0(&arg1[0xa])
long double x87_r7 = float.t(0)
arg1[0x19] = 0x100
arg1[0x1a].w = 0x100
*(arg1 + 0x6a) = 0
arg1[0x1b] = fconvert.s(x87_r7)
arg1[0x1c] = fconvert.s(x87_r7)
arg1[0x1d] = fconvert.s(x87_r7)
arg1[0x1f].b = 0
arg1[0x1e] = fconvert.s(x87_r7)
long double x87_r6 = fconvert.t(3.40282347e+38f)
arg1[0x20] = fconvert.s(x87_r6)
long double x87_r5 = fconvert.t(-3.40282347e+38f)
arg1[0x21] = fconvert.s(x87_r5)
arg1[0x23] = fconvert.s(x87_r5)
arg1[0x25] = fconvert.s(x87_r5)
arg1[0x22] = fconvert.s(x87_r6)
arg1[0x24] = fconvert.s(x87_r6)
long double x87_r6_1 = float.t(1)
arg1[0x26] = fconvert.s(x87_r6_1)
arg1[0x27] = fconvert.s(x87_r6_1)
arg1[0x28] = fconvert.s(x87_r6_1)
arg1[0x29] = fconvert.s(x87_r6_1)
arg1[0x2a] = fconvert.s(x87_r7)
arg1[0x2b] = fconvert.s(x87_r7)
arg1[0x2c] = fconvert.s(x87_r7)
arg1[0x2d] = fconvert.s(x87_r7)
arg1[0x30] = 0
arg1[0x2e] = fconvert.s(x87_r7)
arg1[0x31] = 0
arg1[0x2f] = fconvert.s(x87_r7)
arg1[0x32] = 0
arg1[0x3c] = fconvert.s(x87_r7)
arg1[0x33] = 0
arg1[0x3d] = fconvert.s(x87_r7)
arg1[0x34].w = 0
*(arg1 + 0xd2) = 0
__builtin_memset(&arg1[0x35], 0, 0x1c)
arg1[0x3e].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
