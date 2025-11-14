// 函数: sub_593130
// 地址: 0x593130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum WAIT_EVENT hHandle
hHandle.b = *(arg1 + 0x80)

if (hHandle.b != 0)
    hHandle = *(arg1 + 0x88)
    
    if (hHandle != WAIT_OBJECT_0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
        *(arg1 + 0x80) = 0
        HANDLE hEvent = *(arg1 + 0x90)
        
        if (hEvent != 0)
            SetEvent(hEvent)
        
        hHandle.b = 1
        return hHandle

hHandle.b = 0
return hHandle
