// 函数: sub_5db340
// 地址: 0x5db340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND esi = *(arg1 + 8)

if (esi != 0)
    int32_t* eax = *(arg1 + 0x10c)
    
    if (eax != 0)
        *(arg1 + 0x9c) = eax[4]
        *(arg1 + 0xa4) = (eax[1] - *eax) s>> 2
    
    char* eax_1 = *(arg1 + 0x110)
    
    if (eax_1 != 0 && *eax_1 != 0)
        sub_5dcf80(esi)
    
    sub_5dccb0(arg1 + 0x98, *(arg1 + 8))
    sub_5dcde0(arg1 + 0xa0, *(arg1 + 8))
    InvalidateRect(*(arg1 + 8), nullptr, 1)
    UpdateWindow(*(arg1 + 8))

BOOL result
result.b = 1
return result
