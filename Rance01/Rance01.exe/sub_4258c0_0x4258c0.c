// 函数: sub_4258c0
// 地址: 0x4258c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t x = point.x
int32_t y = point.y
char var_19_1

if (*(arg2 + 0x24) == x)
    var_19_1 = 0

if (*(arg2 + 0x24) != x || *(arg2 + 0x28) != y)
    var_19_1 = 1

*(arg2 + 0x24) = x
*(arg2 + 0x28) = y
HWND eax = GetForegroundWindow()
BOOL eax_1

if (eax == arg1)
    eax_1 = sub_425b20(arg1, point.x, point.y)

if (eax != arg1 || eax_1.b == 0)
    if (arg2[0x3b] == 0)
        ShowCursor(1)
        arg2[0x3b] = 1
    
    POINT point_1
    __builtin_memset(&point_1, 0, 8)
    GetCursorPos(&point_1)
    int32_t y_1 = point_1.y
    *(arg2 + 0x24) = point_1.x
    int32_t* ecx_4 = *(arg2 + 0x3c)
    *(arg2 + 0x28) = y_1
    arg2[0x21] = 0
    
    if (ecx_4 != 0)
        int32_t eax_9 = (**ecx_4)()
        *(arg2 + 0x2c) = eax_9
        return eax_9
    
    eax_1 = 0
    *(arg2 + 0x2c) = 0
else
    if (arg2[0x20] != 0)
        if (arg2[0x3b] == 0)
            ShowCursor(1)
            arg2[0x3b] = 1
        
        return sub_425ba0(arg2)
    
    if (arg2[0x3a] == 0)
        if (*arg2 != 0)
            if (var_19_1 != 0)
                if (arg2[0x21] != 0)
                    arg2[0x21] = 0
                    sub_425bf0(arg2)
                
                int32_t* ecx_1 = *(arg2 + 0x3c)
                
                if (ecx_1 == 0)
                    eax_1 = 0
                    *(arg2 + 0x2c) = 0
                else
                    eax_1 = (**ecx_1)()
                    *(arg2 + 0x2c) = eax_1
            else if (arg2[0x21] == 0)
                int32_t* ecx_2 = *(arg2 + 0x3c)
                int32_t eax_6
                
                if (ecx_2 == 0)
                    eax_6 = 0
                else
                    eax_6 = (**ecx_2)()
                
                eax_1 = eax_6 - *(arg2 + 0x2c)
                
                if (eax_1 u>= *(arg2 + 0x30))
                    arg2[0x21] = 1
                    eax_1 = sub_425c10(arg2)
        
        if (arg2[1] != 0 && arg2[0x38] != 0 && var_19_1 != 0)
            *(arg2 + 0x38) = 0
            sub_425bf0(arg2)
            eax_1 = sub_425ba0(arg2)
        
        if (arg2[2] != 0 && arg2[0x39] != 0 && var_19_1 != 0)
            *(arg2 + 0x38) = 0
            sub_425bf0(arg2)
            return sub_425ba0(arg2)
    else if (arg2[0x3b] != 0)
        int32_t eax_3 = ShowCursor(0)
        arg2[0x3b] = 0
        return eax_3

return eax_1
