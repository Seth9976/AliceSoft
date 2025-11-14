// 函数: sub_4be7c0
// 地址: 0x4be7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
arg1[6] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[5] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[5]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[5]
*(eax_5 + 8) = eax_5
*(arg1[5] + 0x14) = 1
*(arg1[5] + 0x15) = 1
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
