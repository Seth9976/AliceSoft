// 函数: sub_5760e0
// 地址: 0x5760e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hEvent_1 = *arg1

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(*arg1)
    *arg1 = 0

HANDLE hEvent = CreateEventA(nullptr, 0, 0, nullptr)
*arg1 = hEvent

if (hEvent == 0)
    hEvent.b = 0
    return hEvent

ResetEvent(hEvent)
BOOL eax_1
eax_1.b = 1
return eax_1
