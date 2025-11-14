// 函数: sub_40c210
// 地址: 0x40c210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7156fd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memset(arg1, 0, 0x20)
*(arg1 + 0x28) = 0
int32_t* eax_3 = sub_4ecfc0(1)
*(arg1 + 0x24) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 0x24)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 0x24)
*(eax_5 + 8) = eax_5
*(*(arg1 + 0x24) + 0x14) = 1
*(*(arg1 + 0x24) + 0x15) = 1
int32_t var_4 = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x48) = 0
int32_t* eax_7 = sub_4ecfc0(1)
*(arg1 + 0x44) = eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x44)
*(eax_8 + 4) = eax_8
void* eax_9 = *(arg1 + 0x44)
*(eax_9 + 8) = eax_9
*(*(arg1 + 0x44) + 0x14) = 1
*(*(arg1 + 0x44) + 0x15) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
