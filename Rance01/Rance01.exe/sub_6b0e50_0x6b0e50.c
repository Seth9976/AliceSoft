// 函数: sub_6b0e50
// 地址: 0x6b0e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
int32_t eax_1 = data_78c474 ^ &point

if (**(arg1 + 0x90) != 0)
    sub_6b4885(eax_1 ^ &point)
    return 1

GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)
int16_t eax_5 = (point.y).w - (rect.top).w
int32_t ebx
ebx.b = 0

if ((*(arg1 + 0x9b) == 0 || *(arg1 + 0x88) == 0) && *(arg1 + 0x94) != 0)
    ebx.b = 0
    WINDOWPLACEMENT lpwndpl
    GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
    
    if (eax_5 s>= lpwndpl.rcNormalPosition.bottom.w - *(arg1 + 0x94) - *(arg1 + 0x5c)
            - lpwndpl.rcNormalPosition.top.w)
        GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
        
        if (eax_5 s<= *(arg1 + 0x5c) - lpwndpl.rcNormalPosition.top.w
                + lpwndpl.rcNormalPosition.bottom.w)
            ebx.b = 1

if (*(arg1 + 0x9b) == 0 && ebx.b != 0)
    SetCursor(LoadCursorA(nullptr, 0x7f85))
    
    if (*(arg1 + 0x88) != 0)
        **(arg1 + 0x90) = 1
        *(arg1 + 0x9b) = 1

*(arg1 + 0x84) = sx.d(eax_5)
sub_6b4885(eax_1 ^ &point)
return 0
