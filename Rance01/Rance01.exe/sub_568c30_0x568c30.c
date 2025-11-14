// 函数: sub_568c30
// 地址: 0x568c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0xa4) == 0)
    HMENU eax_1 = LoadMenuA(*(arg1 + 0x98), 0x65)
    *(arg1 + 0x394) = eax_1
    sub_5685d0(eax_1, arg1)
    SetMenu(arg2, *(arg1 + 0x394))
    
    if (*(arg1 + 0xa4) == 0)
        HMENU hMenu = GetSystemMenu(arg2, 0)
        InsertMenuA(hMenu, 0, 0xc00, 0, nullptr)
        InsertMenuA(hMenu, 0, MF_BYPOSITION, 0x9cb0, 0x74b860)

return 0
