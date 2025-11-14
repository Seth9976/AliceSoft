// 函数: sub_5760c0
// 地址: 0x5760c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hEvent = *arg1

if (hEvent != 0)
    ResetEvent(hEvent)
    hEvent = CloseHandle(*arg1)
    *arg1 = 0

return hEvent
