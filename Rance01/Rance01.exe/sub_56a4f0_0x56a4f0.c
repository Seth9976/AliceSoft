// 函数: sub_56a4f0
// 地址: 0x56a4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
int32_t eax_1 = data_78c474 ^ &point

if (arg3 != 1 && arg3 != 2 && arg3 != 4)
    __builtin_memset(&point, 0, 8)
    RECT var_1c
    
    if (GetCursorPos(&point) != 0 && ScreenToClient(arg2, &point) != 0
            && GetClientRect(arg2, &var_1c) != 0)
        int32_t y = point.y
        
        if (PtInRect(&var_1c, point.x) != 0)
            void* esi_1 = *(arg1 + 0x1ec)
            
            if (esi_1 != 0)
                sub_425a60(esi_1)

sub_6b4885(eax_1 ^ &point)
return 0
