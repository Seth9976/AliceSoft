// 函数: sub_6a9f20
// 地址: 0x6a9f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_34
int32_t eax_1 = data_78c474 ^ &var_34
POINT point
GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)

if (*(arg1 + 0x2a0) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
int32_t edx = *(arg1 + 0x294)
int32_t x = point.x
*(arg1 + 0x298) = *(arg1 + 0x290)
*(arg1 + 0x294) = point.y
*(arg1 + 0x290) = x
*(arg1 + 0x29c) = edx
*(arg1 + 0x2a0) = 1
sub_6b4885(eax_1 ^ &var_34)
return 0
