// 函数: sub_4234a0
// 地址: 0x4234a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *arg1

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = arg1[1]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle_1 = *arg1
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)

if (arg1[0x26] != 0)
    bool cond:0_1 = arg1[0x27] u< 0x10
    void* eax_1 = &arg1[0x22]
    *(eax_1 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_1 = *eax_1
    
    *eax_1 = 0

HANDLE hHandle_2 = *arg1

if (hHandle_2 != 0)
    WaitForSingleObject(hHandle_2, 0xffffffff)
    CloseHandle(*arg1)
    *arg1 = 0

HANDLE hEvent_1 = arg1[1]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    hEvent_1 = CloseHandle(arg1[1])
    arg1[1] = 0

bool cond:1 = arg1[0x27] u< 0x10
arg1[0x26] = 0

if (cond:1)
    arg1[0x22].b = 0
    return hEvent_1

*arg1[0x22] = 0
return hEvent_1
