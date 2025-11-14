// 函数: sub_4e9dc0
// 地址: 0x4e9dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717997
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = &sealengine::CEmitter::`vftable'
arg2[1] = *(arg1 + 4)
arg2[7] = 0xf
arg2[6] = 0
arg2[2].b = 0
sub_401180(&arg2[2], 0xffffffff, arg1 + 8, 0)
int32_t var_4 = 0
arg2[9] = *(arg1 + 0x24)
arg2[0xa] = *(arg1 + 0x28)
arg2[0xb] = fconvert.s(fconvert.t(*(arg1 + 0x2c)))
arg2[0xc] = *(arg1 + 0x30)
arg2[0xd] = *(arg1 + 0x34)
arg2[0xe] = fconvert.s(fconvert.t(*(arg1 + 0x38)))
arg2[0xf] = fconvert.s(fconvert.t(*(arg1 + 0x3c)))
arg2[0x10] = fconvert.s(fconvert.t(*(arg1 + 0x40)))
arg2[0x11] = fconvert.s(fconvert.t(*(arg1 + 0x44)))
arg2[0x12] = fconvert.s(fconvert.t(*(arg1 + 0x48)))
arg2[0x13] = fconvert.s(fconvert.t(*(arg1 + 0x4c)))
arg2[0x14] = *(arg1 + 0x50)
arg2[0x15] = *(arg1 + 0x54)
arg2[0x16] = *(arg1 + 0x58)
arg2[0x17] = *(arg1 + 0x5c)
arg2[0x18] = fconvert.s(fconvert.t(*(arg1 + 0x60)))
arg2[0x19] = *(arg1 + 0x64)
arg2[0x1a] = *(arg1 + 0x68)
arg2[0x1b] = fconvert.s(fconvert.t(*(arg1 + 0x6c)))
arg2[0x1c] = fconvert.s(fconvert.t(*(arg1 + 0x70)))
arg2[0x1d] = fconvert.s(fconvert.t(*(arg1 + 0x74)))
arg2[0x1e] = fconvert.s(fconvert.t(*(arg1 + 0x78)))
arg2[0x1f].b = *(arg1 + 0x7c)
arg2[0x20] = fconvert.s(fconvert.t(*(arg1 + 0x80)))
arg2[0x21] = fconvert.s(fconvert.t(*(arg1 + 0x84)))
arg2[0x22] = fconvert.s(fconvert.t(*(arg1 + 0x88)))
arg2[0x23] = fconvert.s(fconvert.t(*(arg1 + 0x8c)))
arg2[0x24] = *(arg1 + 0x90)
sub_4ea490(&arg2[0x25], arg1 + 0x94)
var_4.b = 1
arg2[0x2e] = 0xf
arg2[0x2d] = 0
arg2[0x29].b = 0
sub_401180(&arg2[0x29], 0xffffffff, arg1 + 0xa4, 0)
var_4.b = 2
arg2[0x30] = fconvert.s(fconvert.t(*(arg1 + 0xc0)))
arg2[0x31] = fconvert.s(fconvert.t(*(arg1 + 0xc4)))
arg2[0x32] = fconvert.s(fconvert.t(*(arg1 + 0xc8)))
sub_4ea6d0(&arg2[0x33], arg1 + 0xcc)
var_4.b = 3
sub_4ea8f0(&arg2[0x37], arg1 + 0xdc)
var_4.b = 4
sub_4ea8f0(&arg2[0x3b], arg1 + 0xec)
var_4.b = 5
sub_4ea8f0(&arg2[0x3f], arg1 + 0xfc)
var_4.b = 6
sub_4eaaf0(&arg2[0x43], arg1 + 0x10c)
var_4.b = 7
sub_4d41f0(&arg2[0x47], arg1 + 0x11c)
var_4.b = 8
arg2[0x4b].b = *(arg1 + 0x12c)
*(arg2 + 0x12d) = *(arg1 + 0x12d)
arg2[0x4c] = *(arg1 + 0x130)
sub_6b05e0(&arg2[0x4d], arg1 + 0x134)
var_4.b = 9
arg2[0x51] = *(arg1 + 0x144)
arg2[0x52] = *(arg1 + 0x148)
arg2[0x53] = *(arg1 + 0x14c)
arg2[0x54] = fconvert.s(fconvert.t(*(arg1 + 0x150)))
arg2[0x55] = *(arg1 + 0x154)
arg2[0x56] = *(arg1 + 0x158)
sub_6b05e0(&arg2[0x57], arg1 + 0x15c)
var_4.b = 0xa
sub_4bf370(&arg2[0x5b], arg1 + 0x16c)
var_4.b = 0xb
sub_4bf370(&arg2[0x5f], arg1 + 0x17c)
var_4.b = 0xc
sub_4bf370(&arg2[0x63], arg1 + 0x18c)
var_4.b = 0xd
sub_4bf370(&arg2[0x67], arg1 + 0x19c)
var_4.b = 0xe
sub_4bf370(&arg2[0x6b], arg1 + 0x1ac)
var_4.b = 0xf
sub_4bf370(&arg2[0x6f], arg1 + 0x1bc)
var_4.b = 0x10
sub_4bf370(&arg2[0x73], arg1 + 0x1cc)
var_4.b = 0x11
sub_4bf370(&arg2[0x77], arg1 + 0x1dc)
var_4.b = 0x12
sub_4bf370(&arg2[0x7b], arg1 + 0x1ec)
arg2[0x7f] = fconvert.s(fconvert.t(*(arg1 + 0x1fc)))
arg2[0x80] = fconvert.s(fconvert.t(*(arg1 + 0x200)))
arg2[0x81] = *(arg1 + 0x204)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
