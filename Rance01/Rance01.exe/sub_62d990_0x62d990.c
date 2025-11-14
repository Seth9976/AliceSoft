// 函数: sub_62d990
// 地址: 0x62d990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hMenu = CreatePopupMenu()

if (hMenu != 0)
    AppendMenuA(hMenu, MF_BYCOMMAND, 1, 0x733ca0)
    AppendMenuA(hMenu, MF_BYCOMMAND, 2, 0x733cb8)
    POINT point
    GetCursorPos(&point)
    TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, point.x, point.y, 0, arg1, nullptr)
    DestroyMenu(hMenu)

return 0
