// 函数: sub_4d0790
// 地址: 0x4d0790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720466
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
bool cond:0 = *(arg1 + 0x20) u< 0x10
*(arg1 + 0x1c) = 0
char* result

if (cond:0)
    result = arg1 + 0xc
else
    result = *(arg1 + 0xc)

*result = 0
int32_t* esi = *(arg1 + 8)

if (esi != 0)
    result = sub_4d0e60(esi)
    *(arg1 + 8) = 0

if (*(arg1 + 0x20) u>= 0x10)
    int32_t var_24_1 = *(arg1 + 0xc)
    result = sub_6b4d5b()

*(arg1 + 0x20) = 0xf
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 4)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
