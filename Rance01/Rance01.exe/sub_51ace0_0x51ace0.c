// 函数: sub_51ace0
// 地址: 0x51ace0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71164b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    int32_t __saved_edi
    (*(*ecx + 4))(data_78c474 ^ &__saved_edi)
    *(arg1 + 8) = 0

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 4)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

void* var_1c_2 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
