// 函数: sub_50a9e0
// 地址: 0x50a9e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723e9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = 0
*(arg3 + 0x18) = 0xf
*(arg3 + 0x14) = 0
arg3[4] = 0
int32_t var_4 = 0
*(arg3 + 0x24) = arg1
*(arg3 + 0x20) = arg4
*(arg3 + 0x28) = arg2
*(arg3 + 0x2c) = arg5
sub_4ae340(&arg3[0x30])
var_4.b = 1
*(arg3 + 0x64) = 0
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

*(arg3 + 0x68) = lpCriticalSection
var_4.b = 2
sub_50d1a0(&arg3[0x6c])
var_4.b = 3
int32_t* ecx_1 = *(arg3 + 0x20)

if (ecx_1 != 0)
    (**ecx_1)(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
