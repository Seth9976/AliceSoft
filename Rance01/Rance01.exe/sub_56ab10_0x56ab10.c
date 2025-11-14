// 函数: sub_56ab10
// 地址: 0x56ab10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_30
int32_t eax_1 = data_78c474 ^ &var_30
BOOL eax_4

if ((**(arg2 + 0xc0))().b != 0)
    POINT point
    __builtin_memset(&point, 0, 8)
    
    if (GetCursorPos(&point) != 0)
        eax_4 = ScreenToClient(*(arg2 + 8), &point)
        
        if (eax_4 != 0)
            if (*(arg2 + 0xa4) != 0)
                int32_t y = point.y
                int32_t x = point.x
                RECT var_1c
                GetClientRect(*(arg2 + 8), &var_1c)
                int32_t y_1 = y
                eax_4 = PtInRect(&var_1c, x)
            
            if (*(arg2 + 0xa4) == 0 || eax_4 == 1)
                int32_t eax_9 = sub_56e840(arg2 + 0x128, point.x, point.y, arg3, arg1)
                sub_6b4885(eax_1 ^ &var_30)
                return eax_9

eax_4.b = 0
sub_6b4885(eax_1 ^ &var_30)
return eax_4
