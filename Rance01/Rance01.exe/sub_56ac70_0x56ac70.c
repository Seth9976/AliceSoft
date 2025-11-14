// 函数: sub_56ac70
// 地址: 0x56ac70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
int32_t eax_1 = data_78c474 ^ &point
RECT rect

if (IsIconic(*(arg1 + 8)) == 0 && GetClientRect(*(arg1 + 8), &rect) != 0)
    point.x = rect.right
    POINT point_1
    point_1.y = rect.top
    point_1.x = rect.left
    point.y = rect.bottom
    
    if (ClientToScreen(*(arg1 + 8), &point_1) != 0 && ClientToScreen(*(arg1 + 8), &point) != 0
            && arg2 s>= point_1.x && arg2 s< point.x && arg3 s>= point_1.y && arg3 s< point.y)
        BOOL eax_8
        eax_8.b = SetCursorPos(arg2, arg3) != 0
        sub_6b4885(eax_1 ^ &point)
        return eax_8
    
    BOOL eax_7
    eax_7.b = 0
    sub_6b4885(eax_1 ^ &point)
    return eax_7

BOOL eax_3
eax_3.b = 0
sub_6b4885(eax_1 ^ &point)
return eax_3
