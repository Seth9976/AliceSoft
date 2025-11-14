// 函数: sub_40ac30
// 地址: 0x40ac30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72096c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
sub_5740f0(&arg1[3])
int32_t var_4 = 0
long double x87_r7 = float.t(0)
arg1[0x5f] = 0
arg1[0x60] = 0x10
arg1[0x61] = 0xffffffff
arg1[0x62] = fconvert.s(x87_r7)
arg1[0x63] = fconvert.s(x87_r7)
arg1[0x64] = 0xff000000
sub_570a90(&arg1[0x65])
var_4.b = 1
sub_40c210(&arg1[0x9d])
arg1[0xb1] = 0
arg1[0xb2] = 0
arg1[0xb3] = 0
arg1[0xb4].b = 1
arg1[0xb5] = 0
arg1[0xb6] = &chipmunk::CDrawD3DPluginManager::`vftable'{for `IDrawD3DPluginManager'}
arg1[0xb7] = 1
arg1[0xbc] = fconvert.s(float.t(0))
arg1[0xba] = 0
arg1[0xbb] = 0
arg1[0xbd] = 0
arg1[0xb8] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
