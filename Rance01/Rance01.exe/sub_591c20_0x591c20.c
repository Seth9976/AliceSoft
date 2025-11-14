// 函数: sub_591c20
// 地址: 0x591c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71372b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[2] = arg2
*arg1 = &graphengine::CVertexShader::`vftable'{for `IVertexShader'}
arg1[1] = 1
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_4 = 0
arg1[0xa] = 0
int32_t* eax_4 = sub_4fddf0(1)
arg1[9] = eax_4
*eax_4 = eax_4
void* eax_5 = arg1[9]
*(eax_5 + 4) = eax_5
void* eax_6 = arg1[9]
*(eax_6 + 8) = eax_6
arg1[9]->vFunc_8.b = 1
*(&arg1[9]->vFunc_8 + 1) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
