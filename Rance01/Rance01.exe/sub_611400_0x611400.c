// 函数: sub_611400
// 地址: 0x611400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SetFocus(arg2)

if (data_797db4 != 0)
    int32_t var_14
    int32_t var_10
    sub_611850(arg1, zx.d(arg3.w), arg3 u>> 0x10, &var_14, &var_10)
    int32_t ebx_1 = var_10
    *(arg1 + 0x18c) = var_14
    *(arg1 + 0x190) = ebx_1
    InvalidateRect(arg2, nullptr, 0)
    data_78f500 = data_797dac
    data_797dc4 = ebx_1 + 1
    HWND hWnd = GetParent(GetParent(GetParent(arg2)))
    HMENU hMenu = CreatePopupMenu()
    
    if (hMenu != 0)
        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c71, 0x734cf0)
        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c74, 0x734d0c)
        AppendMenuA(hMenu, MF_SEPARATOR, 0, nullptr)
        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x734d2c)
        GetCursorPos(&var_10)
        int32_t y
        TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, var_10, y, 0, hWnd, nullptr)
        DestroyMenu(hMenu)

return 0
