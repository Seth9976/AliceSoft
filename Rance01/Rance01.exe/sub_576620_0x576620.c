// 函数: sub_576620
// 地址: 0x576620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_5766c0(arg1)
HANDLE hEvent = *(arg1 + 0x14)

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(*(arg1 + 0x14))
    *(arg1 + 0x14) = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
*(arg1 + 0x14) = hEvent_1

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = *(arg1 + 0x18)
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(*(arg1 + 0x18))
        *(arg1 + 0x18) = 0
    
    hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
    *(arg1 + 0x18) = hEvent_1
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
        return sub_576230(arg1 + 0x1c, sub_5764d0, arg1) != 0

hEvent_1.b = 0
return hEvent_1
