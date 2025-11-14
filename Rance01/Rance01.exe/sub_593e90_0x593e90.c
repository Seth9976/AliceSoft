// 函数: sub_593e90
// 地址: 0x593e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712812
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundBuffer::kiwi::CDummySoundBuffer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundBuffer::kiwi::CDummySoundBuffer::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDummySoundBuffer::`vftable'{for `ISoundBuffer'}
int32_t var_4 = 5
sub_594350(arg1)
(*arg1)->vFunc_6(eax_2)
arg1[0xb] = 0
arg1[0xc] = 0
HANDLE hEvent = arg1[0x11]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x11])
    arg1[0x11] = 0

HANDLE hEvent_1 = arg1[0xf]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[0xf])
    arg1[0xf] = 0

HANDLE hEvent_2 = arg1[0xe]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(arg1[0xe])
    arg1[0xe] = 0

int32_t* ecx_2 = arg1[6]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    arg1[6] = 0

int32_t* ecx_3 = arg1[5]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    arg1[5] = 0

int32_t* ecx_4 = arg1[4]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    arg1[4] = 0

if (arg1[0x17] u>= 0x10)
    int32_t var_28_7 = arg1[0x12]
    sub_6b4d5b()

arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0
HANDLE hEvent_3 = arg1[0x11]

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(arg1[0x11])
    arg1[0x11] = 0

HANDLE hHandle = arg1[0x10]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0x10])
    arg1[0x10] = 0

HANDLE hEvent_4 = arg1[0xf]

if (hEvent_4 != 0)
    ResetEvent(hEvent_4)
    CloseHandle(arg1[0xf])
    arg1[0xf] = 0

HANDLE hEvent_5 = arg1[0xe]

if (hEvent_5 != 0)
    ResetEvent(hEvent_5)
    CloseHandle(arg1[0xe])
    arg1[0xe] = 0

BOOL hHandle_1 = arg1[0xd]

if (hHandle_1 != 0)
    WaitForSingleObject(hHandle_1, 0xffffffff)
    hHandle_1 = CloseHandle(arg1[0xd])
    arg1[0xd] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hHandle_1
