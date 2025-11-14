// 函数: sub_576330
// 地址: 0x576330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7114e7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct thread::CWorkerThreadManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CWorkerThreadManager::VTable** var_10_1 = arg1
*arg1 = &thread::CWorkerThreadManager::`vftable'
int32_t var_4 = 4
sub_576420(arg1)
HANDLE hHandle = arg1[7]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[7])
    arg1[7] = 0

HANDLE hEvent = arg1[6]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[6])
    arg1[6] = 0

HANDLE hEvent_1 = arg1[5]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[5])
    arg1[5] = 0

int32_t* ecx_1 = arg1[2]
int32_t* i_1 = *ecx_1
*ecx_1 = ecx_1
void* ecx_2 = arg1[2]
*(ecx_2 + 4) = ecx_2
arg1[3] = 0

if (i_1 != arg1[2])
    int32_t* i
    
    do
        i = *i_1
        int32_t* i_2 = i_1
        sub_6b4d5b()
        i_1 = i
    while (i != arg1[2])

int32_t var_28_6 = arg1[2]
int32_t result = sub_6b4d5b()
CRITICAL_SECTION* lpCriticalSection = arg1[1]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
