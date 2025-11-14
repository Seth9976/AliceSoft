// 函数: sub_5d48b0
// 地址: 0x5d48b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hHandle = *(arg1 + 0x54)

if (hHandle != 0)
    enum WAIT_EVENT eax
    eax.b = WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT
    return eax

hHandle.b = 0
return hHandle
