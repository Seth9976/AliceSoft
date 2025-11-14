// 函数: sub_5d21b0
// 地址: 0x5d21b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7246f3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = float.t(0)
arg3[4] = arg1
*(arg3 + 0x58) = fconvert.d(x87_r7)
*(arg3 + 0x60) = fconvert.d(x87_r7)
arg3[6] = arg2
*arg3 = &kiwi::CDirectMusicBuffer::`vftable'{for `IMusicBuffer'}
arg3[1] = 1
arg3[2] = 0xffffffff
arg3[3] = 0
arg3[5] = 1
arg3[7] = 0
arg3[8] = arg4
arg3[9] = arg5
__builtin_memset(&arg3[0xa], 0, 0x29)
arg3[0x15] = 0
arg3[0x1a] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
arg3[0x1b] = 1
int32_t var_4 = 0
arg3[0x21].b = 0
*(arg3 + 0x85) = 0
__builtin_memset(&arg3[0x22], 0, 0x1c)
var_4.b = 6
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg3[0x29] = lpCriticalSection
var_4.b = 7
CRITICAL_SECTION* lpCriticalSection_1 = operator new(0x18)

if (lpCriticalSection_1 == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection_1)

arg3[0x2a] = lpCriticalSection_1
var_4.b = 8
CRITICAL_SECTION* lpCriticalSection_2 = operator new(0x18)

if (lpCriticalSection_2 == 0)
    lpCriticalSection_2 = nullptr
else
    InitializeCriticalSection(lpCriticalSection_2)

arg3[0x2b] = lpCriticalSection_2
var_4.b = 9
CRITICAL_SECTION* lpCriticalSection_3 = operator new(0x18)

if (lpCriticalSection_3 == 0)
    lpCriticalSection_3 = nullptr
else
    InitializeCriticalSection(lpCriticalSection_3)

arg3[0x2c] = lpCriticalSection_3
var_4.b = 0xa
int32_t* ecx_1 = arg3[8]

if (ecx_1 != 0)
    (**ecx_1)(eax_2)

int32_t* ecx_2 = arg3[9]

if (ecx_2 != 0)
    (**ecx_2)(eax_2)

HANDLE hEvent = arg3[0x24]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg3[0x24])
    arg3[0x24] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg3[0x24] = hEvent_1

if (hEvent_1 == 0)
    sub_40da60("CDirectMusicBuffer::\n")
else
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = arg3[0x25]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(arg3[0x25])
        arg3[0x25] = 0
    
    HANDLE hEvent_3 = CreateEventA(nullptr, 0, 0, nullptr)
    arg3[0x25] = hEvent_3
    
    if (hEvent_3 == 0)
        sub_40da60("CDirectMusicBuffer::\n")
    else
        ResetEvent(hEvent_3)
        
        if (sub_5760e0(&arg3[0x26]) != 0)
            if (sub_5760e0(&arg3[0x28]) == 0)
                sub_40da60("CDirectMusicBuffer::\n")
        else
            sub_40da60("CDirectMusicBuffer::\n")

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
