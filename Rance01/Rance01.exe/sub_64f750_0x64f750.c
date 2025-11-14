// 函数: sub_64f750
// 地址: 0x64f750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

MENUITEMINFOA lpmii
lpmii.cbSize = 0x30
lpmii.fMask = 1
GetMenuItemInfoA(GetMenu(*(arg2 + 0x34)), arg1, 0, &lpmii)
lpmii.fState = zx.d(not.b(lpmii.fState.b)) & 8
SetMenuItemInfoA(GetMenu(*(arg2 + 0x34)), arg1, 0, &lpmii)
return lpmii.fState u>> 3 & 1
