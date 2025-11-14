// 函数: sub_5d28d0
// 地址: 0x5d28d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 0xb0))
HANDLE hHandle = *(arg1 + 0x8c)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x90)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_4 = WaitForSingleObject(*(arg1 + 0x8c), 0x1388)
    
    if (eax_4 == WAIT_TIMEOUT)
        sub_40da60("CDirectMusicBuffer::Stop()\n")
    else if (eax_4 == WAIT_ABANDONED)
        sub_40da60("CDirectMusicBuffer::Stop()\n")
    
    *(arg1 + 0x84) = 0
    *(arg1 + 0x85) = 0
    *(arg1 + 0x40) = 0
    HANDLE hEvent_1 = *(arg1 + 0x98)
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    HANDLE hEvent_2 = *(arg1 + 0x94)
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
    
    HANDLE hEvent_3 = *(arg1 + 0x90)
    
    if (hEvent_3 != 0)
        ResetEvent(hEvent_3)
    
    HANDLE hHandle_2 = *(arg1 + 0x8c)
    
    if (hHandle_2 != 0)
        WaitForSingleObject(hHandle_2, 0xffffffff)
        CloseHandle(*(arg1 + 0x8c))
        *(arg1 + 0x8c) = 0
    
    int32_t* ecx_1 = *(arg1 + 0x28)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x14))(0)
    
    LeaveCriticalSection(*(arg1 + 0xb0))
    int32_t eax_7
    eax_7.b = 1
    return eax_7

HANDLE hHandle_1 = *(arg1 + 0x8c)

if (hHandle_1 != 0)
    WaitForSingleObject(hHandle_1, 0xffffffff)
    CloseHandle(*(arg1 + 0x8c))
    *(arg1 + 0x8c) = 0

LeaveCriticalSection(*(arg1 + 0xb0))
int32_t eax_2
eax_2.b = 1
return eax_2
