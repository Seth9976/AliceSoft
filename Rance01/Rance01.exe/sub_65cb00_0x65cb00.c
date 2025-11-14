// 函数: sub_65cb00
// 地址: 0x65cb00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)

if (*(arg1 + 0xf8) != 0)
    int32_t edi_2 = *(arg1 + 0xfc) - point.x
    int32_t ebp_2 = *(arg1 + 0x100) - point.y
    int32_t eax_2 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
    SetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138), eax_2 + edi_2, 1)
    int32_t eax_5 = GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
    SetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c), eax_5 + ebp_2, 1)
    sub_64d800(arg1 + 0x12c)
    sub_64d800(arg1 + 0x110)

if (*(arg1 + 0x10c) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

int32_t edx_4 = *(arg1 + 0x100)
int32_t x = point.x
*(arg1 + 0x104) = *(arg1 + 0xfc)
int32_t y = point.y
*(arg1 + 0xfc) = x
*(arg1 + 0x108) = edx_4
*(arg1 + 0x100) = y
*(arg1 + 0x10c) = 1
return 0
