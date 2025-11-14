// 函数: sub_58ea30
// 地址: 0x58ea30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7128a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CShaderArchive::`vftable'
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4 = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
var_4.b = 1
arg1[0xf] = 0
int32_t* eax_3 = sub_4fddf0(1)
arg1[0xe] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0xe]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0xe]
*(eax_5 + 8) = eax_5
arg1[0xe][8].vFunc_0.b = 1
*(arg1[0xe] + 0x21) = 1
arg1[0x11] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
