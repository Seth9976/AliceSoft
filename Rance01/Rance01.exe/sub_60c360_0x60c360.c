// 函数: sub_60c360
// 地址: 0x60c360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = GetScrollPos(arg1[0x22], SB_VERT)
arg1[0x35] = divs.dp.d(sx.q(arg3 u>> 0x10), arg1[0x2e] + arg1[0x2d]) + eax_1
InvalidateRect(arg2, nullptr, 1)
HWND hWnd = GetParent(GetParent(arg2))
HMENU hMenu = CreatePopupMenu()

if (hMenu != 0)
    if (arg1[0x35] s>= 0)
        int32_t eax_9 = (*(*arg1 + 0x8c))()
        
        if (arg1[0x35] s< eax_9)
            AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c7c, 0x7352e8)
            AppendMenuA(hMenu, MF_SEPARATOR, 0, nullptr)
            AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c7d, 0x7352fc)
    
    AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c73, 0x735308)
    POINT point
    GetCursorPos(&point)
    TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, point.x, point.y, 0, hWnd, nullptr)
    DestroyMenu(hMenu)

return 0
