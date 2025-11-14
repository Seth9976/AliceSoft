// 函数: sub_4ae340
// 地址: 0x4ae340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717f03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)
CRITICAL_SECTION* lpCriticalSection_1

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    lpCriticalSection_1 = lpCriticalSection

*arg1 = lpCriticalSection_1
int32_t var_4 = 0
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
var_4.b = 1
arg1[0xb] = 0
int32_t* eax_3 = sub_52d190(1)
arg1[0xa] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0xa]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0xa]
*(eax_5 + 8) = eax_5
*(arg1[0xa] + 0x34) = 1
*(arg1[0xa] + 0x35) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
