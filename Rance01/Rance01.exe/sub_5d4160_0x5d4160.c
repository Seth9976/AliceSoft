// 函数: sub_5d4160
// 地址: 0x5d4160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72463d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[4] = arg1
arg3[5] = arg2
arg3[8] = arg4
*arg3 = &kiwi::CDirectSoundBuffer::`vftable'{for `ISoundBuffer'}
arg3[1] = 1
arg3[2] = 0xffffffff
arg3[3] = 0
arg3[6] = 0
arg3[7] = 0
arg3[9] = arg5
arg3[0xa] = arg6
arg3[0xb] = 1
arg3[0xc] = 0
arg3[0xd] = 0
arg3[0xe].b = 0
__builtin_memset(&arg3[0xf], 0, 0x20)
int32_t var_4 = 0
var_4.b = 4
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg3[0x17] = lpCriticalSection
arg3[0x1d] = 0xf
arg3[0x1c] = 0
arg3[0x18].b = 0
var_4.b = 6
int32_t* ecx_2 = arg3[8]

if (ecx_2 != 0)
    (**ecx_2)(eax_2)

int32_t* ecx_3 = arg3[9]

if (ecx_3 != 0)
    (**ecx_3)(eax_2)

int32_t* ecx_4 = arg3[0xa]

if (ecx_4 != 0)
    (**ecx_4)(eax_2)

HANDLE hEvent = arg3[0x13]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg3[0x13])
    arg3[0x13] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg3[0x13] = hEvent_1

if (hEvent_1 == 0)
    sub_40da60("CDirectSoundBuffer::\n")
else
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = arg3[0x14]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(arg3[0x14])
        arg3[0x14] = 0
    
    HANDLE hEvent_3 = CreateEventA(nullptr, 0, 0, nullptr)
    arg3[0x14] = hEvent_3
    
    if (hEvent_3 == 0)
        sub_40da60("CDirectSoundBuffer::\n")
    else
        ResetEvent(hEvent_3)
        
        if (sub_5760e0(&arg3[0x16]) == 0)
            sub_40da60("CDirectSoundBuffer::\n")

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
