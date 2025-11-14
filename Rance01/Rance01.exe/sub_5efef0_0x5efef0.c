// 函数: sub_5efef0
// 地址: 0x5efef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725d43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CNumeralSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 0xa
arg1[2] = 0xb
arg1[3] = 1
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_401180(&arg1[4], 0xffffffff, &data_7934a8, 0)
int32_t var_4 = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
void (__fastcall* var_24)(int32_t* arg1) = sub_401110
var_4.b = 1
sub_6b5516(&arg1[0x10], 0x1c, 0xc, sub_4010f0)
void (__fastcall* var_24_1)(int32_t* arg1) = sub_401110
var_4.b = 2
sub_6b5516(&arg1[0x64], 0x1c, 0xc, sub_4010f0)
long double x87_r7 = float.t(0)
arg1[0xb8] = 0
__builtin_memcpy(&arg1[0xb9], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
arg1[0xbe] = fconvert.s(x87_r7)
arg1[0xbf] = fconvert.s(x87_r7)
arg1[0xc0] = 0
arg1[0xc1] = 0
arg1[0xc2] = 0
arg1[0xc3] = 0xff
arg1[0xc4].b = 0
arg1[0xc5] = 0
arg1[0xc6].b = 0
__builtin_memset(&arg1[0xc7], 0, 0x14)
var_4.b = 4
arg1[0xcd] = 0
arg1[0xce] = 0
arg1[0xcf] = arg2
arg1[0xd0] = 0
arg1[0xd1] = 0
arg1[0xd2] = 0
arg1[0xd3] = 0
arg1[0xd4].b = 1
sub_401270(&arg1[0x10], 1, 0x735604)
sub_401270(&arg1[0x64], 2, 0x735660)
sub_401270(&arg1[0x17], 1, 0x735664)
sub_401270(&arg1[0x6b], 2, 0x735668)
sub_401270(&arg1[0x1e], 1, 0x73566c)
sub_401270(&arg1[0x72], 2, 0x735670)
sub_401270(&arg1[0x25], 1, 0x735674)
sub_401270(&arg1[0x79], 2, 0x735678)
sub_401270(&arg1[0x2c], 1, 0x73567c)
sub_401270(&arg1[0x80], 2, 0x735680)
sub_401270(&arg1[0x33], 1, 0x735684)
sub_401270(&arg1[0x87], 2, 0x735688)
sub_401270(&arg1[0x3a], 1, 0x73568c)
sub_401270(&arg1[0x8e], 2, 0x735690)
sub_401270(&arg1[0x41], 1, 0x735694)
sub_401270(&arg1[0x95], 2, 0x735698)
sub_401270(&arg1[0x48], 1, 0x73569c)
sub_401270(&arg1[0x9c], 2, 0x7356a0)
sub_401270(&arg1[0x4f], 1, 0x7356a4)
sub_401270(&arg1[0xa3], 2, 0x7356a8)
sub_401270(&arg1[0x56], 1, 0x7356ac)
sub_401270(&arg1[0xaa], 2, 0x7356b0)
sub_401270(&arg1[0x5d], 1, 0x7356b4)
sub_401270(&arg1[0xb1], 2, 0x7356b8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
