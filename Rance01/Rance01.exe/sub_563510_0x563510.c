// 函数: sub_563510
// 地址: 0x563510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_24
BOOL result = data_78c474 ^ &var_24
BOOL result_1 = result

if (*(arg1 + 0xa8) == 0)
    POINT point
    GetCursorPos(&point)
    RECT rect
    result = GetWindowRect(*(arg1 + 4), &rect)
    
    if (result != 0 && point.y s> rect.bottom + 1)
        result = PostMessageA(*(arg1 + 4), 0x7fff, 0, 0)

sub_6b4885(result_1 ^ &var_24)
return result
