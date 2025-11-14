// 函数: sub_50aaa0
// 地址: 0x50aaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723e4e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3
sub_50ac70(arg1)
sub_4ae7e0(arg1 + 0x30)
int32_t* ecx_1 = *(arg1 + 0x28)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x28) = 0

int32_t* ecx_2 = *(arg1 + 0x20)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    *(arg1 + 0x20) = 0

var_4.b = 2
sub_50d2d0(arg1 + 0x6c)
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x68)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

var_4.b = 0
int32_t result = sub_4ae450(arg1 + 0x30)

if (*(arg1 + 0x18) u>= 0x10)
    int32_t var_24_3 = *(arg1 + 4)
    result = sub_6b4d5b()

*(arg1 + 0x18) = 0xf
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
