// 函数: sub_593250
// 地址: 0x593250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x98)
enum WAIT_EVENT eax

if (hHandle != 0)
    eax = WaitForSingleObject(hHandle, 0)

HANDLE hHandle_1

if (hHandle != 0 && eax == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x9c)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_3 = WaitForSingleObject(*(arg1 + 0x98), 0x1388)
    
    if (eax_3 == WAIT_TIMEOUT)
        sub_40da60("CDummyMusicBuffer::StopFade()\n")
    else if (eax_3 == WAIT_ABANDONED)
        sub_40da60("CDummyMusicBuffer::StopFade()\n")
    
    HANDLE hEvent_1 = *(arg1 + 0x9c)
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    hHandle_1 = *(arg1 + 0x98)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(*(arg1 + 0x98))
        *(arg1 + 0x98) = 0
else
    hHandle_1 = *(arg1 + 0x98)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(*(arg1 + 0x98))
        *(arg1 + 0x98) = 0

hHandle_1.b = 1
return hHandle_1
