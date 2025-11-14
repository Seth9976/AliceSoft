// 函数: sub_58fab0
// 地址: 0x58fab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7169f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CSpriteShader::`vftable'
arg1[1] = 0
sub_58ea30(&arg1[2])
int32_t var_4 = 0
arg1[0x16] = 0
int32_t* eax_4 = sub_4ecfc0(1)
arg1[0x15] = eax_4
*eax_4 = eax_4
void* eax_5 = arg1[0x15]
*(eax_5 + 4) = eax_5
void* eax_6 = arg1[0x15]
*(eax_6 + 8) = eax_6
arg1[0x15][5].vFunc_0.b = 1
*(arg1[0x15] + 0x15) = 1
var_4.b = 1
arg1[0x1a] = 0
int32_t* eax_7 = sub_4ecfc0(1)
arg1[0x19] = eax_7
*eax_7 = eax_7
void* eax_8 = arg1[0x19]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[0x19]
*(eax_9 + 8) = eax_9
arg1[0x19][5].vFunc_0.b = 1
*(arg1[0x19] + 0x15) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
