// 函数: sub_5d2b10
// 地址: 0x5d2b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum WAIT_EVENT hHandle
hHandle.b = *(arg1 + 0x84)

if (hHandle.b != 0)
    hHandle = *(arg1 + 0x8c)
    
    if (hHandle != WAIT_OBJECT_0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
        *(arg1 + 0x84) = 0
        HANDLE hEvent = *(arg1 + 0x94)
        
        if (hEvent != 0)
            SetEvent(hEvent)
        
        hHandle.b = 1
        return hHandle

hHandle.b = 0
return hHandle
