// 函数: sub_594180
// 地址: 0x594180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x34)
enum WAIT_EVENT eax

if (hHandle != 0)
    eax = WaitForSingleObject(hHandle, 0)

HANDLE hHandle_1

if (hHandle != 0 && eax == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x38)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_4 = WaitForSingleObject(*(arg1 + 0x34), 0x1388)
    
    if (eax_4 == WAIT_TIMEOUT)
        sub_40da60("CDummySoundBuffer::Stop()\n")
    else if (eax_4 == WAIT_ABANDONED)
        sub_40da60("CDummySoundBuffer::Stop()\n")
    
    HANDLE hEvent_1 = *(arg1 + 0x38)
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    hHandle_1 = *(arg1 + 0x34)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(*(arg1 + 0x34))
        *(arg1 + 0x34) = 0
else
    hHandle_1 = *(arg1 + 0x34)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(*(arg1 + 0x34))
        *(arg1 + 0x34) = 0
        BOOL eax_2
        eax_2.b = 1
        return eax_2

hHandle_1.b = 1
return hHandle_1
