// 函数: sub_572f40
// 地址: 0x572f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a0c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[3].b = 0
__builtin_memset(&arg1[4], 0, 0x30)
int32_t var_4 = 0
long double x87_r7 = float.t(0)
arg1[0x10] = 4
arg1[0x11] = 4
arg1[0x12] = &chipmunk::CSurface8bpp::`vftable'{for `ISurface'}
arg1[0x13] = 1
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
__builtin_memset(&arg1[0x18], 0, 0x1c)
arg1[0x1f] = 4
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x24] = fconvert.s(x87_r7)
arg1[0x25] = &chipmunk::CSurface8bpp::`vftable'{for `ISurface'}
arg1[0x26] = 1
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x29] = 0
__builtin_memset(&arg1[0x2b], 0, 0x1c)
arg1[0x32] = 4
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x37] = fconvert.s(x87_r7)
var_4.b = 2
arg1[0x38] = 0
arg1[0x39] = 0x10
arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0
sub_401270(&arg1[0x3a], 0xd, 0x72ccac)
arg1[0x41] = 0x2bc
arg1[0x42].w = 0
arg1[0x44] = 0
arg1[0x43] = 0xffffffff
arg1[0x45] = 0xffffffff
__builtin_memset(&arg1[0x46], 0, 0x14)
arg1[0x4c] = 0
arg1[0x52] = 0xf
arg1[0x51] = 0
arg1[0x4d].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
