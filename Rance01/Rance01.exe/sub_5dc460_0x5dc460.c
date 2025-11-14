// 函数: sub_5dc460
// 地址: 0x5dc460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hMenu = *arg1

if (hMenu != 0)
    hMenu = DestroyMenu(hMenu)
    *arg1 = 0

return hMenu
