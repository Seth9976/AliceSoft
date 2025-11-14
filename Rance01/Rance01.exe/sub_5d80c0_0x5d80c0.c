// 函数: sub_5d80c0
// 地址: 0x5d80c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71253d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSactSound::`vftable'{for `IChangeVolumeCallback'}
__builtin_memset(&arg1[1], 0, 0x14)
arg1[8] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[7] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[7]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[7]
*(eax_5 + 8) = eax_5
*(arg1[7] + 0x14) = 1
*(arg1[7] + 0x15) = 1
int32_t var_4 = 0
arg1[0xc] = 0
int32_t* eax_7 = sub_4ecfc0(1)
arg1[0xb] = eax_7
*eax_7 = eax_7
void* eax_8 = arg1[0xb]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[0xb]
*(eax_9 + 8) = eax_9
*(arg1[0xb] + 0x14) = 1
void* edx
edx.b = arg3
*(arg1[0xb] + 0x15) = 1
arg1[0xe].b = 0
*(arg1 + 0x39) = arg2
*(arg1 + 0x3a) = edx.b
arg1[0xf] = 0
arg1[0x10] = 2
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
