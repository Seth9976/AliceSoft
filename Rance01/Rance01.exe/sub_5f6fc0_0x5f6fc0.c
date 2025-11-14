// 函数: sub_5f6fc0
// 地址: 0x5f6fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712d3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CPartsList::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[7] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[6] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[6]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[6]
*(eax_5 + 8) = eax_5
arg1[6][5].vFunc_0.b = 1
*(arg1[6] + 0x15) = 1
arg1[0xa] = arg3
arg1[9] = arg2
arg1[0xb] = arg4
arg1[0xd] = arg6
arg1[0xc] = arg5
arg1[0xe] = arg7
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
