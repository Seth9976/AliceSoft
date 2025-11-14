// 函数: sub_679330
// 地址: 0x679330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7187df
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = float.t(0)
arg1[2] = arg2
*arg1 = &guiengine::CGUICheckBoxModel::`vftable'{for `guiengine::CGUIModel'}
arg1[1] = 1
arg1[3] = 0xffffffff
arg1[9].w = 1
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
*(arg1 + 0x26) = 0
arg1[0xa] = 0xc8
arg1[0xb] = 0xc8
arg1[0xc] = 0xc8
arg1[7] = 0x10
arg1[8] = 0x10
arg1[0xd] = 0
__builtin_memcpy(&arg1[0xe], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
arg1[0x13] = fconvert.s(x87_r7)
arg1[0x14] = fconvert.s(x87_r7)
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = 0xff
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x20] = 0xf
arg1[0x1f] = 0
arg1[0x1b].b = 0
sub_401270(&arg1[0x1b], nullptr, 0x72d1bb)
int32_t var_4 = 0
arg1[0x27] = 0xf
arg1[0x26] = 0
arg1[0x22].b = 0
sub_401270(&arg1[0x22], nullptr, 0x72d1be)
var_4.b = 1
arg1[0x2e] = 0xf
arg1[0x2d] = 0
arg1[0x29].b = 0
sub_401270(&arg1[0x29], nullptr, 0x72d1bf)
var_4.b = 2
arg1[0x35] = 0xf
arg1[0x34] = 0
arg1[0x30].b = 0
sub_401270(&arg1[0x30], nullptr, 0x72d1db)
var_4.b = 3
arg1[0x3c] = 0xf
arg1[0x3b] = 0
arg1[0x37].b = 0
sub_401270(&arg1[0x37], nullptr, 0x72d1f2)
var_4.b = 4
arg1[0x43] = 0xf
arg1[0x42] = 0
arg1[0x3e].b = 0
sub_401270(&arg1[0x3e], nullptr, 0x72d1f3)
var_4.b = 5
arg1[0x4a] = 0xf
arg1[0x49] = 0
arg1[0x45].b = 0
sub_401270(&arg1[0x45], nullptr, 0x72d20a)
var_4.b = 6
arg1[0x51] = 0xf
arg1[0x50] = 0
arg1[0x4c].b = 0
sub_401270(&arg1[0x4c], nullptr, 0x72d20b)
arg1[0x53].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
