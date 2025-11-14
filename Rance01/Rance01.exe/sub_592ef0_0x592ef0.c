// 函数: sub_592ef0
// 地址: 0x592ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x88)
enum WAIT_EVENT eax

if (hHandle != 0)
    eax = WaitForSingleObject(hHandle, 0)

HANDLE hHandle_1

if (hHandle != 0 && eax == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x8c)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_4 = WaitForSingleObject(*(arg1 + 0x88), 0x1388)
    
    if (eax_4 == WAIT_TIMEOUT)
        sub_40da60("CDummyMusicBuffer::Stop()\n")
    else if (eax_4 == WAIT_ABANDONED)
        sub_40da60("CDummyMusicBuffer::Stop()\n")
    
    *(arg1 + 0x80) = 0
    *(arg1 + 0x81) = 0
    *(arg1 + 0x34) = 0
    HANDLE hEvent_1 = *(arg1 + 0x94)
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    HANDLE hEvent_2 = *(arg1 + 0x90)
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
    
    HANDLE hEvent_3 = *(arg1 + 0x8c)
    
    if (hEvent_3 != 0)
        ResetEvent(hEvent_3)
    
    hHandle_1 = *(arg1 + 0x88)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(*(arg1 + 0x88))
        *(arg1 + 0x88) = 0
    
    int32_t* ecx_1 = *(arg1 + 0x1c)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x14))(0)
else
    hHandle_1 = *(arg1 + 0x88)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(*(arg1 + 0x88))
        *(arg1 + 0x88) = 0
        BOOL eax_2
        eax_2.b = 1
        return eax_2

hHandle_1.b = 1
return hHandle_1
