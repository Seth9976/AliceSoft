// 函数: sub_5e5e40
// 地址: 0x5e5e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713fce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CConstructionSpriteData::`vftable'
arg1[1] = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[4] = *(arg2 + 0x10)
arg1[5] = *(arg2 + 0x14)
arg1[6] = *(arg2 + 0x18)
arg1[7] = *(arg2 + 0x1c)
arg1[8] = *(arg2 + 0x20)
arg1[9] = *(arg2 + 0x24)
arg1[0xa] = *(arg2 + 0x28)
arg1[0xb] = *(arg2 + 0x2c)
arg1[0xc] = *(arg2 + 0x30)
arg1[0xd] = *(arg2 + 0x34)
arg1[0xe] = *(arg2 + 0x38)
arg1[0xf] = *(arg2 + 0x3c)
arg1[0x10] = *(arg2 + 0x40)
arg1[0x11] = *(arg2 + 0x44)
arg1[0x12] = *(arg2 + 0x48)
arg1[0x13] = *(arg2 + 0x4c)
arg1[0x14] = *(arg2 + 0x50)
arg1[0x15] = *(arg2 + 0x54)
__builtin_memcpy(&arg1[0x16], arg2 + 0x58, 0x30)
arg1[0x27] = 0xf
arg1[0x26] = 0
arg1[0x22].b = 0
sub_401180(&arg1[0x22], 0xffffffff, arg2 + 0x88, 0)
int32_t var_4 = 0
arg1[0x2e] = 0xf
arg1[0x2d] = 0
arg1[0x29].b = 0
sub_401180(&arg1[0x29], 0xffffffff, arg2 + 0xa4, 0)
arg1[0x30].b = *(arg2 + 0xc0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
