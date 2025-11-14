// 函数: sub_5766c0
// 地址: 0x5766c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle_2 = *(arg1 + 0x1c)

if (hHandle_2 != 0 && WaitForSingleObject(hHandle_2, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x14)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle = *(arg1 + 0x1c)
    
    if (hHandle != 0)
        WaitForSingleObject(hHandle, 0xffffffff)

HANDLE hHandle_1 = *(arg1 + 0x1c)

if (hHandle_1 != 0)
    WaitForSingleObject(hHandle_1, 0xffffffff)
    CloseHandle(*(arg1 + 0x1c))
    *(arg1 + 0x1c) = 0

HANDLE hEvent_1 = *(arg1 + 0x18)

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(*(arg1 + 0x18))
    *(arg1 + 0x18) = 0

HANDLE hEvent_2 = *(arg1 + 0x14)

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    hEvent_2 = CloseHandle(*(arg1 + 0x14))
    *(arg1 + 0x14) = 0

return hEvent_2
