// 函数: sub_5dec10
// 地址: 0x5dec10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723636
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CCGSprite::`vftable'{for `partsengine::CSprite'}
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401270(&arg1[1], 6, "<save>")
int32_t var_4 = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_401270(&arg1[8], 8, 0x735804)
var_4.b = 1
arg1[0xf] = 1
arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
sub_401180(&arg1[0x10], 0xffffffff, &data_793438, 0)
arg1[0x18] = arg5
arg1[0x17] = 0
arg1[0x1a] = arg2
arg1[0x19] = 0xffffffff
arg1[0x1b] = arg3
arg1[0x1c] = arg4
arg1[0x1f] = arg2
arg1[0x1d] = 0
arg1[0x1e].b = 0
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
