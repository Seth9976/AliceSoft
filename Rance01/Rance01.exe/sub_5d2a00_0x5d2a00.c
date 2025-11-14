// 函数: sub_5d2a00
// 地址: 0x5d2a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum WAIT_EVENT hHandle
hHandle.b = *(arg1 + 0x84)

if (hHandle.b == 0)
    hHandle = *(arg1 + 0x8c)
    
    if (hHandle != WAIT_OBJECT_0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
        hHandle.b = 1
        return hHandle

hHandle.b = 0
return hHandle
