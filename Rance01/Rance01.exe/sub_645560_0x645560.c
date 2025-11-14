// 函数: sub_645560
// 地址: 0x645560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_34
int32_t eax_1 = data_78c474 ^ &var_34
POINT point
GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)

if (*(arg1 + 0x1b8) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
int32_t edx = *(arg1 + 0x1ac)
int32_t x = point.x
*(arg1 + 0x1b0) = *(arg1 + 0x1a8)
*(arg1 + 0x1ac) = point.y
*(arg1 + 0x1a8) = x
*(arg1 + 0x1b4) = edx
*(arg1 + 0x1b8) = 1
sub_6b4885(eax_1 ^ &var_34)
return 0
