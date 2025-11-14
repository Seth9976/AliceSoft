// 函数: sub_65aed0
// 地址: 0x65aed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)

if (*(arg1 + 0x7c) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
int32_t ecx = *(arg1 + 0x70)
int32_t x = point.x
*(arg1 + 0x74) = *(arg1 + 0x6c)
*(arg1 + 0x70) = point.y
*(arg1 + 0x78) = ecx
*(arg1 + 0x6c) = x
*(arg1 + 0x7c) = 1
return 0
