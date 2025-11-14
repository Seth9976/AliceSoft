// 函数: sub_592a00
// 地址: 0x592a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7112f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMusicBuffer::kiwi::CDummyMusicBuffer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMusicBuffer::kiwi::CDummyMusicBuffer::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDummyMusicBuffer::`vftable'{for `IMusicBuffer'}
int32_t var_4 = 8
sub_593250(arg1)
(*arg1)->vFunc_6(eax_2)
int32_t* ecx_1 = arg1[7]
*(arg1 + 0x81) = 0
arg1[0xd] = 0
arg1[0xc] = 0
arg1[0x21] = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[7] = 0

HANDLE hEvent = arg1[0x25]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x25])
    arg1[0x25] = 0

HANDLE hEvent_1 = arg1[0x24]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[0x24])
    arg1[0x24] = 0

HANDLE hEvent_2 = arg1[0x23]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(arg1[0x23])
    arg1[0x23] = 0

HANDLE hEvent_3 = arg1[0x27]

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(arg1[0x27])
    arg1[0x27] = 0

int32_t eax_7 = arg1[0x18]

if (eax_7 != 0)
    int32_t var_28_9 = eax_7
    sub_6b53b2()
    arg1[0x18] = 0

int32_t* ecx_3 = arg1[6]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    arg1[6] = 0

int32_t* ecx_4 = arg1[5]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    arg1[5] = 0

CRITICAL_SECTION* lpCriticalSection = arg1[0x29]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
    sub_6b4d5b()

CRITICAL_SECTION* lpCriticalSection_1 = arg1[0x28]

if (lpCriticalSection_1 != 0)
    DeleteCriticalSection(lpCriticalSection_1)
    CRITICAL_SECTION* lpCriticalSection_3 = lpCriticalSection_1
    sub_6b4d5b()

HANDLE hEvent_4 = arg1[0x27]

if (hEvent_4 != 0)
    ResetEvent(hEvent_4)
    CloseHandle(arg1[0x27])
    arg1[0x27] = 0

HANDLE hHandle = arg1[0x26]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0x26])
    arg1[0x26] = 0

HANDLE hEvent_5 = arg1[0x25]

if (hEvent_5 != 0)
    ResetEvent(hEvent_5)
    CloseHandle(arg1[0x25])
    arg1[0x25] = 0

HANDLE hEvent_6 = arg1[0x24]

if (hEvent_6 != 0)
    ResetEvent(hEvent_6)
    CloseHandle(arg1[0x24])
    arg1[0x24] = 0

HANDLE hEvent_7 = arg1[0x23]

if (hEvent_7 != 0)
    ResetEvent(hEvent_7)
    CloseHandle(arg1[0x23])
    arg1[0x23] = 0

BOOL hHandle_1 = arg1[0x22]

if (hHandle_1 != 0)
    WaitForSingleObject(hHandle_1, 0xffffffff)
    hHandle_1 = CloseHandle(arg1[0x22])
    arg1[0x22] = 0

arg1[0x19] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
fsbase->NtTib.ExceptionList = ExceptionList
return hHandle_1
