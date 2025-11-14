// 函数: sub_58c2f0
// 地址: 0x58c2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_14 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 8) = 0
int32_t* eax_3 = sub_4ecfc0(1)
*(arg2 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg2 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg2 + 4)
*(eax_5 + 8) = eax_5
*(*(arg2 + 4) + 0x14) = 1
*(*(arg2 + 4) + 0x15) = 1
int32_t var_4 = 0

if (arg2 != arg1)
    sub_5f7c70(arg2)
    int32_t eax_7 = *(arg2 + 4)
    *(arg2 + 4) = *(arg1 + 4)
    *(arg1 + 4) = eax_7
    int32_t eax_8 = *(arg2 + 8)
    *(arg2 + 8) = *(arg1 + 8)
    *(arg1 + 8) = eax_8

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
