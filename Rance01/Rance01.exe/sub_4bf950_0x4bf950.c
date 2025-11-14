// 函数: sub_4bf950
// 地址: 0x4bf950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7131d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    *(arg1 + 0xc) = 0

int32_t* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 8) = 0

if (*(arg1 + 0x28) u>= 0x10)
    int32_t var_1c_1 = *(arg1 + 0x14)
    result = sub_6b4d5b()

*(arg1 + 0x28) = 0xf
*(arg1 + 0x24) = 0
*(arg1 + 0x14) = 0
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 4)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
