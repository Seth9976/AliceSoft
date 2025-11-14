// 函数: sub_576280
// 地址: 0x576280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71151b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &thread::CWorkerThreadManager::`vftable'
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[1] = lpCriticalSection
int32_t var_4 = 0
arg1[3] = 0
int32_t* eax_4 = sub_576880(1)
arg1[2] = eax_4
*eax_4 = eax_4
void* eax_5 = arg1[2]
*(eax_5 + 4) = eax_5
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
