// 函数: sub_5e9e30
// 地址: 0x5e9e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722a5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CLoopCGSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 1
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_4 = 0
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
sub_401180(&arg1[6], 0xffffffff, &data_79348c, 0)
arg1[0x15] = arg3
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10].b = 0
arg1[0x11] = 0
arg1[0x12].b = 1
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x16] = arg2
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
