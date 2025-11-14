// 函数: sub_42d9b0
// 地址: 0x42d9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b5a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatLayerData::`vftable'{for `IInterface'}
arg1[1] = 1
arg1[2] = 0
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
sub_401270(&arg1[3], nullptr, 0x72da56)
int32_t var_4 = 0
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_401270(&arg1[0xa], nullptr, 0x72da57)
var_4.b = 1
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x15] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[0x14] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0x14]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0x14]
*(eax_5 + 8) = eax_5
*(arg1[0x14] + 0x14) = 1
*(arg1[0x14] + 0x15) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
