// 函数: sub_51b200
// 地址: 0x51b200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71484d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_51b290(arg2)
CRITICAL_SECTION* lpCriticalSection = arg2[4]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

int32_t var_4_1 = 2
int32_t* eax_3 = arg2[1]
sub_4365a0(arg2, &var_10, *eax_3, eax_3)
int32_t var_20_3 = arg2[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
