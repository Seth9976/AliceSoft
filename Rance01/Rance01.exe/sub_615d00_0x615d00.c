// 函数: sub_615d00
// 地址: 0x615d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = FindWindowA("MouseZ", "Magellan MSWHEEL")
*arg1 = RegisterWindowMessageA("MSWHEEL_ROLLMSG")
*arg2 = RegisterWindowMessageA("MSH_WHEELSUPPORT_MSG")
*arg3 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG")
uint32_t Msg = *arg2

if (Msg == 0)
    *arg4 = 0
else
    *arg4 = SendMessageA(hWnd, Msg, 0, 0)

uint32_t Msg_1 = *arg3

if (Msg_1 == 0)
    *arg5 = 3
    return hWnd

*arg5 = SendMessageA(hWnd, Msg_1, 0, 0)
return hWnd
