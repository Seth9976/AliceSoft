// 函数: sub_60c7e0
// 地址: 0x60c7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg2 + 0xc4)
int32_t* ecx = *(arg2 + 0xc0)

if (ecx != eax)
    int32_t var_10_1 = arg1
    int32_t* eax_1 = sub_60ca80(eax, arg1, ecx, eax)
    int32_t var_18_1 = arg1
    sub_535e80(eax_1, *(arg2 + 0xc4))
    *(arg2 + 0xc4) = eax_1

HWND hWnd = *(arg2 + 0x88)
*(arg2 + 0xd4) = 0xffffffff
InvalidateRect(hWnd, nullptr, 1)
return UpdateWindow(*(arg2 + 0x88))
