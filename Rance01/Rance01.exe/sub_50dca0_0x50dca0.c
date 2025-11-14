// 函数: sub_50dca0
// 地址: 0x50dca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7116bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = arg1
arg2[1].b = (*(*arg1 + 0x68))(eax_2)
arg2[4] = 0
int32_t* eax_5 = sub_4ecfc0(1)
arg2[3] = eax_5
*eax_5 = eax_5
void* eax_6 = arg2[3]
*(eax_6 + 4) = eax_6
void* eax_7 = arg2[3]
*(eax_7 + 8) = eax_7
*(arg2[3] + 0x14) = 1
*(arg2[3] + 0x15) = 1
int32_t var_4 = 0
arg2[8] = 0
int32_t* eax_9 = sub_4ecfc0(1)
arg2[7] = eax_9
*eax_9 = eax_9
void* eax_10 = arg2[7]
*(eax_10 + 4) = eax_10
void* eax_11 = arg2[7]
*(eax_11 + 8) = eax_11
*(arg2[7] + 0x14) = 1
*(arg2[7] + 0x15) = 1
arg2[0xa] = 0
arg2[0xb] = 0
arg2[0xc].b = 0
arg2[0xd] = 0
arg2[0xe] = 0
arg2[0xf].b = 0
arg2[0x10] = 0
arg2[0x11] = 0
arg2[0x12] = fconvert.s(fconvert.t(32f))
arg2[0x13] = arg3
arg2[0x14] = arg4
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
