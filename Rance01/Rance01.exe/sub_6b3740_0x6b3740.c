// 函数: sub_6b3740
// 地址: 0x6b3740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL uIDEvent = *arg1

if (uIDEvent != 0)
    uIDEvent = KillTimer(arg1[1], uIDEvent)
    *arg1 = 0

return uIDEvent
