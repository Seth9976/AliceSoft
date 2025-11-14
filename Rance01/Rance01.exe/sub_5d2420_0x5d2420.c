// 函数: sub_5d2420
// 地址: 0x5d2420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711243
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMusicBuffer::kiwi::CDirectMusicBuffer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMusicBuffer::kiwi::CDirectMusicBuffer::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDirectMusicBuffer::`vftable'{for `IMusicBuffer'}
int32_t var_4 = 0xa
sub_5d2c30(arg1)
(*arg1)->vFunc_6(eax_2)
int32_t* ecx_1 = arg1[0xa]
arg1[0x22] = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[0xa] = 0

int32_t* eax_5 = arg1[7]

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)
    arg1[7] = 0

HANDLE hEvent = arg1[0x26]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x26])
    arg1[0x26] = 0

HANDLE hEvent_1 = arg1[0x25]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[0x25])
    arg1[0x25] = 0

HANDLE hEvent_2 = arg1[0x24]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(arg1[0x24])
    arg1[0x24] = 0

HANDLE hEvent_3 = arg1[0x28]

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(arg1[0x28])
    arg1[0x28] = 0

int32_t* ecx_4 = arg1[9]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    arg1[9] = 0

int32_t* ecx_5 = arg1[8]

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    arg1[8] = 0

CRITICAL_SECTION* lpCriticalSection = arg1[0x2c]
arg1[6] = 0

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_4 = lpCriticalSection
    sub_6b4d5b()

CRITICAL_SECTION* lpCriticalSection_1 = arg1[0x2b]

if (lpCriticalSection_1 != 0)
    DeleteCriticalSection(lpCriticalSection_1)
    CRITICAL_SECTION* lpCriticalSection_5 = lpCriticalSection_1
    sub_6b4d5b()

CRITICAL_SECTION* lpCriticalSection_2 = arg1[0x2a]

if (lpCriticalSection_2 != 0)
    DeleteCriticalSection(lpCriticalSection_2)
    CRITICAL_SECTION* lpCriticalSection_6 = lpCriticalSection_2
    sub_6b4d5b()

CRITICAL_SECTION* lpCriticalSection_3 = arg1[0x29]

if (lpCriticalSection_3 != 0)
    DeleteCriticalSection(lpCriticalSection_3)
    CRITICAL_SECTION* lpCriticalSection_7 = lpCriticalSection_3
    sub_6b4d5b()

HANDLE hEvent_4 = arg1[0x28]

if (hEvent_4 != 0)
    ResetEvent(hEvent_4)
    CloseHandle(arg1[0x28])
    arg1[0x28] = 0

HANDLE hHandle = arg1[0x27]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0x27])
    arg1[0x27] = 0

HANDLE hEvent_5 = arg1[0x26]

if (hEvent_5 != 0)
    ResetEvent(hEvent_5)
    CloseHandle(arg1[0x26])
    arg1[0x26] = 0

HANDLE hEvent_6 = arg1[0x25]

if (hEvent_6 != 0)
    ResetEvent(hEvent_6)
    CloseHandle(arg1[0x25])
    arg1[0x25] = 0

HANDLE hEvent_7 = arg1[0x24]

if (hEvent_7 != 0)
    ResetEvent(hEvent_7)
    CloseHandle(arg1[0x24])
    arg1[0x24] = 0

BOOL hHandle_1 = arg1[0x23]

if (hHandle_1 != 0)
    WaitForSingleObject(hHandle_1, 0xffffffff)
    hHandle_1 = CloseHandle(arg1[0x23])
    arg1[0x23] = 0

arg1[0x1a] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
fsbase->NtTib.ExceptionList = ExceptionList
return hHandle_1
