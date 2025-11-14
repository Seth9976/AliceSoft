// 函数: sub_61f190
// 地址: 0x61f190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

LRESULT wParam = SendMessageA(*(arg1 + 8), 0x14c, 0xffffffff, arg2)

if (wParam != 0xffffffff)
    SendMessageA(*(arg1 + 8), 0x144, wParam, 0)

SendMessageA(*(arg1 + 8), 0x14a, 0, arg2)
SetWindowTextA(*(arg1 + 8), arg2)
WPARAM wParam_1 = 0x10

if (SendMessageA(*(arg1 + 8), 0x146, 0, 0) s> 0x10)
    LRESULT eax_4
    
    do
        SendMessageA(*(arg1 + 8), 0x144, wParam_1, 0)
        wParam_1 += 1
        eax_4 = SendMessageA(*(arg1 + 8), 0x146, 0, 0)
    while (wParam_1 s< eax_4)

int32_t* esi_1 = *(arg1 + 0x10)
esi_1[0x4d] = arg3
sub_621ee0(esi_1, arg3, 1)
InvalidateRect(esi_1[0x22], nullptr, 1)
return UpdateWindow(esi_1[0x22])
