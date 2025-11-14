// 函数: sub_569db0
// 地址: 0x569db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hMenu = *(arg1 + 0x394)

if (hMenu != 0)
    DestroyMenu(hMenu)
    *(arg1 + 0x394) = 0

*(arg1 + 0xbc) = 0

if (*(arg1 + 0x298) s> 0)
    ReleaseCapture()
    *(arg1 + 0x298) = 0

int32_t* edi = *(arg1 + 0x284)

if (edi != 0)
    sub_425240(edi)
    int32_t* eax = edi[2]
    
    if (eax != 0)
        (*(*eax + 8))(eax)
        edi[2] = 0
    
    (*(**(arg1 + 0x284) + 4))()
    *(arg1 + 0x284) = 0

uint32_t uIDEvent = *(arg1 + 0x39c)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x3a0), uIDEvent)
    *(arg1 + 0x39c) = 0

PostQuitMessage(0)
return 0
