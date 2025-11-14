// 函数: sub_51b170
// 地址: 0x51b170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712a9a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = 0
int32_t* eax_3 = sub_4ecfc0(1)
*(arg1 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(*(arg1 + 4) + 0x14) = 1
*(*(arg1 + 4) + 0x15) = 1
int32_t var_4 = 0
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    *(arg1 + 0x10) = 0
else
    InitializeCriticalSection(lpCriticalSection)
    *(arg1 + 0x10) = lpCriticalSection

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
