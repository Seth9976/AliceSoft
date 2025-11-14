// 函数: sub_4dd810
// 地址: 0x4dd810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b12c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3
sub_4e9390(arg2 + 0xc, &var_10, *(arg2 + 0xc), *(arg2 + 0x10))

if (*(arg2 + 0x4c) u>= 0x10)
    int32_t var_24_1 = *(arg2 + 0x38)
    sub_6b4d5b()

*(arg2 + 0x4c) = 0xf
*(arg2 + 0x48) = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x30) u>= 0x10)
    int32_t var_24_2 = *(arg2 + 0x1c)
    sub_6b4d5b()

*(arg2 + 0x30) = 0xf
*(arg2 + 0x2c) = 0
*(arg2 + 0x1c) = 0
var_4.b = 0
int32_t result = sub_4e9490(arg2 + 0xc)
CRITICAL_SECTION* lpCriticalSection = *(arg2 + 4)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
