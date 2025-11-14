// 函数: sub_425b20
// 地址: 0x425b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_24
int32_t eax_1 = data_78c474 ^ &var_24
RECT var_18

if (GetClientRect(arg1, &var_18) != 0)
    POINT point
    point.x = arg2
    point.y = arg3
    
    if (ScreenToClient(arg1, &point) != 0)
        int32_t y = point.y
        int32_t eax_3 = PtInRect(&var_18, point.x) - 1
        int32_t eax_4 = neg.d(eax_3)
        sub_6b4885(eax_1 ^ &var_24)
        return sbb.d(eax_4, eax_4, eax_3 != 0) + 1

BOOL result
result.b = 0
sub_6b4885(eax_1 ^ &var_24)
return result
